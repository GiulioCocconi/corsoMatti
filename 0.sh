#!/bin/bash
cd

echo "Update sistema in corso..."
sudo apt update && sudo apt upgrade

echo
echo "Installazione git, build-essential, python3, clang, lldb, clang-tools..."
sudo apt install git build-essential python3 clang lldb clang-tools
echo "alias python='python3" >> .bashrc
echo
echo "Installazione JDK..."
sudo add-apt-repository ppa:linuxuprising/java
sudo apt update
sudo apt install oracle-java17-installer

echo
echo "Installazione Atom Editor..."
cd /tmp
wget https://atom.io/download/deb -O atom.deb
dpkg -i atom.deb
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

