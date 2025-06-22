const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#020306", /* black   */
  [1] = "#334575", /* red     */
  [2] = "#464E75", /* green   */
  [3] = "#483B96", /* yellow  */
  [4] = "#375087", /* blue    */
  [5] = "#376593", /* magenta */
  [6] = "#495788", /* cyan    */
  [7] = "#a6abc2", /* white   */

  /* 8 bright colors */
  [8]  = "#747787",  /* black   */
  [9]  = "#334575",  /* red     */
  [10] = "#464E75", /* green   */
  [11] = "#483B96", /* yellow  */
  [12] = "#375087", /* blue    */
  [13] = "#376593", /* magenta */
  [14] = "#495788", /* cyan    */
  [15] = "#a6abc2", /* white   */

  /* special colors */
  [256] = "#020306", /* background */
  [257] = "#a6abc2", /* foreground */
  [258] = "#a6abc2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
