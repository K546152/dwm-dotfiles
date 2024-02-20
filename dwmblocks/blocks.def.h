//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/home/$USER/.suckless/scripts/ram.sh",      20,            0},
        {"", "/home/$USER/.suckless/scripts/vpn.sh",      20,            0},
        {"", "/home/$USER/.suckless/scripts/internet.sh", 20,            0},
        {"", "/home/$USER/.suckless/scripts/battery.sh",  20,            0},
        {"", "/home/$USER/.suckless/scripts/volume.sh",   20,            0},
        {"", "/home/$USER/.suckless/scripts/clock.sh",    20,            0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
