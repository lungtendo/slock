/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "black",     /* after initialization */
	[INIT] =   "#2d2d2d",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int logow = 17;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[14] = {
	/* x	y	w	h */
       	{ 0,	0,	1,	5 },
        { 1,	4,	4,	1 },
        { 1,	2,	2,	1 },
        { 2,	3,	1,	1 },
        { 4,	3,	1,	1 },
        { 4,	2,	5,	1 },
        { 6,	3,	1,	4 },
        { 7,	4,	6,	1 },
        { 8,	3,	1,	1 },
     	{ 10,	2,	1,	2 },
       	{ 12,	2,	5,	1 },
	{ 12,	3,	1,	1 },
	{ 14,	3,	1,	2 },
	{ 16,	3,	1,	2 },
};

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
