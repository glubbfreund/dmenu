/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#include "../colors/colors.h"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font Mono:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] =          { col_highlight,    "#1c1c1c"      },
	[SchemeSel] =           { "#bbbbbb",        col_highlight  },
	[SchemeSelHighlight] =  { "#eeeeee",        col_highlight  },
	[SchemeNormHighlight] = { "#bbbbbb",        "#1c1c1c"      },
	[SchemeOut] =           { "#000000",        "#00ffff"      },
	[SchemeInput] =         { "#bbbbbb",        "#1c1c1c"      },
};
