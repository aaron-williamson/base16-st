// Base16 Solarized Dark dark - simple terminal color setup
// Ethan Schoonover (modified by aramisgithub)
static const char *colorname[] = {
	/* Normal colors */
	"#002b36", /*  0: Base 00 - Black   */
	"#dc322f", /*  1: Base 08 - Red     */
	"#859900", /*  2: Base 0B - Green   */
	"#b58900", /*  3: Base 0A - Yellow  */
	"#268bd2", /*  4: Base 0D - Blue    */
	"#6c71c4", /*  5: Base 0E - Magenta */
	"#2aa198", /*  6: Base 0C - Cyan    */
	"#93a1a1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#657b83", /*  8: Base 03 - Bright Black */
	"#cb4b16", /* 16: Base 09 */
	"#073642", /* 18: Base 01 */
	"#586e75", /* 19: Base 02 */
	"#839496", /* 20: Base 04 */
	"#eee8d5", /* 21: Base 06 */
	"#d33682", /* 17: Base 0F */
	"#fdf6e3", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#93a1a1", /* default fg: Base 05 */
	[257] = "#002b36", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
