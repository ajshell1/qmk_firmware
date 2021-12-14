#include QMK_KEYBOARD_H
#include "ajshell1.h"

// Brevity defines
#define KN KC_NO
#define FT KC_TRNS


//order doesn't matter here
enum unicode_names {
    //AT_SYMBOL,
    GBP,
    JPY,
    EURO,
    PLUS_MINUS,
    //QUOTATION_MARK,
    //TILDE_OPERATOR,
    //SINGLE_RIGHT_POINTING_ANGLE_QUOTATION_MARK,
    //SINGLE_LEFT_POINTING_ANGLE_QUOTATION_MARK,
    //BACKTICK,
    SQT_OPEN,
    DQT_OPEN,
    DQT_CLSE,
    SQT_CLSE,
    //DQUOTE_OPEN,
    //DQUOTE_CLOSE,
    //PRIME,
    //PIPE,


// Greek
// [main board] row 1
    GREEK_LC_THETA,
    GREEK_UC_THETA,
    GREEK_LC_OMEGA,
    GREEK_UC_OMEGA,
    GREEK_LC_EPSILON,
    GREEK_UC_EPSILON,
    GREEK_LC_RHO,
    GREEK_UC_RHO,
    GREEK_UC_TAU,
    GREEK_LC_TAU,
    GREEK_UC_PSI,
    GREEK_LC_PSI,
    GREEK_LC_UPSILON,
    GREEK_UC_UPSILON,
    GREEK_LC_IOTA,
    GREEK_UC_IOTA,
    GREEK_LC_OMICRON,
    GREEK_UC_OMICRON,
    GREEK_LC_PI,
    GREEK_UC_PI,


// [main board] row 2
    GREEK_LC_ALPHA,
    GREEK_UC_ALPHA,
    GREEK_LC_SIGMA,
    GREEK_UC_SIGMA,
    GREEK_LC_DELTA,
    GREEK_UC_DELTA,
    GREEK_LC_PHI,
    GREEK_UC_PHI,
    GREEK_LC_GAMMA,
    GREEK_UC_GAMMA,
    GREEK_LC_ETA,
    GREEK_UC_ETA,
    GREEK_LC_YOT,
    GREEK_UC_YOT,
    GREEK_LC_KAPPA,
    GREEK_UC_KAPPA,
    GREEK_LC_LAMDA,
    GREEK_UC_LAMDA,

// [main board] row 3
    GREEK_LC_ZETA,
    GREEK_UC_ZETA,
    GREEK_LC_XI,
    GREEK_UC_XI,
    GREEK_LC_CHI,
    GREEK_UC_CHI,
    GREEK_LC_FINAL_SIGMA,
    // GREEK_UC_SIGMA, // Final sigma doesn't differentiate the capitalised form
    GREEK_LC_BETA,
    GREEK_UC_BETA,
    GREEK_LC_NU,
    GREEK_UC_NU,
    GREEK_LC_MU,
    GREEK_UC_MU,

    //Cyrillic,
    //ORDER TAKEN FROM HERE:,
    //https://en.wikipedia.org/wiki/Cyrillic_script,
    CYR_LC_A,
    CYR_UC_A,
    CYR_LC_BE,
    CYR_UC_BE,
    CYR_LC_VE,
    CYR_UC_VE,
    CYR_LC_GE,
    CYR_UC_GE,
    CYR_LC_DE,
    CYR_UC_DE,
    CYR_LC_YE,
    CYR_UC_YE,
    CYR_LC_YO,
    CYR_UC_YO,
    CYR_LC_ZHE,
    CYR_UC_ZHE,
    CYR_LC_ZE,
    CYR_UC_ZE,
    CYR_LC_I,
    CYR_UC_I,
    CYR_UC_SHORTI,
    CYR_LC_SHORTI,
    CYR_LC_KA,
    CYR_UC_KA,
    CYR_LC_EL,
    CYR_UC_EL,
    CYR_LC_EM,
    CYR_UC_EM,
    CYR_LC_EN,
    CYR_UC_EN,
    CYR_LC_O,
    CYR_UC_O,
    CYR_LC_PE,
    CYR_UC_PE,
    CYR_LC_ER,
    CYR_UC_ER,
    CYR_LC_ES,
    CYR_UC_ES,
    CYR_LC_TE,
    CYR_UC_TE,
    CYR_LC_U,
    CYR_UC_U,
    CYR_LC_EF,
    CYR_UC_EF,
    CYR_LC_KHA,
    CYR_UC_KHA,
    CYR_LC_TSE,
    CYR_UC_TSE,
    CYR_LC_CHE,
    CYR_UC_CHE,
    CYR_LC_SHA,
    CYR_UC_SHA,
    CYR_LC_SHCHA,
    CYR_UC_SHCHA,
    CYR_LC_YER,
    CYR_UC_YER,
    CYR_LC_YERY,
    CYR_UC_YERY,
    CYR_LC_YERI,
    CYR_UC_YERI,
    CYR_LC_E,
    CYR_UC_E,
    CYR_LC_YU,
    CYR_UC_YU,
    CYR_LC_YA,
    CYR_UC_YA,
    //Less used Cyrillic
    CYR_LC_UAGE,
    CYR_UC_UAGE,
    CYR_LC_DJE,
    CYR_UC_DJE,
    CYR_LC_GJE,
    CYR_UC_GJE,
    CYR_LC_UAYE,
    CYR_UC_UAYE,
    CYR_LC_DZE,
    CYR_UC_DZE,
    CYR_LC_IDOT,
    CYR_UC_IDOT,
    CYR_LC_YI,
    CYR_UC_YI,
    CYR_UC_JE,
    CYR_LC_JE,
    CYR_LC_LJE,
    CYR_UC_LJE,
    CYR_LC_NJE,
    CYR_UC_NJE,
    CYR_LC_TJE,
    CYR_UC_TJE,
    CYR_LC_KJE,
    CYR_UC_KJE,
    CYR_LC_SHORTU,
    CYR_UC_SHORTU,
    CYR_LC_DZHE,
    CYR_UC_DZHE,
    
    //Greek noncaps
    
     MUCH_LESS_THAN,
    MUCH_GREATER_THAN,
    INTEGRAL,
    
    // APL
    N_ARY_LOGICAL_AND,
    N_ARY_LOGICAL_OR,
    N_ARY_INTERSECT,
    N_ARY_UNION,
    SUBSET_OF,
    SUPERSET_OF,
    FORALL,
    LEMNISCATE,
    THERE_EXISTS,
    PARTIAL_DIFFERENTIAL,
    UP_TACK,
    DOWN_TACK,
    RIGHT_TACK,
    LEFT_TACK,
    UPWARDS_ARROW,
    DOWNARDS_ARROW,
    LEFTWARDS_ARROW,
    RIGHTWARDS_ARROW,
    LEFTRIGHT_ARROW,
    LEFT_FLOOR,
    LEFT_CEILING,
    NOT_EQUAL_TO,
    ASYMPTOTICALLY_EQUAL_TO,
    NOT_ASYMPTOTICALLY_EQUAL_TO,
    LESS_THAN_OR_EQUAL,
    GREATER_THAN_OR_EQUAL,
	
//greek layer, dropped for the 128 rule:
// [main board] row 0
    CONTOUR_INTEGRAL,
    NEGATION,
    COPTIC_LC_DEI,
    DOUBLE_DAGGER,
    NABLA,
    CENT,
    DEGREE,
    APL_QUAD,
    DIVISION,
    MULTIPLICATION,
    PILCROW,
    LARGE_CIRCLE,
    HORIZONTAL_BAR,
    APPROXIMATELY_EQUAL_TO,
    DOUBLE_VERTICAL_LINE,
    SQUARE_IMAGE_OF,
    SQUARE_ORIGINAL_OF,
    

