/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#include "../colors/colors.h"

static int topbar           = 1;    /* -b  option; if 0, dmenu appears at bottom     */
static int dmx              = 160;  /* put dmenu at this x offset */
static int dmy              = 0;    /* put dmenu at this y offset (measured from the bottom if topbar is 0) */
static unsigned int dmw     = 1500; /* make dmenu this wide */
static unsigned int lines   = 0;    /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static const char *prompt   = NULL; /* -p  option; prompt to the left of input field */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static const char *fonts[] = {
	"JetBrainsMono Nerd Font Mono:size=12"
};

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] =          { col_highlight,    "#1c1c1c"      },
	[SchemeSel] =           { "#bbbbbb",        col_highlight  },
	[SchemeSelHighlight] =  { "#eeeeee",        col_highlight  },
	[SchemeNormHighlight] = { "#bbbbbb",        "#1c1c1c"      },
	[SchemeOut] =           { "#000000",        "#00ffff"      },
	[SchemeInput] =         { "#bbbbbb",        "#1c1c1c"      },
};
