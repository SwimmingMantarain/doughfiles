static const char norm_fg[] = "#a6abc2";
static const char norm_bg[] = "#020306";
static const char norm_border[] = "#747787";

static const char sel_fg[] = "#a6abc2";
static const char sel_bg[] = "#464E75";
static const char sel_border[] = "#a6abc2";

static const char urg_fg[] = "#a6abc2";
static const char urg_bg[] = "#334575";
static const char urg_border[] = "#334575";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
