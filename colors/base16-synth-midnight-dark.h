// Base16 Synth Midnight Terminal Dark dark - simple terminal color setup
// Michaël Ball (http://github.com/michael-ball/)
static const char *colorname[] = {
	/* Normal colors */
	"#050608", /*  0: Base 00 - Black   */
	"#b53b50", /*  1: Base 08 - Red     */
	"#06ea61", /*  2: Base 0B - Green   */
	"#c9d364", /*  3: Base 0A - Yellow  */
	"#03aeff", /*  4: Base 0D - Blue    */
	"#ea5ce2", /*  5: Base 0E - Magenta */
	"#42fff9", /*  6: Base 0C - Cyan    */
	"#c1c3c4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#474849", /*  8: Base 03 - Bright Black */
	"#ea770d", /* 16: Base 09 */
	"#1a1b1c", /* 18: Base 01 */
	"#28292a", /* 19: Base 02 */
	"#a3a5a6", /* 20: Base 04 */
	"#cfd1d2", /* 21: Base 06 */
	"#cd6320", /* 17: Base 0F */
	"#dddfe0", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c1c3c4", /* default fg: Base 05 */
	[257] = "#050608", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
