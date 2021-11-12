#!/bin/bash
# wget https://raw.githubusercontent.com/GiulioCocconi/corsoMatti/main/0.sh && chmod +x 0.sh && ./0.sh

cd

echo "Update sistema in corso..."
sudo apt update && sudo apt upgrade

echo "alias shutup='shutdown -P now'" >> .bashrc

echo
echo "Installazione git, build-essential, python3, clang, lldb, clang-tools, JDK11..."
sudo apt install git build-essential python3 clang lldb clang-tools openjdk-11-jdk
echo "alias python='python3'" >> .bashrc

echo
echo "Installazione Atom Editor..."
cd /tmp
wget https://atom.io/download/deb -O atom.deb
sudo dpkg -i atom.deb
rm atom.deb
cd

echo
echo "Installazione eclipse..."
cd /opt
sudo wget "https://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/2021-09/R/eclipse-java-2021-09-R-linux-gtk-x86_64.tar.gz&r=1" -O eclipse.tar.gz
sudo tar xvf eclipse.tar.gz
sudo rm eclipse.tar.gz
cd
echo "alias eclipse='/opt/eclipse/eclipse'" >> .bashrc
echo
echo "Installazione completata..."