    MATHEMATICAL_LEFT_WHITE_SQUARE_BRACKET,
    MATHEMATICAL_RIGHT_WHITE_SQUARE_BRACKET,
    TWO_DOT_LEADER,
    BULLET,
    //HEBREW
    HEB_ALEF,
    HEB_BET,
    HEB_GIMEL,
    HEB_DALET,
    HEB_HE,
    HEB_VAV,
    HEB_ZAYIN,
    HEB_HET,
    HEB_TET,
    HEB_YOD,
    HEB_FINAL_KAF,
    HEB_KAF,
    HEB_LAMED,
    HEB_FINAL_MEM,
    HEB_MEM,
    HEB_FINAL_NUN,
    HEB_NUN,
    HEB_SAMEKH,
    HEB_AYIN,
    HEB_FINAL_PE,
    HEB_PE,
    HEB_FINAL_TSADI,
    HEB_TSADI,
    HEB_QOF,
    HEB_RESH,
    HEB_SHIN,
    HEB_TAV,
    HEB_P_SHEVA,
    HEB_P_HATAF_SEGOL,
    HEB_P_HATAF_PATAH,
    HEB_P_HATAF_QAMATS,
    HEB_P_HIRIQ,
    HEB_P_TSERE,
    HEB_P_SEGOL,
    HEB_P_PATAH,
    HEB_P_QAMATS,
    HEB_P_HOLAM,
    HEB_P_HOLAM_HASER_VAV,
    HEB_P_QUBUTS,
    HEB_P_DAGESH_MAPIQ,
    HEB_P_METEG,
    HEB_PUNCT_MAQAF,
    HEB_P_RAFE,
    HEB_PUNCT_PASEQ,
    HEB_P_SHIN_DOT,
    HEB_P_SIN_DOT,
    //CODE PAGE 437
    FTS_WHITE_SMILING_FACE,
    FTS_BLACK_SMILING_FACE,
    FTS_BLACK_HEART_SUIT,
    FTS_BLACK_DIAMOND_SUIT,
    FTS_BLACK_CLUB_SUIT,
    FTS_BLACK_SPADE_SUIT,
    FTS_INVERSE_BULLET,
    FTS_WHITE_CIRCLE,
    FTS_INVERSE_WHITE_CIRCLE,
    FTS_MALE_SIGN,
    FTS_FEMALE_SIGN,
    FTS_EIGTH_NOTE,
    FTS_BEAMED_EIGHTH_NOTE,
    FTS_WHITE_SUN_WITH_RAYS,
    FTS_BLACK_RIGHT_POINTING_POINTER,
    FTS_BLACK_LEFT_POINTING_POINTER,
    FTS_UP_DOWN_ARROW,
    FTS_DOUBLE_EXCLAMATION_MARK,
    FTS_SECTION_SIGN,
    FTS_BLACK_RECTANGLE,
    FTS_UP_DOWN_ARROW_WITH_BASE,
    FTS_RIGHT_ANGLE,
    FTS_BLACK_UP_POINTING_TRIANGLE,
    FTS_BLACK_DOWN_POINTING_TRIANGLE,
    FTS_HOUSE,
    FTS_PESETA_SIGN,
    FTS_LATIN_SMALL_LETTER_F_WITH_HOOK,
    FTS_FEMININE_ORDINAL_INDICATOR,
    FTS_MASCULINE_ORDINAL_INDICATOR,
    FTS_INVERTED_QUESTION_MARK,
    FTS_REVERSED_NOT_SIGN,
    FTS_VULGAR_FRACTION_ONE_HALF,
    FTS_VULGAR_FRACTION_ONE_QUARTER,
    FTS_INVERTED_EXCLAMATION_MARK,
    FTS_LEFT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK,
    FTS_RIGHT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK,
    FTS_LIGHT_SHADE,
    FTS_MEDIUM_SHADE,
    FTS_DARK_SHADE,
    FTS_BOX_DRAWINGS_LIGHT_VERTICAL,
    FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_LEFT,
    FTS_BOX_DRAWINGS_VERTICAL_SINGLE_AND_LEFT_DOUBLE,
    FTS_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_LEFT_SINGLE,
    FTS_BOX_DRAWINGS_DOWN_DOUBLE_AND_LEFT_SINGLE,
    FTS_BOX_DRAWINGS_DOWN_SINGLE_AND_LEFT_DOUBLE,
    FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_LEFT,
    FTS_BOX_DRAWINGS_DOUBLE_VERTICAL,
    FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_LEFT,
    FTS_BOX_DRAWINGS_DOUBLE_UP_AND_LEFT,
    FTS_BOX_DRAWINGS_DOUBLE_UP_AND_LEFT_SINGLE,
    FTS_BOX_DRAWINGS_UP_SINGLE_AND_LEFT_DOUBLE,
    FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_LEFT,
    FTS_BOX_DRAWINGS_LIGHT_UP_AND_RIGHT,
    FTS_BOX_DRAWINGS_LIGHT_UP_AND_HORIZONTAL,
    FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_HORIZONTAL,
    FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_RIGHT,
    FTS_BOX_DRAWINGS_LIGHT_HORIZONTAL,
    FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_HORIZONTAL,
    FTS_BOX_DRAWINGS_VERTICAL_SINGLE_AND_RIGHT_DOUBLE,
    FTS_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_RIGHT_SINGLE,
    FTS_BOX_DRAWINGS_DOUBLE_UP_AND_RIGHT,
    FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_RIGHT,
    FTS_BOX_DRAWINGS_DOUBLE_UP_AND_HORIZONTAL,
    FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_HORIZONTAL,
    FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_RIGHT,
    FTS_BOX_DRAWINGS_DOUBLE_HORIZONTAL,
    FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_HORIZONTAL,
    FTS_BOX_DRAWINGS_UP_SINGLE_AND_HORIZONTAL_DOUBLE,
    FTS_BOX_DRAWINGS_UP_DOUBLE_AND_HORIZONTAL_SINGLE,
    FTS_BOX_DRAWINGS_DOWN_SINGLE_AND_HORIZONTAL_DOUBLE,
    FTS_BOX_DRAWINGS_DOWN_DOUBLE_AND_HORIZONTAL_SINGLE,
    FTS_BOX_DRAWINGS_UP_DOUBLE_AND_RIGHT_SINGLE,
    FTS_BOX_DRAWINGS_UP_SINGLE_AND_RIGHT_DOUBLE,
    FTS_BOX_DRAWINGS_DOWN_SINGLE_AND_RIGHT_DOUBLE,
    FTS_BOX_DRAWINGS_DOWN_DOUBLE_AND_RIGHT_SINGLE,
    FTS_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_HORIZONTAL_SINGLE,
    FTS_BOX_DRAWINGS_VERTICAL_SINGLE_AND_HORIZONTAL_DOUBLE,
    FTS_BOX_DRAWINGS_LIGHT_UP_AND_LEFT,
    FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_RIGHT,
    FTS_FULL_BLOCK,
    FTS_LOWER_HALF_BLOCK,
    FTS_LEFT_HALF_BLOCK,
    FTS_RIGHT_HALF_BLOCK,
    FTS_UPPER_HALF_BLOCK,
    FTS_INTERSECTION,
    FTS_TOP_HALF_INTEGRAL,
    FTS_BOTTOM_HALF_INTEGRAL,
    FTS_BULLET_OPERATOR,
    FTS_MIDDLE_DOT,
    FTS_SQUARE_ROOT,
    FTS_SUPERSCRIPT_LATIN_SMALL_LETTER_N,
    FTS_SUPERSCRIPT_TWO,
    FTS_BLACK_SQUARE,
};

