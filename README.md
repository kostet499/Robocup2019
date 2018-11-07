# Robocup2019

# 1) The pre-requisites:

    -> sudo apt-get install build-essential checkinstall 

    -> sudo apt-get install gcc-multilib libreadline-gplv2-dev libncursesw5-dev libssl-dev libsqlite3-dev tk-dev libgdbm-dev libc6-dev libc6-i386 libbz2-dev 

# 2) Install: Python 2.7 (only) + CMake + QTCreator 

    -> sudo apt-get install gcc cmake qtcreator 

    -> cd /usr/src 

    -> wget https://www.python.org/ftp/python/2.7.13/Python-2.7.13.tgz 

    -> tar xzf Python-2.7.13.tgz 

    -> cd Python-2.7.13 

    -> sudo ./configure 

    -> sudo make altinstall 

# 3) Install: qiBuild 

    -> sudo apt install python-pip

    -> pip install qibuild

  If qiBuild doesn't launch: 

        -> gedit ~/.bashrc and in the end of the file add: export PATH=${PATH}:${HOME}/.local/bin

 # 4) Install SDK and cross-toolchain

    -> git clone https://github.com/MolVlad/Robocup2019

Download and unzip to the directory Robocup2019:
    
    https://drive.google.com/open?id=162PeZSlJ2_Skj8nzoH5qBYcyolB-7E3t

# 5) Configuration: qiBuild Toolchains

 You can just execute my script:
 
    -> ./config_toolchain
    
 or configure manually:

 Configure toolchain for the desktop:
 
    -> qitoolchain create desktop Robocup2019/naoqi/toolchain.xml
  
    -> qibuild add-config desktop -t desktop
  
  Configure toolchain for the robot:
  
    -> qitoolchain create robot /toolchain.xml
  
    -> qibuild add-config robot -t robot                                       

 # 6) Compile the Program C++ with the SDK - ALDEBARAN

Create a new project (if it's necessary, or move to the directory with example):

    -> qisrc create template

Then init worktree:

    -> qibuild init
    
 Below <toolchain> means "toolchain_for_desktop", if you want to build for the desktop, or "toolchain_for_robot" otherwise:
    
    -> qibuild configure -c <toolchain>
    
    -> qibuild make -c <toolchain>
    
 # 7) Start the Project 
 
 If you build your project for the desktop:
 
    -> cd build-toolchain_for_the_
