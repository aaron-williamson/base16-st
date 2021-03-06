// Base16 Atelier Seaside dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#131513", /*  0: Base 00 - Black   */
	"#e6193c", /*  1: Base 08 - Red     */
	"#29a329", /*  2: Base 0B - Green   */
	"#98981b", /*  3: Base 0A - Yellow  */
	"#3d62f5", /*  4: Base 0D - Blue    */
	"#ad2bee", /*  5: Base 0E - Magenta */
	"#1999b3", /*  6: Base 0C - Cyan    */
	"#8ca68c", /*  7: Base 05 - White   */

	/* Bright colors */
	"#687d68", /*  8: Base 03 - Bright Black */
	"#87711d", /* 16: Base 09 */
	"#242924", /* 18: Base 01 */
	"#5e6e5e", /* 19: Base 02 */
	"#809980", /* 20: Base 04 */
	"#cfe8cf", /* 21: Base 06 */
	"#e619c3", /* 17: Base 0F */
	"#f4fbf4", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#8ca68c", /* default fg: Base 05 */
	[257] = "#131513", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