const uint32_t PROGMEM unicode_map[] = {
//ORDER MATTERS HERE.
//Only the first 128 will work with XP(i, j)
// Unicode char definitions
    //[AT_SYMBOL] = 0x0040,
    //[QUOTATION_MARK] = 0x0022,
    //[TILDE_OPERATOR] = 0x223C,
    //[SINGLE_RIGHT_POINTING_ANGLE_QUOTATION_MARK] = 0x203A,
    //[SINGLE_LEFT_POINTING_ANGLE_QUOTATION_MARK] = 0x2039,
    //[BACKTICK] = 0x2018,
    //[DQUOTE_OPEN] = 0x201C,
    //[DQUOTE_CLOSE] = 0x201D,
    //[PRIME] = 0x2019,
    //[PIPE] = 0x2502,


// Greek

// [main board] row 1
    [GREEK_LC_THETA] = 0x03B8,
    [GREEK_UC_THETA] = 0x0398,
    [GREEK_LC_OMEGA] = 0x03C9,
    [GREEK_UC_OMEGA] = 0x03A9,
    [GREEK_LC_EPSILON] = 0x03B5,
    [GREEK_UC_EPSILON] = 0x0395,
    [GREEK_LC_RHO] = 0x03C1,
    [GREEK_UC_RHO] = 0x03A1,
    [GREEK_LC_TAU] = 0x03C4,
    [GREEK_UC_TAU] = 0x03A4,
    [GREEK_LC_PSI] = 0x03C8,
    [GREEK_UC_PSI] = 0x03A8,
    [GREEK_LC_UPSILON] = 0x03C5,
    [GREEK_UC_UPSILON] = 0x03A5,
    [GREEK_LC_IOTA] = 0x03B9,
    [GREEK_UC_IOTA] = 0x0399,
    [GREEK_LC_OMICRON] = 0x03BF,
    [GREEK_UC_OMICRON] = 0x039F,
    [GREEK_LC_PI] = 0x03C0,
    [GREEK_UC_PI] = 0x03A0,
// [main board] row 2
    [GREEK_LC_ALPHA] = 0x03B1,
    [GREEK_UC_ALPHA] = 0x0391,
    [GREEK_LC_SIGMA] = 0x03C3,
    [GREEK_UC_SIGMA] = 0x03A3,
    [GREEK_LC_DELTA] = 0x03B4,
    [GREEK_UC_DELTA] = 0x0394,
    [GREEK_LC_PHI] = 0x03C6,
    [GREEK_UC_PHI] = 0x03A6,
    [GREEK_LC_GAMMA] = 0x03B3,
    [GREEK_UC_GAMMA] = 0x0393,
    [GREEK_LC_ETA] = 0x03B7,
    [GREEK_UC_ETA] = 0x0397,
    [GREEK_LC_YOT] = 0x03F3,
    [GREEK_UC_YOT] = 0x037F,
    [GREEK_LC_KAPPA] = 0x03BA,
    [GREEK_UC_KAPPA] = 0x039A,
    [GREEK_LC_LAMDA] = 0x03BB,
    [GREEK_UC_LAMDA] = 0x039B,

// [main board] row 3
    [GREEK_LC_ZETA] = 0x03B6,
    [GREEK_UC_ZETA] = 0x0396,
    [GREEK_LC_XI] = 0x03BE,
    [GREEK_UC_XI] = 0x039E,
    [GREEK_LC_CHI] = 0x03C7,
    [GREEK_UC_CHI] = 0x03A7,
    [GREEK_LC_BETA] = 0x03B2,
    [GREEK_UC_BETA] = 0x0392,
    [GREEK_LC_NU] = 0x03BD,
    [GREEK_UC_NU] = 0x039D,
    [GREEK_LC_MU] = 0x03BC,
    [GREEK_UC_MU] = 0x039C,

    //Cyrillic
    //ORDER TAKEN FROM HERE:
    //https://en.wikipedia.org/wiki/Cyrillic_script
    [CYR_LC_A] = 0x0430,
    [CYR_UC_A] = 0x0410,
    [CYR_LC_BE] = 0x0431,
    [CYR_UC_BE] = 0x0411,
    [CYR_LC_VE] = 0x0432,
    [CYR_UC_VE] = 0x0412,
    [CYR_LC_GE] = 0x0433,
    [CYR_UC_GE] = 0x0413,
    [CYR_LC_DE] = 0x0434,
    [CYR_UC_DE] = 0x0414,
    [CYR_LC_YE] = 0x0435,
    [CYR_UC_YE] = 0x0415,
    [CYR_LC_YO] = 0x0451,
    [CYR_UC_YO] = 0x0401,
    [CYR_LC_ZHE] = 0x0436,
    [CYR_UC_ZHE] = 0x0416,
    [CYR_LC_ZE] = 0x0437,
    [CYR_UC_ZE] = 0x0417,
    [CYR_LC_I] = 0x0438,
    [CYR_UC_I] = 0x0418,
    [CYR_LC_SHORTI] = 0x0439,
    [CYR_UC_SHORTI] = 0x0419,
    [CYR_LC_KA] = 0x043A,
    [CYR_UC_KA] = 0x041A,
    [CYR_LC_EL] = 0x043B,
    [CYR_UC_EL] = 0x041B,
    [CYR_LC_EM] = 0x043C,
    [CYR_UC_EM] = 0x041C,
    [CYR_LC_EN] = 0x043D,
    [CYR_UC_EN] = 0x041D,
    [CYR_LC_O] = 0x043E,
    [CYR_UC_O] = 0x041E,
    [CYR_LC_PE] = 0x043F,
    [CYR_UC_PE] = 0x041F,
    [CYR_LC_ER] = 0x0440,
    [CYR_UC_ER] = 0x0420,
    [CYR_LC_ES] = 0x0441,
    [CYR_UC_ES] = 0x0421,
    [CYR_LC_TE] = 0x0442,
    [CYR_UC_TE] = 0x0422,
    [CYR_LC_U] = 0x0443,
    [CYR_UC_U] = 0x0423,
    [CYR_LC_EF] = 0x0444,
    [CYR_UC_EF] = 0x0424,
    [CYR_LC_KHA] = 0x0445,
    [CYR_UC_KHA] = 0x0425,
    [CYR_LC_TSE] = 0x0446,
    [CYR_UC_TSE] = 0x0426,
    [CYR_LC_CHE] = 0x0447,
    [CYR_UC_CHE] = 0x0427,
    [CYR_LC_SHA] = 0x0448,
    [CYR_UC_SHA] = 0x0428,
    [CYR_LC_SHCHA] = 0x0449,
    [CYR_UC_SHCHA] = 0x0429,
    [CYR_LC_YER] = 0x044A,
    [CYR_UC_YER] = 0x042A,
    [CYR_LC_YERY] = 0x044B,
    [CYR_UC_YERY] = 0x042B,
    [CYR_LC_YERI] = 0x044C,
    [CYR_UC_YERI] = 0x042C,
    [CYR_LC_E] = 0x044D,
    [CYR_UC_E] = 0x042D,
    [CYR_LC_YU] = 0x044E,
    [CYR_UC_YU] = 0x042E,
    [CYR_LC_YA] = 0x044F,
    [CYR_UC_YA] = 0x044F,
    //Less commonly used letters/ones not in Russian/bulgarian. Yay linguistic imperialism
    [CYR_LC_UAGE] = 0x0491,
    [CYR_UC_UAGE] = 0x0490,
    [CYR_LC_DJE] = 0x0452,
    [CYR_UC_DJE] = 0x0402,
    [CYR_LC_GJE] = 0x0453,
    [CYR_UC_GJE] = 0x0403,
    [CYR_LC_UAYE] = 0x0454,
    [CYR_UC_UAYE] = 0x0404,
    [CYR_LC_DZE] = 0x0455,
    [CYR_UC_DZE] = 0x0405,
    [CYR_LC_IDOT] = 0x0456,
    [CYR_UC_IDOT] = 0x0406,
    [CYR_LC_YI] = 0x0457,
    [CYR_UC_YI] = 0x0407,
    [CYR_UC_JE] = 0x0458,
    [CYR_LC_JE] = 0x0408,
    [CYR_LC_LJE] = 0x0459,
    [CYR_UC_LJE] = 0x0409,
    [CYR_LC_NJE] = 0x045A,
    [CYR_UC_NJE] = 0x040A,
    [CYR_LC_TJE] = 0x045B,
    [CYR_UC_TJE] = 0x040B,
    [CYR_LC_KJE] = 0x045C,
    [CYR_UC_KJE] = 0x040C,
    [CYR_LC_SHORTU] = 0x045E,
    [CYR_UC_SHORTU] = 0x040E,
    [CYR_LC_DZHE] = 0x045F,
    [CYR_UC_DZHE] = 0x040F,
    //Unshifted base
    [GBP] = 0x00A3,
    [JPY] = 0x00A5,
    [EURO] = 0x20AC,
    [PLUS_MINUS] = 0x00B1,
    [SQT_OPEN] = 0x2018,
    [DQT_OPEN] = 0x201C,
    [DQT_CLSE] = 0x201D,
    [SQT_CLSE] = 0x2019,
    //APL
    [N_ARY_LOGICAL_AND] = 0x22C0,
    [N_ARY_LOGICAL_OR] = 0x22C1,
    [N_ARY_INTERSECT] = 0x22C2,
    [N_ARY_UNION] = 0x22C3,
    [SUBSET_OF] = 0x2282,
    [SUPERSET_OF] = 0x2283,
    [FORALL] = 0x2200,
    [LEMNISCATE] = 0x221E, // ∞
    [THERE_EXISTS] = 0x2203,
    [PARTIAL_DIFFERENTIAL] = 0x2202,
    [UP_TACK] = 0x22A5,
    [DOWN_TACK] = 0x22A4,
    [RIGHT_TACK] = 0x22A2,
    [LEFT_TACK] = 0x22A3,
    [UPWARDS_ARROW] = 0x2191,
    [DOWNARDS_ARROW] = 0x2193,
    [LEFTWARDS_ARROW] = 0x2190,
    [RIGHTWARDS_ARROW] = 0x2192,
    [LEFTRIGHT_ARROW] = 0x2194,
    [LEFT_FLOOR] = 0x230A,
    [LEFT_CEILING] = 0x2308,
    [NOT_EQUAL_TO] = 0x2260,
    [ASYMPTOTICALLY_EQUAL_TO] = 0x2243,
    [NOT_ASYMPTOTICALLY_EQUAL_TO] = 0x2261,
    [LESS_THAN_OR_EQUAL] = 0x2264,
    [GREATER_THAN_OR_EQUAL] = 0x2265,
	//Greek layer, nonshifted
	// [main board] row 0
    [GREEK_LC_FINAL_SIGMA] = 0x03C2,
    // [GREEK_UC_SIGMA] = 0x03A3, // Final sigma doesn't differentiate the capitalised form
    [CONTOUR_INTEGRAL] = 0x222E,
    [COPTIC_LC_DEI] = 0x03EF,
    [NEGATION] = 0x00AC,
    [DOUBLE_DAGGER] = 0x2021,
    [NABLA] = 0x2207,
    [CENT] = 0x00A2,
    [DEGREE] = 0x00B0,
    [APL_QUAD] = 0x2395,
    [DIVISION] = 0x00F7,
    [MULTIPLICATION] = 0x00D7,
    [PILCROW] = 0x00B6,
    [LARGE_CIRCLE] = 0x25EF,
//  [THREE_EM_DASH] = 0x2E3B,
    [HORIZONTAL_BAR] = 0x2015,
    [APPROXIMATELY_EQUAL_TO] = 0x2248,
    [DOUBLE_VERTICAL_LINE] = 0x2016,
    [SQUARE_IMAGE_OF] = 0x228F,
    [SQUARE_ORIGINAL_OF] = 0x2290,
    [MATHEMATICAL_LEFT_WHITE_SQUARE_BRACKET] = 0x27E6,
    [MATHEMATICAL_RIGHT_WHITE_SQUARE_BRACKET] = 0x27E7,
    [MUCH_LESS_THAN] = 0x226A,
    [MUCH_GREATER_THAN] = 0x226B,
    [INTEGRAL] = 0x222B,
    [TWO_DOT_LEADER] = 0x2025,
    [BULLET] = 0x2022,
    //HEBREW
    [HEB_ALEF] = 0x05D0,
    [HEB_BET] = 0x05D1,
    [HEB_GIMEL] = 0x05D2,
    [HEB_DALET] = 0x05D3,
    [HEB_HE] = 0x05D4,
    [HEB_VAV] = 0x05D5,
    [HEB_ZAYIN] = 0x05D6,
    [HEB_HET] = 0x05D7,
    [HEB_TET] = 0x05D8,
    [HEB_YOD] = 0x05D9,
    [HEB_FINAL_KAF] = 0x05DA,
    [HEB_KAF] = 0x05DB,
    [HEB_LAMED] = 0x05DC,
    [HEB_FINAL_MEM] = 0x05DD,
    [HEB_MEM] = 0x05DE,
    [HEB_FINAL_NUN] = 0x05DF,
    [HEB_NUN] = 0x05E0,
    [HEB_SAMEKH] = 0x05E1,
    [HEB_AYIN] = 0x05E2,
    [HEB_FINAL_PE] = 0x05E3,
    [HEB_PE] = 0x05E4,
    [HEB_FINAL_TSADI] = 0x05E5,
    [HEB_TSADI] = 0x05E6,
    [HEB_QOF] = 0x05E7,
    [HEB_RESH] = 0x05E8,
    [HEB_SHIN] = 0x05E9,
    [HEB_TAV] = 0x05EA,
    //ADDITIONAL HEBREW
    [HEB_P_SHEVA] = 0x05B0,
    [HEB_P_HATAF_SEGOL] = 0x05B1,
    [HEB_P_HATAF_PATAH] = 0x05B2,
    [HEB_P_HATAF_QAMATS] = 0x05B3,
    [HEB_P_HIRIQ] = 0x05B4,
    [HEB_P_TSERE] = 0x05B5,
    [HEB_P_SEGOL] = 0x05B6,
    [HEB_P_PATAH] = 0x05B7,
    [HEB_P_QAMATS] = 0x05B8,
    [HEB_P_HOLAM] = 0x05B9,
    [HEB_P_HOLAM_HASER_VAV] = 0x05BA,
    [HEB_P_QUBUTS] = 0x05BB,
    [HEB_P_DAGESH_MAPIQ] = 0x05BC,
    [HEB_P_METEG] = 0x05BD,
    [HEB_PUNCT_MAQAF] = 0x05BE,
    [HEB_P_RAFE] = 0x05BF,
    [HEB_PUNCT_PASEQ] = 0x05C0,
    [HEB_P_SHIN_DOT] = 0x05C1,
    [HEB_P_SIN_DOT] = 0x05C2,
    [HEB_P_SIN_DOT] = 0x05C2,
    //CODE PAGE FTS
    [FTS_WHITE_SMILING_FACE] = 0x263A,
    [FTS_BLACK_SMILING_FACE] = 0x263B,
    [FTS_BLACK_HEART_SUIT] = 0x2665,
    [FTS_BLACK_DIAMOND_SUIT] = 0x2666,
    [FTS_BLACK_CLUB_SUIT] = 0x2663,
    [FTS_BLACK_SPADE_SUIT] = 0x2660,
    //BULLET ELSEWHERE
    [FTS_INVERSE_BULLET] = 0x25D8,
    [FTS_WHITE_CIRCLE] = 0x25CB,
    [FTS_INVERSE_WHITE_CIRCLE] = 0x25D9,
    [FTS_MALE_SIGN] = 0x2642,
    [FTS_FEMALE_SIGN] = 0x2640,
    [FTS_EIGTH_NOTE] = 0x266A,
    [FTS_BEAMED_EIGHTH_NOTE] = 0x266B,
    [FTS_WHITE_SUN_WITH_RAYS] = 0x263C,
    [FTS_BLACK_RIGHT_POINTING_POINTER] = 0x25BA,
    [FTS_BLACK_LEFT_POINTING_POINTER] = 0x25BB,
    [FTS_UP_DOWN_ARROW] = 0x2195,
    [FTS_DOUBLE_EXCLAMATION_MARK] = 0x203C,
    //PILCROW
    [FTS_SECTION_SIGN] = 0x00A7,
    [FTS_BLACK_RECTANGLE] = 0x25AC,
    [FTS_UP_DOWN_ARROW_WITH_BASE] = 0x21A8,
    //UPARROW
    //DOWNARROW
    //RIGHTARROW
    //LEFTARROW
    //LEFTRIGHTARROW
    [FTS_RIGHT_ANGLE] = 0x221F,
    [FTS_BLACK_UP_POINTING_TRIANGLE] = 0x25B2,
    [FTS_BLACK_DOWN_POINTING_TRIANGLE] = 0x25BC,
    //32-126
    [FTS_HOUSE] = 0x2302,
    //128 TO 154 ARE ACCENTED CHARACTERS
    //CENT
    //POUNT
    //YEN
    [FTS_PESETA_SIGN] = 0x20A7,
    [FTS_LATIN_SMALL_LETTER_F_WITH_HOOK] = 0x0192,
    //160 TO 165 ARE MORE ACCENTS
    [FTS_FEMININE_ORDINAL_INDICATOR] = 0x00AA,
    [FTS_MASCULINE_ORDINAL_INDICATOR] = 0x00BA,
    [FTS_INVERTED_QUESTION_MARK] = 0x00BF,
    [FTS_REVERSED_NOT_SIGN] = 0x2310,
    //NEGATION
    [FTS_VULGAR_FRACTION_ONE_HALF] = 0x00BD,
    [FTS_VULGAR_FRACTION_ONE_QUARTER] = 0x00BC,
    [FTS_INVERTED_EXCLAMATION_MARK] = 0x00A1,
    [FTS_LEFT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK] = 0x00AB,
    [FTS_RIGHT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK] = 0x00BB,
    [FTS_LIGHT_SHADE] = 0x2591,
    [FTS_MEDIUM_SHADE] = 0x2592,
    [FTS_DARK_SHADE] = 0x2593,
    [FTS_BOX_DRAWINGS_LIGHT_VERTICAL] = 0x2502,
    [FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_LEFT] = 0x2524,
    [FTS_BOX_DRAWINGS_VERTICAL_SINGLE_AND_LEFT_DOUBLE] = 0x2561,
    [FTS_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_LEFT_SINGLE] = 0x2562,
    [FTS_BOX_DRAWINGS_DOWN_DOUBLE_AND_LEFT_SINGLE] = 0x2556,
    [FTS_BOX_DRAWINGS_DOWN_SINGLE_AND_LEFT_DOUBLE] = 0x2555,
    [FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_LEFT] = 0x2563,
    [FTS_BOX_DRAWINGS_DOUBLE_VERTICAL] = 0x2551,
    [FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_LEFT] = 0x2557,
    [FTS_BOX_DRAWINGS_DOUBLE_UP_AND_LEFT] = 0x255D,
    [FTS_BOX_DRAWINGS_DOUBLE_UP_AND_LEFT_SINGLE] = 0x255C,
    [FTS_BOX_DRAWINGS_UP_SINGLE_AND_LEFT_DOUBLE] = 0x255B,
    [FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_LEFT] = 0x2510,
    //192 STARTS HERE/ROWC
    [FTS_BOX_DRAWINGS_LIGHT_UP_AND_RIGHT] = 0x2514,
    [FTS_BOX_DRAWINGS_LIGHT_UP_AND_HORIZONTAL] = 0x2534,
    [FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_HORIZONTAL] = 0x252C,
    [FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_RIGHT] = 0x251C,
    [FTS_BOX_DRAWINGS_LIGHT_HORIZONTAL] = 0x2500,
    [FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_HORIZONTAL] = 0x253C,
    [FTS_BOX_DRAWINGS_VERTICAL_SINGLE_AND_RIGHT_DOUBLE] = 0x255E,
    [FTS_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_RIGHT_SINGLE] = 0x255F,
    [FTS_BOX_DRAWINGS_DOUBLE_UP_AND_RIGHT] = 0x255A,
    [FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_RIGHT] = 0x2554,
    [FTS_BOX_DRAWINGS_DOUBLE_UP_AND_HORIZONTAL] = 0x2569,
    [FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_HORIZONTAL] = 0x2566,
    [FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_RIGHT] = 0x2560,
    [FTS_BOX_DRAWINGS_DOUBLE_HORIZONTAL] = 0x2550,
    [FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_HORIZONTAL] = 0x256C,
    [FTS_BOX_DRAWINGS_UP_SINGLE_AND_HORIZONTAL_DOUBLE] = 0x2567,
    [FTS_BOX_DRAWINGS_UP_DOUBLE_AND_HORIZONTAL_SINGLE] = 0x2568,
    [FTS_BOX_DRAWINGS_DOWN_SINGLE_AND_HORIZONTAL_DOUBLE] = 0x2564,
    [FTS_BOX_DRAWINGS_DOWN_DOUBLE_AND_HORIZONTAL_SINGLE] = 0x2565,
    [FTS_BOX_DRAWINGS_UP_DOUBLE_AND_RIGHT_SINGLE] = 0x2559,
    [FTS_BOX_DRAWINGS_UP_SINGLE_AND_RIGHT_DOUBLE] = 0x2558,
    [FTS_BOX_DRAWINGS_DOWN_SINGLE_AND_RIGHT_DOUBLE] = 0x2552,
    [FTS_BOX_DRAWINGS_DOWN_DOUBLE_AND_RIGHT_SINGLE] = 0x2553,
    [FTS_BOX_DRAWINGS_VERTICAL_DOUBLE_AND_HORIZONTAL_SINGLE] = 0x256B,
    [FTS_BOX_DRAWINGS_VERTICAL_SINGLE_AND_HORIZONTAL_DOUBLE] = 0x256A,
    [FTS_BOX_DRAWINGS_LIGHT_UP_AND_LEFT] = 0x2518,
    [FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_RIGHT] = 0x250C,
    [FTS_FULL_BLOCK] = 0x2588,
    [FTS_LOWER_HALF_BLOCK] = 0x2584,
    [FTS_LEFT_HALF_BLOCK] = 0x258C,
    [FTS_RIGHT_HALF_BLOCK] = 0x2590,
    [FTS_UPPER_HALF_BLOCK] = 0x2580,
    //GREEK LETTERS I ALREADY HAVE
    [FTS_INTERSECTION] = 0x2229, //NOT N_ARY_INTERSECT
    //NOT_ASYMPTOTICALLY_EQUAL_TO IN APL
    //PLUS-MINUS
    //GREATER_THAN_OR_EQUAL
    //LESS_THAN_OR_EQUAL
    [FTS_TOP_HALF_INTEGRAL] = 0x2320,
    [FTS_BOTTOM_HALF_INTEGRAL] = 0x2321,
    //DIVISIONF
    //APPROXIMATELY_EQUAL_TO
    //DEGREE
    [FTS_BULLET_OPERATOR] = 0x2219,
    [FTS_MIDDLE_DOT] = 0x00B7,
    [FTS_SQUARE_ROOT] = 0x221A,
    [FTS_SUPERSCRIPT_LATIN_SMALL_LETTER_N] = 0x207F,
    [FTS_SUPERSCRIPT_TWO] = 0x00B2,
    [FTS_BLACK_SQUARE] = 0x25A0,
};

