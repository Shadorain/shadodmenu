/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Source Code Pro:pixelsize=14:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

// Define color variables
static const char fg[]    = "#e3c7fc";
static const char bg[]    = "#0d0d14";
static const char gray[]  = "#191926";
static const char pred[]  = "#E9729D";
static const char mint[]  = "#bd93f9";
static const char pink[]  = "#FF4971";

static const char *colors[SchemeLast][2] = {
	/*                        fg    bg    */
	[SchemeNorm]          = { fg,   bg   },
	[SchemeSel]           = { pink, gray },
	[SchemeSelHighlight]  = { mint, gray },
	[SchemeNormHighlight] = { mint, bg   },
	[SchemeOut]           = { bg,   mint },
	[SchemeMid]           = { pred, bg   },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 25;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
