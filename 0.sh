#!/bin/bash
# wget https://raw.githubusercontent.com/GiulioCocconi/corsoMatti/main/0.sh && chmod +x 0.sh && ./0.sh

cd

echo "Update sistema in corso..."
sudo apt update && sudo apt upgrade

echo
read -p "Installare pacchetti base? " base
base=${base^^}
if [[ $base == "S" ]]; then
	echo "Installazione git, build-essential, python3, clang, lldb, clang-tools, JDK11..."
	sudo apt install git build-essential python3 clang lldb clang-tools openjdk-11-jdk
	echo "alias python='python3'" >> .bashrc
	echo "alias shutup='shutdown -P now'" >> .bashrc
	cd

	echo
fi

read -p "Configurare git? " git
git=${git^^}
if [[ $git == "S" ]]; then
	echo "Configurazione git"
	read -p "Nome? " nome
	read -p "Indirizzo e-mail? " email

	git config --global user.name "$nome"
	git config --global user.email $email
	git config --global credential.helper "store --file ~/.git_credentials"
	git config --global pull.rebase "false"
	
	echo
fi

read -p "Installare atom? " atom
atom=${atom^^}
if [[ $atom == "S" ]]; then
	echo "Installazione Atom Editor..."

	cd /tmp
	wget https://atom.io/download/deb -O atom.deb
	sudo dpkg -i atom.deb
	rm atom.deb
	cd

	echo
fi

read -p "Installare eclipse? " eclipse
eclipse=${eclipse^^}
if [[ $eclipse == "S" ]]; then
	echo "Installazione eclipse..."

	cd /opt
	sudo wget "https://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/2021-09/R/eclipse-java-2021-09-R-linux-gtk-x86_64.tar.gz&r=1" -O eclipse.tar.gz
	sudo tar xvf eclipse.tar.gz
	sudo rm eclipse.tar.gz
	cd
	echo "alias eclipse='/opt/eclipse/eclipse'" >> .bashrc

	echo

fi

read -p "Installare librerie Java libro di testo? " libjava
libjava=${libjava^^}

if [[ $libjava == "S" ]]; then
	echo "Installazione librerie Java..."

	cd "/usr/local"
	sudo curl -O "https://lift.cs.princeton.edu/java/linux/lift-cli.zip"
	sudo unzip lift-cli.zip
	sudo rm lift-cli.zip

	echo
fi


echo "Installazione completata..."