/*
 * Layer definitions.
 */
#define _BASE 0   // Base layer
#define _APL 1    // APL symbols
#define _GREEK 2  // Greek symbols
#define _FN 4     // FN & media keys
#define _CYR 3
#define _HEB 5

enum custom_keycodes {
    // daughter board R1
    H_HELP = SAFE_RANGE,
    H_MACRO,
    H_TERMINAL,
    H_QUOTE,
    H_OVER_STRIKE,
    H_CLEAR_INPUT,
    H_CLEAR_SCREEN,
    H_HOLD_OUTPUT,
    H_STOP_INPUT,
    H_ABORT,
    H_BREAK,
    H_RESUME,
    H_CALL,

    // daughter board R2
    H_LOCAL,
    H_NETWORK,
    H_SYSTEM,
    H_REFRESH,
    H_BUFFERS,
    H_SQUARE,
    H_CIRCLE,
    H_TRIANGLE,
    H_DIAMOND,
    H_REPEAT,
    H_TRANSMIT,
    H_STATUS,
    H_SUSPEND,

    // daughter board r3
    H_CLOSE,
    H_OPEN,
    H_COMPLETE,

    // main board r1
    H_FIND,
    H_WRITE,

    // main board r2
    H_MARK,
    H_UNDO,

    // main board r3
    H_SELECT,
    H_DEBUG,
    H_PAGE,

