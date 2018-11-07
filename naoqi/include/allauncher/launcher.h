#pragma once
/* -*- Mode: C++;  -*- */
/*
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**
** Copyright (C) 2011, 2013 Cedric GESTES
*/


#ifndef _LIB_ALLAUNCHER_ALLAUNCHER_LAUNCHER_H_
#define _LIB_ALLAUNCHER_ALLAUNCHER_LAUNCHER_H_

#include <map>
#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>

namespace qi
{
  class Session;
}

namespace AL
{
  class ALSharedLibrary;
  class ALBroker;


  class LauncherStat {
  public:
    LauncherStat()
      : loadlib(0)
      , createmodule(0)
    {}

    int loadlib;
    int createmodule;
  };

#ifdef I_AM_A_ROBOT
  #define PROD_IMAGE_FILE "/etc/prodimage"

  static bool inline is_prod_image()
  {
    return access(PROD_IMAGE_FILE, F_OK) != -1;
  }
#endif /* I_AM_A_ROBOT */

  /**
   * A class to use to launch/remove module at demand
   *
   * FIXME: add a unloadLibrary() function?
   */
  class Launcher
  {
  public:
    /// Constructor taking a broker, required to instantiate NAOqi modules.
    explicit Launcher(const boost::shared_ptr<AL::ALBroker> pBroker);

    /// Constructor taking a session. The broker is constructed out of it.
    explicit Launcher(boost::shared_ptr<qi::Session> session);

    typedef std::pair<std::string, std::string> ModuleInfo;
    typedef std::vector<ModuleInfo> ModuleInfoVector;
    typedef std::map<std::string, ModuleInfoVector> AutoLoadMap;


    /**
     * Parse the user autoload.ini (/home/nao/naoqi/preferences/autoload.ini)
     * file and try to launch everything.
     * Errors are caught and printed: does not throw on error.
     */
    void loadUserAutoload(const std::vector<std::string> &blacklist = std::vector<std::string>());

    /**
     * Parse the autoload.ini file and try to launch everything.
     * Errors are caught and printed: does not throw on error.
     */
    void loadAutoload(const std::vector<std::string> &blacklist = std::vector<std::string>());

    /**
     * Parse the iniPath file and try to launch everything.
     * Errors are caught and printed: does not throw on error.
     */
    void loadIni(const std::string &iniPath, const std::vector<std::string> &blacklist, bool coreNeeded=false);

    /**
     * Load a library inside the broker.
     * Throw on error.
     */
    void loadLibrary(const std::string &moduleName, const std::string launcherName="");

    /// Load and start a service from a NAOqi2 module.
    void loadModule(const std::string &moduleName, const std::string launcherName="");

    int loadProgram(const std::string &programPath);
    int loadPython(const std::string &scriptPath);

    void dumpStat();

    bool moduleInAutoload(const std::string& module,
                          const std::string& section);
  private:
    AutoLoadMap parseIni(const std::string &filename);
    bool loadSection(AutoLoadMap amap, const std::string &name, const std::vector<std::string> &blacklist);
    void printAutoLoadMap(const AutoLoadMap &amap);

  private:
    boost::shared_ptr<AL::ALBroker>     _broker;
    std::vector<std::string>            _sdkPrefix;
    std::map<std::string, LauncherStat> _stats;
  };

} // namespace AL

#endif  // _LIB_ALLAUNCHER_ALLAUNCHER_LAUNCHER_H_
