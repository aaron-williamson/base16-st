// Base16 Atelier Savanna dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#171c19", /*  0: Base 00 - Black   */
	"#b16139", /*  1: Base 08 - Red     */
	"#489963", /*  2: Base 0B - Green   */
	"#a07e3b", /*  3: Base 0A - Yellow  */
	"#478c90", /*  4: Base 0D - Blue    */
	"#55859b", /*  5: Base 0E - Magenta */
	"#1c9aa0", /*  6: Base 0C - Cyan    */
	"#87928a", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5f6d64", /*  8: Base 03 - Bright Black */
	"#9f713c", /* 16: Base 09 */
	"#232a25", /* 18: Base 01 */
	"#526057", /* 19: Base 02 */
	"#78877d", /* 20: Base 04 */
	"#dfe7e2", /* 21: Base 06 */
	"#867469", /* 17: Base 0F */
	"#ecf4ee", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#87928a", /* default fg: Base 05 */
	[257] = "#171c19", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
