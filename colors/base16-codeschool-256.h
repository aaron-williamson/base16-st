// Base16 Codeschool dark - simple terminal color setup
// blockloop
static const char *colorname[] = {
	/* Normal colors */
	"#232c31", /*  0: Base 00 - Black   */
	"#2a5491", /*  1: Base 08 - Red     */
	"#237986", /*  2: Base 0B - Green   */
	"#a03b1e", /*  3: Base 0A - Yellow  */
	"#484d79", /*  4: Base 0D - Blue    */
	"#c59820", /*  5: Base 0E - Magenta */
	"#b02f30", /*  6: Base 0C - Cyan    */
	"#9ea7a6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#3f4944", /*  8: Base 03 - Bright Black */
	"#2a5491", /*  9: Base 08 - Red          */
	"#237986", /* 10: Base 0B - Green        */
	"#a03b1e", /* 11: Base 0A - Yellow       */
	"#484d79", /* 12: Base 0D - Blue         */
	"#c59820", /* 13: Base 0E - Magenta      */
	"#b02f30", /* 14: Base 0C - Cyan         */
	"#b5d8f6", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#43820d", /* 16: Base 09 */
	"#c98344", /* 17: Base 0F */
	"#1c3657", /* 18: Base 01 */
	"#2a343a", /* 19: Base 02 */
	"#84898c", /* 20: Base 04 */
	"#a7cfa3", /* 21: Base 06 */

	[255] = 0,

	[256] = "#9ea7a6", /* default fg: Base 05 */
	[257] = "#232c31", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
