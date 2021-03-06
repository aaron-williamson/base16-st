// Base16 Atelier Plateau dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#1b1818", /*  0: Base 00 - Black   */
	"#ca4949", /*  1: Base 08 - Red     */
	"#4b8b8b", /*  2: Base 0B - Green   */
	"#a06e3b", /*  3: Base 0A - Yellow  */
	"#7272ca", /*  4: Base 0D - Blue    */
	"#8464c4", /*  5: Base 0E - Magenta */
	"#5485b6", /*  6: Base 0C - Cyan    */
	"#8a8585", /*  7: Base 05 - White   */

	/* Bright colors */
	"#655d5d", /*  8: Base 03 - Bright Black */
	"#ca4949", /*  9: Base 08 - Red          */
	"#4b8b8b", /* 10: Base 0B - Green        */
	"#a06e3b", /* 11: Base 0A - Yellow       */
	"#7272ca", /* 12: Base 0D - Blue         */
	"#8464c4", /* 13: Base 0E - Magenta      */
	"#5485b6", /* 14: Base 0C - Cyan         */
	"#f4ecec", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#b45a3c", /* 16: Base 09 */
	"#bd5187", /* 17: Base 0F */
	"#292424", /* 18: Base 01 */
	"#585050", /* 19: Base 02 */
	"#7e7777", /* 20: Base 04 */
	"#e7dfdf", /* 21: Base 06 */

	[255] = 0,

	[256] = "#8a8585", /* default fg: Base 05 */
	[257] = "#1b1818", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
