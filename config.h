//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,		9},
	{"",	"music",				18000,		11 },
	{"",	"portpackages",				0,		8},
	{"",	"torrent",				20,		7},
	{"",	"news",					0,		6},
	{"",	"mailbox",				180,		12 },
	{"",	"cpubars",				1,		18 },
	{"",	"memory",				1,		14 },
	{"",	"cpu",					1,		18 },
	{"",	"disk",					180,		13 },
	{"",	"disk /home",				180,		13 },
	{"",	"volume",				0,		10 },
	{"",	"clock",				1,		1 },
	{"",	"internet",				5,		4 },
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