    // main board r4
    H_TTY,
    H_LOCK, // lock machine?

    // main board r5
    H_HOME,
    H_EOF
};
/* blank layout
*┌─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐ ┌─────┬─────┬─────┬─────┐
*│     │     │     │     │  │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │ │     │     │     │     │
*├─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┤
*│     │     │     │     │  │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │ │     │     │     │     │
*├─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┤
*│     │     │     │     │  │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │ │     │     │     │     │
*└─────┴─────┴─────┴─────┘  └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
*
*┌───────────┬───────────┐  ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐ ┌───────────┬───────────┐
*│           │           │  │           │           │           │           │           │           │           │           │           │           │ │           │           │
*├───────────┼───────────┤  ├───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┤ ├───────────┼───────────┤
*│           │           │  │           │           │           │           │           │           │           │           │           │           │ │           │           │
*├─────┬─────┼─────┬─────┤  ├───────────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼───────────┤ ├─────┬─────┼─────┬─────┤
*│     │     │     │     │  │           │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │           │ │     │     │     │     │
*└─────┴─────┴─────┴─────┘  └───────────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴───────────┘ └─────┴─────┴─────┴─────┘
*
*┌─────┬─────┬─────┬─────┐  ┌────────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬────────┐ ┌─────┬─────┬─────┬─────┐
*│     │     │     │     │  │        │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │        │ │     │     │     │     │
*├─────┼─────┼─────┼─────┤  ├─────┬──┴─────┼─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┼─────┴──┬─────┤ ├─────┼─────┼─────┼─────┤
*│     │     │     │     │  │     │        │        │     │     │     │     │     │     │     │     │     │     │     │     │        │        │     │ │     │     │     │     │
*├─────┼─────┼─────┼─────┤  ├─────┴──┬─────┴──┬─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┬──┴─────┬──┴─────┤ ├─────┼─────┼─────┼─────┤
*│     │     │     │     │  │        │        │        │     │     │     │     │     │     │     │     │     │     │     │        │        │        │ │     │     │     │     │
*├─────┼─────┼─────┼─────┤  ├─────┬──┴──┬─────┴──┬─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┬──┴─────┬──┴──┬─────┤ ├─────┼─────┼─────┼─────┤
*│     │     │     │     │  │     │     │        │        │     │     │     │     │     │     │     │     │     │     │        │        │     │     │ │     │     │     │     │
*├─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┬──┴──┬─────┴──┬──┴──┬──┴─────┼─────┴──┬──┴──┬──┴─────┼─────┴──┬──┴──┬──┴─────┬──┴──┬─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┤
*│     │     │     │     │  │     │     │     │     │        │     │        │        │     │        │        │     │        │     │     │     │     │ │     │     │     │     │
*└─────┴─────┴─────┴─────┘  └─────┴─────┴─────┴─────┴────────┴─────┴────────┴────────┴─────┴────────┴────────┴─────┴────────┴─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
*Current keycap layout
*┌───────────┬───────────┐  ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐ ┌───────────┬───────────┐
*│HELP       │MACRO      │  │TERMINAL   │QUOTE      │OVER STRIKE│CLEAR INPUT│CLEARSCREEN│HOLD OUTPUT│STOP INPUT │ABORT      │BREAK      │RESUME     │ │CALL       │RESET      │
*├───────────┼───────────┤  ├───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┤ ├───────────┼───────────┤
*│LOCAL      │NETWORK    │  │SYSTEM     │REFRESH    │BUFFERS    │SQUARE     │CIRCLE     │TRIANGLE   │DIAMOND    │REPEAT     │TRASMIT    │STATUS     │ │SUSPEND    │CAPS LOCK  │
*├─────┬─────┼─────┬─────┤  ├───────────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼───────────┤ ├─────┬─────┼─────┬─────┤
*│CLOSE│OPEN │F1   │F2   │  │ESCAPE     │  ?  │  !  │  @  │  £  │  €  │  ¥  │  ‘  │  “  │  ”  │  ’  │  _  │  <  │  >  │  |  │  {  │  }  │COMPLETE   │ │  ^  │  %  │  #  │  $  │
*└─────┴─────┴─────┴─────┘  └───────────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴───────────┘ └─────┴─────┴─────┴─────┘
*
*┌─────┬─────┬─────┬─────┐  ┌────────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬────────┐ ┌─────┬─────┬─────┬─────┐
*│FIND │WRITE│F3   │F4   │  │COMPOSE │  ±  │  `  │  1  │  2  │  3  │  4  │  5  │  6  │  \  │  7  │  8  │  9  │  0  │  -  │  =  │ {/< │ }/> │UNDO    │ │  ~  │  /  │  *  │  =  │
*├─────┼─────┼─────┼─────┤  ├─────┬──┴─────┼─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┼─────┴──┬─────┤ ├─────┼─────┼─────┼─────┤
*│MARK │UNDO │F5   │F6   │  │PASTE│CUT     │TAB     │  Q  │  W  │  F  │  P  │  G  │  [  │  J  │  L  │  U  │  Y  │  ;  │  '  │RUB OUT │CLEAR   │BEGIN│ │  7  │  8  │  9  │  -  │
*├─────┼─────┼─────┼─────┤  ├─────┴──┬─────┴──┬─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┬──┴─────┬──┴─────┤ ├─────┼─────┼─────┼─────┤
*│DEBUG│SELCT│F7   │F8   │  │FUNCTION│MODE    │TOP     │  A  │  R  │  S  │  T  │  D  │  ]  │  H  │  N  │  E  │  I  │  O  │RETURN  │LINE    │PAGE    │ │  4  │  5  │  6  │  +  │
*├─────┼─────┼─────┼─────┤  ├─────┬──┴──┬─────┴──┬─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┬──┴─────┬──┴──┬─────┤ ├─────┼─────┼─────┼─────┤
*│TTY  │LOCK │F9   │F10  │  │BEGIN│END  │SYMBOL  │SHIFT   │  Z  │  X  │  C  │  V  │  B  │  /  │  K  │  M  │  ,  │  .  │SHIFT   │SYMBOL  │UP   │END  │ │  1  │  2  │  3  │40%  │
*├─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┬──┴──┬─────┴──┬──┴──┬──┴─────┼─────┴──┬──┴──┬──┴─────┼─────┴──┬──┴──┬──┴─────┬──┴──┬─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┤
*│HOME │EOF  │F11  │F12  │  │PRIOR│NEXT │SMOL │HYPER│SUPER   │META │CONTROL │SPACE   │CIRCL│SPACE   │CONTROL │META │SUPER   │HYPER│LEFT │DOWN │RIGHT│ │  0  │ DEL │  .  │FUN  │
*└─────┴─────┴─────┴─────┘  └─────┴─────┴─────┴─────┴────────┴─────┴────────┴────────┴─────┴────────┴────────┴─────┴────────┴─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* _BASE: Base Layer(Default)
*┌───────────┬───────────┐  ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐ ┌───────────┬───────────┐
*│HELP       │DM_PLY1    │  │TERMINAL   │QUOTE      │INS        │CLEAR INPUT│CLEARSCREEN│HOLD OUTPUT│DM_RSTP    │ABORT      │BREAK      │STEAM      │ │DM_REC1    │RESET      │
*├───────────┼───────────┤  ├───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┼───────────┤ ├───────────┼───────────┤
*│LOCAL      │DM_PLY2    │  │SYSTEM     │REFRESH    │SAVE ACTIVE│SAVE AREA  │SAVE WINDOW│SAVE OUTPUT│SAVE SCREEN│REPEAT     │TRASMIT    │STATUS     │ │DM_REC2    │CAPS LOCK  │
*├─────┬─────┼─────┬─────┤  ├───────────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼─────┬─────┼───────────┤ ├─────┬─────┼─────┬─────┤
*│F13  │F14  │F1   │F2   │  │ESC        │  ?  │  !  │  @  │  £  │  €  │  ¥  │  ‘  │  “  │  ”  │  ’  │  _  │  <  │  >  │  |  │  {  │  }  │COMPLETE   │ │  ^  │  %  │  #  │  $  │
*└─────┴─────┴─────┴─────┘  └───────────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴───────────┘ └─────┴─────┴─────┴─────┘
*
*┌─────┬─────┬─────┬─────┐  ┌────────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬────────┐ ┌─────┬─────┬─────┬─────┐
*│F15  │F16  │F3   │F4   │  │COMPOSE │  ±  │ `/~ │  1  │  2  │  3  │  4  │  5  │  6  │  \  │  7  │  8  │  9  │  0  │  -  │  =  │DELET│CAPLK│PSCR    │ │  ~  │  /  │  *  │  =  │
*├─────┼─────┼─────┼─────┤  ├─────┬──┴─────┼─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┼─────┴──┬─────┤ ├─────┼─────┼─────┼─────┤
*│F17  │F18  │F5   │F6   │  │COPY │PASTE   │TAB     │  Q  │  W  │  F  │  P  │  G  │  [  │  J  │  L  │  U  │  Y  │  ;  │  '  │RUB OUT │_HEB    │BEGIN│ │  7  │  8  │  9  │  -  │
*├─────┼─────┼─────┼─────┤  ├─────┴──┬─────┴──┬─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┬──┴─────┬──┴─────┤ ├─────┼─────┼─────┼─────┤
*│F19  │F20  │F7   │F8   │  │_FN     │_APL    │CTRL/ESC│  A  │  R  │  S  │  T  │  D  │  ]  │  H  │  N  │  E  │  I  │  O  │RETURN  │_CYR    │PAGE    │ │  4  │  5  │  6  │  +  │
*├─────┼─────┼─────┼─────┤  ├─────┬──┴──┬─────┴──┬─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┬──┴─────┬──┴──┬─────┤ ├─────┼─────┼─────┼─────┤
*│F21  │F22  │F9   │F10  │  │BEGIN│END  │_GREEK  │SHIFT   │  Z  │  X  │  C  │  V  │  B  │  /  │  K  │  M  │  ,  │  .  │SHIFT   │_GREEK  │UP   │END  │ │  1  │  2  │  3  │40%  │
*├─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┬──┴──┬─────┴──┬──┴──┬──┴─────┼─────┴──┬──┴──┬──┴─────┼─────┴──┬──┴──┬──┴─────┬──┴──┬─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┤
*│F23  │F24  │F11  │F12  │  │VOLD │VOLU │MUTE │MEH  │LGUI    │LALT │LCTRL   │SPACE   │_FN  │SPACE   │CONTROL │SUPER│HYPER   │APP  │LEFT │DOWN │RIGHT│ │  0  │ DEL │  .  │FUN  │
*└─────┴─────┴─────┴─────┘  └─────┴─────┴─────┴─────┴────────┴─────┴────────┴────────┴─────┴────────┴────────┴─────┴────────┴─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
     *  Mapped for MY purposes
     *R1: Macro (DM_PLY1), Over strike (INS), Stop Input (DM_RSTP), Break (Pause), Resume (Steam), Call (DM_REC1), Reset (Scroll Lock)
     *R2: Network (DM_PLY2), buffers and shapes (screenshots), Suspend (DM_REC2), Caps lock (KC_CLCK)
     *LEFT Cluster: None so far.
     *
     * NOTES: All possible compose key options on XKB:
     *https://www.commandlinux.com/man-page/man7/xkeyboard-config.7.html
     *Leftwin (No), RWin (maybe?) Menu (maybe?), LCTRL (NO) RCTRL (NO), Caps (NO), KC_NUBS (would that work?), Pause, PrtScr, Scrollock (all viable)

     */
    [_BASE] = LAYOUT_h7v3_183(
        H_HELP,                 DM_PLY1,                    H_TERMINAL,                H_QUOTE,                H_OVER_STRIKE,          H_CLEAR_INPUT,          H_CLEAR_SCREEN,         H_HOLD_OUTPUT,          DM_RSTP,                H_ABORT,                H_BREAK,                H_RESUME,                   DM_REC1,                KC_SLCK,           //14
        H_LOCAL,                DM_PLY2,                    H_SYSTEM,                  H_REFRESH,              H_BUFFERS,              H_SQUARE,               H_CIRCLE,               H_TRIANGLE,             H_DIAMOND,              H_REPEAT,               H_TRANSMIT,             H_STATUS,                   DM_REC2,                KC_CLCK,           //14
        KC_F13,     KC_F14,     KC_F1,      KC_F2,          KC_ESC,                    KC_QUES,    KC_EXLM,    KC_AT,      X(GBP),     X(EURO),    X(JPY),     X(SQT_OPEN),X(DQT_OPEN),X(DQT_CLSE),X(SQT_CLSE),KC_UNDS,    KC_LABK,    KC_RABK,    KC_PIPE,    KC_LCBR,    KC_RCBR,    H_COMPLETE,                 KC_CIRC,    KC_PERC,    KC_HASH,    KC_DLR,

		KC_F15,     KC_F16,     KC_F3,      KC_F4,          KC_PAUSE,         X(PLUS_MINUS),  KC_GRAVE,   KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_BSLS,    KC_7,       KC_8,       KC_9,       KC_0,       KC_MINUS,   KC_EQUAL,   KC_DEL,     KC_CAPS,      KC_PSCR,            KC_NLCK,    KC_PSLS,    KC_PAST,    KC_EQL,
        KC_F17,     KC_F18,     KC_F5,      KC_F6,          C(KC_INS),     S(KC_INS),         KC_TAB,           KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_LBRC,    KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_QUOTE,   KC_BSPC,           MO(_HEB),          KC_HOME,        KC_P7,      KC_P8,     KC_P9,      KC_PMNS,
	    KC_F19,     KC_F20,     KC_F7,      KC_F8,          MO(_FN),          MO(_APL),        LCTL_T(KC_ESC),    KC_A,       KC_R,       KC_S,       KC_T,       KC_D,       KC_RBRC,    KC_H,       KC_N,       KC_E,       KC_I,       KC_O,       KC_ENTER,          MO(_CYR),              H_PAGE,         KC_P4,      KC_P5,      KC_P6,      KC_PPLS,
        KC_F21,     KC_F22,     KC_F9,      KC_F10,         KC_HOME,    KC_END,     MO(_GREEK),       KC_LSFT,          KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SLASH,   KC_K,       KC_M,       KC_COMMA,     KC_DOT,   KC_RSFT,          MO(_GREEK),           KC_UP,      KC_END,         KC_P1,      KC_P2,      KC_P3,      KC_ENTER,
        KC_F23,     KC_F23,     KC_F11,     KC_F12,         KC_VOLD,    KC_VOLU,    KC_MUTE,   KC_MEH,     KC_LGUI,    KC_LALT,          KC_LCTRL,          KC_SPC,           MO(_FN),         KC_DEL,           KC_RCTRL,         KC_RALT,    KC_RGUI,          KC_APP,     KC_LEFT,    KC_DOWN,    KC_RGHT,        KC_P0,      KC_DEL,     KC_PDOT,    KC_BSPC


    ),

    /* _APL: Cadet Symbol Layer (Default)
     * ,-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
     * |           |           |#|           |           |           |           |           |           |           |           |           |           |#|           |           |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |           |           |#|           |           |           |           |           |           |           |           |           |           |#|           |           |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|           |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |           |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |###############################################################################################################################################################################|
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |        |        |  ⋀  |  ⋁  |  ⋂  |  ⋃  |  ⊂  |     |  ⊃  |  ∀  |  ∞  |  ∃  |      |     |        |        |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |        |        |  ⊥  |  ⊤  |  ⊢  |  ⊣  |  ↑  |     |  ↓  |  ←  |  →  |  ↔  |  ∂  |        |        |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |        |        |  ⌊  |  ⌈  |  ≠  |  ≃  |  ≡  |  /  |  ≤  |  ≥   |     |     |        |        |     |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |     |     |        |     |        |        |     |        |        |     |        |     |     |     |     |#|     |     |     |     |
     * `-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_APL] = LAYOUT_h7v3_183(
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,      FT,      FT,       FT,       FT,                 FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,

        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,      FT,       FT,       FT,                                                                                FT,      FT,       FT,      FT,
        X(FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_RIGHT),X(FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_HORIZONTAL),X(FTS_BOX_DRAWINGS_DOUBLE_DOWN_AND_LEFT),FT,       FT,       FT,       FT,  X(N_ARY_LOGICAL_AND), X(N_ARY_LOGICAL_OR), X(N_ARY_INTERSECT), X(N_ARY_UNION), X(SUBSET_OF),FT,X(SUPERSET_OF), X(FORALL),X(LEMNISCATE), X(THERE_EXISTS),FT,       FT,      FT,      FT,       FT,                                        X(FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_RIGHT),X(FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_HORIZONTAL),X(FTS_BOX_DRAWINGS_LIGHT_DOWN_AND_LEFT),FT,
        X(FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_RIGHT),X(FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_HORIZONTAL),X(FTS_BOX_DRAWINGS_DOUBLE_VERTICAL_AND_LEFT),FT,       FT,       FT,       FT,  X(UP_TACK), X(DOWN_TACK), X(RIGHT_TACK), X(LEFT_TACK), X(UPWARDS_ARROW),FT,X(DOWNARDS_ARROW), X(LEFTWARDS_ARROW),X(RIGHTWARDS_ARROW), X(LEFTRIGHT_ARROW),X(PARTIAL_DIFFERENTIAL),       FT,      FT,      FT,                            X(FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_RIGHT),X(FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_HORIZONTAL),X(FTS_BOX_DRAWINGS_LIGHT_VERTICAL_AND_LEFT),FT,
        X(FTS_BOX_DRAWINGS_DOUBLE_UP_AND_RIGHT),X(FTS_BOX_DRAWINGS_DOUBLE_UP_AND_HORIZONTAL),X(FTS_BOX_DRAWINGS_DOUBLE_UP_AND_LEFT),FT,       FT,       FT,       FT,       FT,  X(LEFT_FLOOR), X(LEFT_CEILING), X(NOT_EQUAL_TO), X(ASYMPTOTICALLY_EQUAL_TO),X(NOT_ASYMPTOTICALLY_EQUAL_TO),FT, X(LESS_THAN_OR_EQUAL),X(GREATER_THAN_OR_EQUAL),      FT,       FT,       FT,      FT,      FT,       FT,        X(FTS_BOX_DRAWINGS_LIGHT_UP_AND_RIGHT),X(FTS_BOX_DRAWINGS_LIGHT_UP_AND_HORIZONTAL),X(FTS_BOX_DRAWINGS_LIGHT_UP_AND_LEFT),FT,
        X(FTS_BOX_DRAWINGS_DOUBLE_VERTICAL),FT,X(FTS_BOX_DRAWINGS_DOUBLE_HORIZONTAL),FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,      FT,                                                                                                    X(FTS_BOX_DRAWINGS_LIGHT_VERTICAL),FT,X(FTS_BOX_DRAWINGS_LIGHT_HORIZONTAL),FT
    ),

    /* _GREEK: lower/upper case greek (needs shift modifier application for upper case chars) from codepage U0370.pdf \
     * ,-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
     * |           |           |#|           |           |           |           |           |           |           |           |           |           |#|           |           |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |           |           |#|           |           |           |           |           |           |           |           |           |           |#|           |           |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|           |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |           |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |###############################################################################################################################################################################|
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |  ∮  |  ¬  |  ϯ  |  ‡  |  ∇  |  ¢  |  °  |  ⎕  |  ‖  |  ÷  |  ×  |  ¶  |  ◯  |  ―  |  ≈  |  ⊏  |  ⊐  |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |        |        | ξ/Ξ | ς/Σ | φ/Φ | π/Π | γ/Γ |  ⟦   | ϳ/Ϳ | λ/Λ | θ/Θ | υ/Υ  |  ‥  |  •  |        |        |      |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |        |        | α/Α | ρ/Ρ | σ/Σ | τ/Τ | δ/Δ |  ⟧   | η/Η | ν/Ν | ε/Ε | ι/Ι | ο/Ο |        |        |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |         | SHIFT | ζ/Ζ  | χ/Χ | ψ/Ψ | ω/Ω |  β/Β | ∫ | κ/Κ | μ/Μ |  ≪  |  ≫  |        |        |     |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |     |     |        |     |        |        |     |        |        |     |        |     |     |     |     |#|     |     |     |     |
     * `-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_GREEK] = LAYOUT_h7v3_183(
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,      FT,      FT,       FT,       FT,                 FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT, X(CONTOUR_INTEGRAL),  X(NEGATION),  X(COPTIC_LC_DEI), X(DOUBLE_DAGGER), X(NABLA), X(CENT), X(DEGREE), X(APL_QUAD), X(DOUBLE_VERTICAL_LINE), X(DIVISION), X(MULTIPLICATION), X(PILCROW), X(LARGE_CIRCLE), X(HORIZONTAL_BAR), X(APPROXIMATELY_EQUAL_TO), X(SQUARE_IMAGE_OF), X(SQUARE_ORIGINAL_OF),       FT,                    FT,     FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(GREEK_LC_XI, GREEK_UC_XI), X(GREEK_LC_FINAL_SIGMA), XP(GREEK_LC_PHI, GREEK_UC_PHI), XP(GREEK_LC_PI, GREEK_UC_PI), XP(GREEK_LC_GAMMA, GREEK_UC_GAMMA), X(MATHEMATICAL_LEFT_WHITE_SQUARE_BRACKET), XP(GREEK_LC_YOT, GREEK_UC_YOT),XP(GREEK_LC_LAMDA, GREEK_UC_LAMDA),XP(GREEK_LC_THETA, GREEK_UC_THETA),XP(GREEK_LC_UPSILON, GREEK_UC_UPSILON),X(TWO_DOT_LEADER),X(BULLET),     FT,      FT,      FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(GREEK_LC_ALPHA, GREEK_UC_ALPHA), XP(GREEK_LC_RHO, GREEK_UC_RHO), XP(GREEK_LC_SIGMA, GREEK_UC_SIGMA), XP(GREEK_LC_TAU, GREEK_UC_TAU),XP(GREEK_LC_DELTA, GREEK_UC_DELTA), X(MATHEMATICAL_RIGHT_WHITE_SQUARE_BRACKET), XP(GREEK_LC_ETA, GREEK_UC_ETA), XP(GREEK_LC_NU, GREEK_UC_NU), XP(GREEK_LC_EPSILON, GREEK_UC_EPSILON), XP(GREEK_LC_IOTA, GREEK_UC_IOTA), XP(GREEK_LC_OMICRON, GREEK_UC_OMICRON),      FT,      FT,      FT,                                     FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  FT,  XP(GREEK_LC_ZETA, GREEK_UC_ZETA), XP(GREEK_LC_CHI, GREEK_UC_CHI), XP(GREEK_LC_PSI, GREEK_UC_PSI), XP(GREEK_LC_OMEGA, GREEK_UC_OMEGA), XP(GREEK_LC_BETA, GREEK_UC_BETA), X(INTEGRAL), XP(GREEK_LC_KAPPA, GREEK_UC_KAPPA), XP(GREEK_LC_MU, GREEK_UC_MU), X(MUCH_LESS_THAN), X(MUCH_GREATER_THAN),      FT,      FT,      FT,      FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,      FT,                                     FT,      FT,       FT,      FT
    ),

    /* _FN: Function layer, media & LED mods
     * ,-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
     * |           |           |#|           |           |           |           |           |           |           |           |           |           |#|           |   Reset   |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |           |           |#|           |           |           |           |           |           |           |           |           |           |#|           |           |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|           |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |           |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |###############################################################################################################################################################################|
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |        |        |     |UC_M_WI|     |     |     |     |     |     |     |     |     |     |        |        |      |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |UC_MOD|        |     |     |     |     |     |     |     |     |UC_M_LN|     |     |        |        |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |H_LOCK|#|     |     |         |       |     |     |UC_M_WC|     |     |     |UC_M_MA|     |     |     |        |        |     |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |     |     |        |     |        |        |     |        |        |     |        |     |     |     |     |#|     |     |     |     |
     * `-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_FN] = LAYOUT_h7v3_183(
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                RESET,
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,      FT,      FT,       FT,       FT,                 FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       FT,       FT,       FT,       FT,  FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       UC_MOD,   FT,       KC_HOME,       KC_PGDN,       KC_PGUP,       KC_END,       FT,       FT,       FT,       KC_LEFT,       KC_DOWN,  KC_UP,       KC_RGHT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       FT,       FT,       FT,       FT,       FT,           FT,  FT,       FT,       FT,      FT,  FT,       FT,       FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT
    ),
        /* _CYR: Cyrillic
     * ,-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
     * |           |           |#|           |           |           |           |           |           |           |           |           |           |#|           |           |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |           |           |#|           |           |           |           |           |           |           |           |           |           |#|           |           |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|           |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |           |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |###############################################################################################################################################################################|
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |     |     |  Ђ  |  Ѓ  |  Є  |  Ѕ  |  І  |  Ї  |  Ј  |  Љ  |  Њ 	|  Ћ  |  Ќ  |  Ў  |  Џ  | ft  | ft  |   ft   |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |        |        | я/Я | ю/Ю | ф/Ф | п/П | г/Г | ц/Ц | й/Й | л/Л | у/У | ы/Ы | э/Э | ё/Ё |        |        |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |        |        | а/А | р/Р | с/С | т/Т | д/Д | щ/Щ | ж/Ж | н/Н | е/Е | и/И | о/О |        |        |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |        |        | з/З | х/Х | ч/Ч | в/В | б/Б | ш/Ш | к/К | м/М | ь/Ь | ъ/Ъ |        |        |     |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |     |     |        |     |        |        |     |        |        |     |        |     |     |     |     |#|     |     |     |     |
     * `-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_CYR] = LAYOUT_h7v3_183(
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,      FT,      FT,       FT,       FT,                 FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT, FT,  XP(CYR_LC_UAGE, CYR_UC_UAGE),  XP(CYR_LC_DJE, CYR_UC_DJE),XP(CYR_LC_GJE, CYR_UC_GJE),XP(CYR_LC_UAYE, CYR_UC_UAYE),XP(CYR_LC_DZE, CYR_UC_DZE),XP(CYR_LC_IDOT, CYR_UC_IDOT),XP(CYR_LC_JE, CYR_UC_JE),XP(CYR_LC_YI, CYR_UC_YI),XP(CYR_LC_LJE, CYR_UC_LJE),XP(CYR_LC_NJE, CYR_UC_NJE),XP(CYR_LC_TJE, CYR_UC_TJE),XP(CYR_LC_KJE, CYR_UC_KJE),XP(CYR_LC_SHORTU, CYR_UC_SHORTU),XP(CYR_LC_DZHE, CYR_UC_DZHE),       FT,FT,FT,                    FT,     FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(CYR_LC_YA, CYR_UC_YA),XP(CYR_LC_YU, CYR_UC_YU),XP(CYR_LC_EF, CYR_UC_EF),XP(CYR_LC_PE, CYR_UC_PE),XP(CYR_LC_GE, CYR_UC_GE),XP(CYR_LC_TSE, CYR_UC_TSE),XP(CYR_LC_SHORTI, CYR_UC_SHORTI),XP(CYR_LC_EL, CYR_UC_EL),XP(CYR_LC_U, CYR_UC_U),XP(CYR_LC_YERY, CYR_UC_YERY),XP(CYR_LC_E, CYR_UC_E),XP(CYR_LC_YO, CYR_UC_YO),     FT,      FT,      FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(CYR_LC_A, CYR_UC_A),XP(CYR_LC_ER, CYR_UC_ER),XP(CYR_LC_ES, CYR_UC_ES),XP(CYR_LC_TE, CYR_UC_TE),XP(CYR_LC_DE, CYR_UC_DE),XP(CYR_LC_SHCHA, CYR_UC_SHCHA),XP(CYR_LC_ZHE, CYR_UC_ZHE),XP(CYR_LC_EN, CYR_UC_EN),XP(CYR_LC_YE, CYR_UC_YE),XP(CYR_LC_I, CYR_UC_I),XP(CYR_LC_O, CYR_UC_O),      FT,      FT,      FT,                                     FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  FT,  XP(CYR_LC_ZE, CYR_UC_ZE),XP(CYR_LC_KHA, CYR_UC_KHA),XP(CYR_LC_CHE, CYR_UC_CHE),XP(CYR_LC_VE, CYR_UC_VE),XP(CYR_LC_BE, CYR_UC_BE),XP(CYR_LC_SHA, CYR_UC_SHA),XP(CYR_LC_KA, CYR_UC_KA),XP(CYR_LC_EM, CYR_UC_EM),XP(CYR_LC_YERI, CYR_UC_YERI),XP(CYR_LC_YER, CYR_UC_YER),      FT,      FT,      FT,      FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,      FT,                                     FT,      FT,       FT,      FT
        ),


  [_HEB] = LAYOUT_h7v3_183(
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,               FT,                 FT,                 FT,                 FT,                 FT,                FT,                FT,                 FT,                FT,               FT,                 FT,                  FT,                FT,
        FT,      FT,      FT,       FT,       FT,                 FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,

        FT,         FT,         FT,         FT,             FT,       FT,       X(HEB_P_SHEVA),X(HEB_P_HATAF_SEGOL),X(HEB_P_HATAF_PATAH),X(HEB_P_HATAF_QAMATS),X(HEB_P_HIRIQ),X(HEB_P_TSERE),X(HEB_P_SEGOL),X(HEB_P_PATAH),X(HEB_P_QAMATS),X(HEB_P_HOLAM),X(HEB_P_HOLAM_HASER_VAV),X(HEB_P_QUBUTS),X(HEB_P_METEG),X(HEB_P_RAFE),      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       FT,       FT,       X(HEB_QOF),X(HEB_VAV),X(HEB_FINAL_PE),X(HEB_PE),X(HEB_GIMEL),X(HEB_P_SIN_DOT),X(HEB_FINAL_TSADI),X(HEB_LAMED),X(HEB_TSADI),FT,       FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       FT,       FT,       X(HEB_ALEF),X(HEB_RESH),X(HEB_SAMEKH),X(HEB_TAV),X(HEB_DALET),X(HEB_P_SHIN_DOT),X(HEB_FINAL_NUN),X(HEB_NUN),X(HEB_HE),X(HEB_YOD),X(HEB_AYIN),       FT,      FT,      FT,                                      FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       FT,       FT,       FT,       X(HEB_ZAYIN),X(HEB_HET),X(HEB_SHIN),X(HEB_P_DAGESH_MAPIQ),X(HEB_BET),FT,X(HEB_KAF),  X(HEB_MEM),X(HEB_FINAL_KAF),X(HEB_FINAL_MEM),       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,         FT,         FT,         FT,             FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT
    )
};    

void matrix_init_keymap(void) {}

void matrix_scan_keymap(void) {}

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      // [daughter board] row 1 POS key macros
      case H_HELP:
        send_string("[HELP] key");
        return false;
      case H_MACRO:
        //Unused currently. DM_PLAY1
        send_string("[MACRO] key");
        return false;
      case H_TERMINAL:
        send_string("[TERMINAL] key");
        return false;
      case H_QUOTE:
        // wraps selected (editable) text in quotation marks
        send_string(SS_LCTL(SS_TAP(X_X))SS_TAP(X_QUOTE)SS_LCTL(SS_TAP(X_V))SS_TAP(X_QUOTE));
        return false;
      case H_OVER_STRIKE:
        // toggles insert/overstrike
        send_string(SS_TAP(X_INSERT));
        return false;
      case H_CLEAR_INPUT:
        // terminal: clears from the cursor to the beginning of the current command
        send_string(SS_LCTL(SS_TAP(X_U)));
        return false;
      case H_CLEAR_SCREEN:
        send_string(SS_LCTL(SS_TAP(X_L)));
        // ^ linux/osx shell specific, for windows command replace with
        // send_string(SS_TAP(X_C)SS_TAP(X_L)SS_TAP(X_S)SS_TAP(KC_ENTER));
        return false;
      case H_HOLD_OUTPUT:
        send_string("[HOLD OUTPUT] key");
        return false;
      case H_STOP_INPUT:
        send_string("[STOP INPUT] key");
        return false;
      case H_ABORT:
        send_string(SS_LCTL(SS_TAP(X_C)));
        return false;
      case H_BREAK:
        send_string(SS_TAP(X_PAUSE));
        return false;
      case H_RESUME:
        //Launch Steam
        send_string(SS_LGUI(SS_LSFT(SS_LALT(SS_LCTL("s")))));    
        //send_string(SS_TAP(X_F)SS_TAP(X_G)SS_TAP(X_ENTER));
        return false;
      case H_CALL:
        send_string("[CALL] key");
        return false;

      // [daughter board] row 2 POS key macros
      case H_LOCAL:
        send_string("[LOCAL] key");
        return false;
      case H_NETWORK:
        send_string("[NETWORK] key");
        return false;
      case H_SYSTEM:
        send_string("[SYSTEM] key");
        return false;
      case H_REFRESH:
        send_string(SS_LCTL(SS_TAP(X_R)));
        return false;
      case H_BUFFERS:
         //Save Active   
        send_string(SS_LGUI("p"));
        return false;
      case H_SQUARE:
        //Save Area    
        send_string(SS_LGUI(SS_LSFT("p")));
        return false;
      case H_CIRCLE:
         //Save Window
        send_string(SS_LGUI(SS_LCTL("p")));
        return false;
      case H_TRIANGLE:
        //Save Output
        send_string(SS_LGUI(SS_LALT("p")));
        return false;
      case H_DIAMOND:
        //Save Screen    
        send_string(SS_LGUI(SS_LALT(SS_LCTL("p"))));
        return false;
      case H_REPEAT:
        send_string("[REPEAT] key");
        return false;
      case H_TRANSMIT:
        send_string("[TRANSMIT] key");
        return false;
      case H_STATUS:
        send_string("[STATUS] key");
        return false;
      case H_SUSPEND:
        send_string(SS_LCTL(SS_TAP(X_Z)));
        return false;

      // [daughter board] row 3
      case H_CLOSE:
        // ctrl-w: closes a tab/panel within an application
        send_string(SS_LCTL(SS_TAP(X_W)));
        return false;
      case H_OPEN:
        // ctrl-n: opens a tab/panel
        send_string(SS_LCTL(SS_TAP(X_N)));
        return false;
      case H_COMPLETE:
        // tab tab: bash command line completion
        send_string(SS_TAP(X_TAB)SS_TAP(X_TAB));
        return false;
    case H_PAGE:
        if (get_mods() & MODS_SHIFT_MASK) {
          CLEAN_MODS(
            send_string(SS_TAP(X_PGUP));
          );
        } else {
          send_string(SS_TAP(X_PGDN));
        }
		return false;
    }
  }

  return true;
};

bool led_update_kb(led_t led_state) {
  // stub
  return true;
};
