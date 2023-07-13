#ifndef _COLOR_H_
#define _COLOR_H_

/** Reset all the Attributes */
extern const char* RESET;

/** Set Font Color
 * Format: "\033[BackColor;FrontColormString\033[0m"
*/
extern const char* FRONT_BLACK;
extern const char* FRONT_WHITE;

extern const char* BACK_BLACK;
extern const char* BACK_WHITE;

/** Set Font Effect */
extern const char* BOLD;
extern const char* UNDERLINE;
extern const char* TWINKLING;
extern const char* REVERSE;
extern const char* HIDE;

#endif
