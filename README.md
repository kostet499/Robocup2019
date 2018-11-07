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

 # 4) Install SDK

    -> git clone https://github.com/MolVlad/Robocup2019

    -> cd Robocup2019

# 5) Configuration: qiBuild Toolchains

    -> ./config_toolchain

  If an error occure: "access denied"

        -> chmod u+x config_toolchain
        
        and try again
        
        https://community.ald.softbankrobotics.com/en/resources/software/nao-v6-only-sdks-and-documentation-283
        
        7684067@mail.ru
       
        MIPT2018
        
 # To Compile the Program C++ with the SDK - ALDEBARAN

    -> cd 

Create a new project

    ->qisrc create template

