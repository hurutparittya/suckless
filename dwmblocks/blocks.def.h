//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/		/*Command*/				/*Update Interval*/	/*Update Signal*/
	{	"",	"amixer get Master | awk -F'[][]' 'END{ ORS=\"\"; if ($4 == \"on\") {print \" \"$2} else {print \"婢\"}}'",	0,	1},
	{	"",	"date +' %H:%M   %Y %m %d   '",	10,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
