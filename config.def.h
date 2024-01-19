static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "col_init",   STRING, &colorname[INIT]   },
	{ "col_input",  STRING, &colorname[INPUT]  },
	{ "col_failed", STRING, &colorname[FAILED] },
	{ "col_caps",   STRING, &colorname[CAPS]   },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
