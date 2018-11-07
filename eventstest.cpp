#include "EventsTest.h"

#include <alvalue/alvalue.h>
#include <alcommon/alproxy.h>
#include <alcommon/albroker.h>
#include <qi/log.hpp>
#include <althread/alcriticalsection.h>

EventsTest::EventsTest(
    boost::shared_ptr<AL::ALBroker> broker,
    const std::string& name): AL::ALModule(broker, name),
    fCallbackMutex(AL::ALMutex::createALMutex())

    {
        // change descriptions maybe
        setModuleDescription("Test of reacting the events");
        functionName("onSomeEventHappened", getName(), "Let me think what to do");
        BIND_METHOD(EventsTest::onSomeEventHappened);
    }

// seems not to be changed
EventsTest::~EventsTest() {
    fMemoryProxy.unsubscribeToEvent("onSomeEventHappened", "EventsTest");
}

void EventsTest::init() {
    try {
        fMemoryProxy = AL::ALMemoryProxy(getParentBroker());
        // here choose the Event
        fState = fMemoryProxy.getData("RightBumperPressed");
        fMemoryProxy.subscribeToEvent("RightBumperPressed", "EventsTest", "onSomeEventHappened");
    }
    catch(const AL::ALError& e) {
        qiLogError("EventsTest") << e.what() << std::endl;
    }
   }

    // here the callback to event we need to write
    void EventsTest::onSomeEventHappened() {
        qiLogInfo("EventsTest") << "Executing the callback" << std::endl;

        AL::ALCriticalSection section(fCallbackMutex);

        // here the event data we need to get
        fState = fMemoryProxy.getData("RightBumperPressed");

        if(fState > 0.5f) {
            return;
        }
        try {
            fTtsProxy = AL::ALTextToSpeechProxy(getParentBroker());
            fTtsProxy.say("Event happened");
        }
        catch (const AL::ALError& e) {
            qiLogError("EventsTest") << e.what() << std::endl;
        }

    }
