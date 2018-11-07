#ifndef MODULECREATING_H
#define MODULECREATING_H

#include <boost/shared_ptr.hpp>
#include <alcommon/almodule.h>
#include <string>

#include <alproxies/almemoryproxy.h>
#include <alproxies/altexttospeechproxy.h>
#include <althread/almutex.h>

namespace AL { class ALBroker; }

class EventsTest : public AL::ALModule {
    public:
        EventsTest(boost::shared_ptr<AL::ALBroker> broker, const std::string& name);

        virtual ~EventsTest();

        virtual void init();

        void onSomeEventHappened();

    private:
        AL::ALMemoryProxy fMemoryProxy;
        AL::ALTextToSpeechProxy fTtsProxy;

        boost::shared_ptr<AL::ALMutex> fCallbackMutex;

        float fState;
};

#endif
