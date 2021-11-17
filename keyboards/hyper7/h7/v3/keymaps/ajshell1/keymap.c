#include QMK_KEYBOARD_H

#include "ajshell1.h"

// Brevity defines
#define KN KC_NO
#define FT KC_TRNS


// UNICODEMAP_ENABLE
enum unicode_names {
    //AT_SYMBOL,
    //GBP,
    //JPY,
    //EURO,
    //PLUS_MINUS,
    //QUOTATION_MARK,
    //TILDE_OPERATOR,
    //SINGLE_RIGHT_POINTING_ANGLE_QUOTATION_MARK,
    //SINGLE_LEFT_POINTING_ANGLE_QUOTATION_MARK,
    //BACKTICK,
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
    MATHEMATICAL_LEFT_WHITE_SQUARE_BRACKET,
    MATHEMATICAL_RIGHT_WHITE_SQUARE_BRACKET,

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
    TWO_DOT_LEADER,
    BULLET,

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
    MUCH_LESS_THAN,
    MUCH_GREATER_THAN,
    INTEGRAL,
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
    CYR_LC_UAGE,
    CYR_UC_UAGE,
    CYR_LC_DE,
    CYR_UC_DE,
    CYR_LC_DJE,
    CYR_UC_DJE,
    CYR_LC_GJE,
    CYR_UC_GJE,
    CYR_LC_YE,
    CYR_UC_YE,
    CYR_LC_YO,
    CYR_UC_YO,
    CYR_LC_UAYE,
    CYR_UC_UAYE,
    CYR_LC_ZHE,
    CYR_UC_ZHE,
    CYR_LC_ZE,
    CYR_UC_ZE,
    CYR_LC_DZE,
    CYR_UC_DZE,
    CYR_LC_I,
    CYR_UC_I,
    CYR_LC_IDOT,
    CYR_UC_IDOT,
    CYR_LC_YI,
    CYR_UC_YI,
    CYR_UC_SHORTI,
    CYR_LC_SHORTI,
    CYR_UC_JE,
    CYR_LC_JE,
    CYR_LC_KA,
    CYR_UC_KA,
    CYR_LC_EL,
    CYR_UC_EL,
    CYR_LC_LJE,
    CYR_UC_LJE,
    CYR_LC_EM,
    CYR_UC_EM,
    CYR_LC_EN,
    CYR_UC_EN,
    CYR_LC_NJE,
    CYR_UC_NJE,
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
    CYR_LC_TJE,
    CYR_UC_TJE,
    CYR_LC_KJE,
    CYR_UC_KJE,
    CYR_LC_U,
    CYR_UC_U,
    CYR_LC_SHORTU,
    CYR_UC_SHORTU,
    CYR_LC_EF,
    CYR_UC_EF,
    CYR_LC_KHA,
    CYR_UC_KHA,
    CYR_LC_TSE,
    CYR_UC_TSE,
    CYR_LC_CHE,
    CYR_UC_CHE,
    CYR_LC_DZHE,
    CYR_UC_DZHE,
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
};

const uint32_t PROGMEM unicode_map[] = {
// Unicode char definitions
    //[AT_SYMBOL] = 0x0040,
    //[GBP] = 0x00A3,
    //[JPY] = 0x00A5,
    //[EURO] = 0x20AC,
    //[PLUS_MINUS] = 0x00B1,
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
// [main board] row 0
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
    [MATHEMATICAL_LEFT_WHITE_SQUARE_BRACKET] = 0x27E6,
    [MATHEMATICAL_RIGHT_WHITE_SQUARE_BRACKET] = 0x27E7,

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
    [TWO_DOT_LEADER] = 0x2025,
    [BULLET] = 0x2022,

// [main board] row 3
    [GREEK_LC_ZETA] = 0x03B6,
    [GREEK_UC_ZETA] = 0x0396,
    [GREEK_LC_XI] = 0x03BE,
    [GREEK_UC_XI] = 0x039E,
    [GREEK_LC_CHI] = 0x03C7,
    [GREEK_UC_CHI] = 0x03A7,
    [GREEK_LC_FINAL_SIGMA] = 0x03C2,
    // [GREEK_UC_SIGMA] = 0x03A3, // Final sigma doesn't differentiate the capitalised form
    [GREEK_LC_BETA] = 0x03B2,
    [GREEK_UC_BETA] = 0x0392,
    [GREEK_LC_NU] = 0x03BD,
    [GREEK_UC_NU] = 0x039D,
    [GREEK_LC_MU] = 0x03BC,
    [GREEK_UC_MU] = 0x039C,
    [MUCH_LESS_THAN] = 0x226A,
    [MUCH_GREATER_THAN] = 0x226B,
    [INTEGRAL] = 0x222B,
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
    [CYR_LC_UAGE] = 0x0491,
    [CYR_UC_UAGE] = 0x0490,
    [CYR_LC_DE] = 0x0434,
    [CYR_UC_DE] = 0x0414,
    [CYR_LC_DJE] = 0x0452,
    [CYR_UC_DJE] = 0x0402,
    [CYR_LC_GJE] = 0x0453,
    [CYR_UC_GJE] = 0x0403,
    [CYR_LC_YE] = 0x0435,
    [CYR_UC_YE] = 0x0415,
    [CYR_LC_YO] = 0x0451,
    [CYR_UC_YO] = 0x0401,
    [CYR_LC_UAYE] = 0x0454,
    [CYR_UC_UAYE] = 0x0404,
    [CYR_LC_ZHE] = 0x0436,
    [CYR_UC_ZHE] = 0x0416,
    [CYR_LC_ZE] = 0x0437,
    [CYR_UC_ZE] = 0x0417,
    [CYR_LC_DZE] = 0x0405,
    [CYR_UC_DZE] = 0x0455,
    [CYR_LC_I] = 0x0438,
    [CYR_UC_I] = 0x0418,
    [CYR_LC_IDOT] = 0x0456,
    [CYR_UC_IDOT] = 0x0406,
    [CYR_LC_YI] = 0x0457,
    [CYR_UC_YI] = 0x0407,
    [CYR_UC_SHORTI] = 0x0439,
    [CYR_LC_SHORTI] = 0x0419,
    [CYR_UC_JE] = 0x0458,
    [CYR_LC_JE] = 0x0408,
    [CYR_LC_KA] = 0x043A,
    [CYR_UC_KA] = 0x041A,
    [CYR_LC_EL] = 0x043B,
    [CYR_UC_EL] = 0x041B,
    [CYR_LC_LJE] = 0x0459,
    [CYR_UC_LJE] = 0x0409,
    [CYR_LC_EM] = 0x043C,
    [CYR_UC_EM] = 0x041C,
    [CYR_LC_EN] = 0x043D,
    [CYR_UC_EN] = 0x041D,
    [CYR_LC_NJE] = 0x045A,
    [CYR_UC_NJE] = 0x040A,
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
    [CYR_LC_TJE] = 0x045B,
    [CYR_UC_TJE] = 0x040B,
    [CYR_LC_KJE] = 0x045C,
    [CYR_UC_KJE] = 0x040C,
    [CYR_LC_U] = 0x0443,
    [CYR_UC_U] = 0x0423,
    [CYR_LC_SHORTU] = 0x045E,
    [CYR_UC_SHORTU] = 0x040E,
    [CYR_LC_EF] = 0x0444,
    [CYR_UC_EF] = 0x0424,
    [CYR_LC_KHA] = 0x0445,
    [CYR_UC_KHA] = 0x0425,
    [CYR_LC_TSE] = 0x0446,
    [CYR_UC_TSE] = 0x0426,
    [CYR_LC_CHE] = 0x0447,
    [CYR_UC_CHE] = 0x0427,
    [CYR_LC_DZHE] = 0x045F,
    [CYR_UC_DZHE] = 0x040F,
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
    
    // APL
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
};

/*
 * Layer definitions.
 */
#define _BASE 0   // Base layer
#define _APL 1    // APL symbols
#define _GREEK 2  // Greek symbols
#define _FN 4     // FN & media keys
#define _CYR 3

enum custom_keycodes {
    // daughter board R0
	H_DL0R0C00 = SAFE_RANGE,
	H_DL0R0C01,
	H_DL0R0C02,
	H_DL0R0C03,
	H_DL0R0C04,
	H_DL0R0C05,
	H_DL0R0C06,
	H_DL0R0C07,
	H_DL0R0C08,
	H_DL0R0C09,
	H_DL0R0C10,
	H_DL0R0C11,
	H_DL0R0C12,
	H_DL0R0C13,
	H_DL0R0C14,
	H_DL0R0C15,
	H_DL0R0C16,
	H_DL0R0C17,
	H_DL0R0C18,
	H_DL0R0C19,
	H_DL0R0C20,
	H_DL0R0C21,
	H_DL0R0C22,
	H_DL0R0C23,
	H_DL0R0C24,
	H_DL0R0C25,
	H_DL0R0C26,
	H_DL0R0C27,
    // daughter board R1
	H_DL0R1C00,
	H_DL0R1C01,
	H_DL0R1C02,
	H_DL0R1C03,
	H_DL0R1C04,
	H_DL0R1C05,
	H_DL0R1C06,
	H_DL0R1C07,
	H_DL0R1C08,
	H_DL0R1C09,
	H_DL0R1C10,
	H_DL0R1C11,
	H_DL0R1C12,
	H_DL0R1C13,
	H_DL0R1C14,
	H_DL0R1C15,
	H_DL0R1C16,
	H_DL0R1C17,
	H_DL0R1C18,
	H_DL0R1C19,
	H_DL0R1C20,
	H_DL0R1C21,
	H_DL0R1C22,
	H_DL0R1C23,
	H_DL0R1C24,
	H_DL0R1C25,
	H_DL0R1C27,
    // daughter board R2
	H_DL0R2C04,
	H_DL0R2C05,
	H_DL0R2C06,
	H_DL0R2C11,
	H_DL0R2C16,
	H_DL0R2C21,
	H_DL0R2C22,
	H_DL0R2C23,
	H_DL0R2C24,
	H_DL0R2C25,
	H_DL0R2C26,
	H_DL0R2C27,
    //left cluster
    //mainboard
	H_ML0R3C05,
	H_ML0R3C21,
	H_ML0R5C21,
	H_ML0R5C23,
	H_ML0R7C06,
	H_ML0R7C14
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* _BASE: Base Layer(Default)
     * ,-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
     * |   Help    |   Macro   |#| Terminal  |   Quote   | OverStrike| ClearInput|ClearScreen|HoldOutput | StopOutput|   Abort   |   Break   |  Resume   |#|   Call    |   RESET   |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |   Local   |  Network  |#|  System   |  Refresh  |   Buffer  |   Square  |   Circle  | Triangle  |  Diamond  |   Repeat  |  Transmit |  Status   |#|  Suspend  |  CapsLock |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * | F1  | F2  |Close|Open |#|   Esc     |  ?  |  !  |  @  |  £  |  €  |  ¥  |  '  |  “  |  ”  |  '  |  _  |  <  |  >  |  |  |  {  |  }  | Complete  |#|  ^  |  %  |  #  |  $  |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |###############################################################################################################################################################################|
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * | F3  | F4  |Find |Write|#|Compose | "/± | :/~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  |  | {/‹  | }/›  | Undo   |#|  ~  |  /  |  *  |  -  |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * | F5  | F6  |Mark |Undo |#|Paste|  Cut   |Tab     |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  (  |  )  | Bspace | Clear  |Begin|#|  7  |  8  |  9  |  +  |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * | F7  | F8  |Selec|Debug|#|Function|  Mode  |  Top   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  | Return |  Line  |  Page  |#|  4  |  5  |  6  |  &  |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * | F9  | F10 | TTY |LOCK |#|Begin| End | Symbol | Shift  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | Shift  | Symbol |  Up | End |#|  1  |  2  |  3  |  =  |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * | F11 | F12 |Home | EOF |#|Prev |Next |7bit | Alt | Hyper  | Spr |  Ctrl  | Space |TRNS |  Del   |  Ctrl  | Spr  | Hyper  |Meta |Left |Down |Right|#| Del |  0  |  .  | Run |
     * `-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------'
     *  Incomplete mappings
     *  r1: H_MACRO, H_TERMINAL, H_OVERSTRIKE, H_HOLD_OUTPUT, H_STOP_OUTPUT, H_CALL
     *  r2: H_LOCAL, H_NETWORK, H_SYSTEM, H_REFRESH, H_BUFFER, H_SQUARE, H_CIRCLE, H_TRIANGLE, H_DIAMOND, H_REPEAT, H_TRANSMIT, H_STATUS
     *  r3: H_COMPLETE
     *
     *  r1: H_FIND, H_WRITE
     *  r2: H_MARK
     *  r3: H_SELECT, H_DEBUG, H_LINE
     *  r4: H_TTY
     *  r2: H_7BIT, H_CIRCLE_SM
     */
    [_BASE] = LAYOUT_h7v3_213(
        H_DL0R0C00, H_DL0R0C01, H_DL0R0C02, H_DL0R0C03,     H_DL0R0C04,    HYPR(KC_T), H_DL0R0C06, H_DL0R0C07, H_DL0R0C08, H_DL0R0C09, H_DL0R0C10, H_DL0R0C11, H_DL0R0C12, H_DL0R0C13, H_DL0R0C14, H_DL0R0C15, H_DL0R0C16, H_DL0R0C17, H_DL0R0C18, H_DL0R0C19, H_DL0R0C20, H_DL0R0C21, H_DL0R0C22, H_DL0R0C23,     H_DL0R0C24, H_DL0R0C25, H_DL0R0C26, H_DL0R0C27,
        H_DL0R1C00, H_DL0R1C01, H_DL0R1C02, H_DL0R1C03,     G(KC_P),       G(S(KC_P)), G(A(KC_P)), G(C(KC_P)), LCAG(KC_P), H_DL0R1C09, H_DL0R0C10, HYPR(KC_S), H_DL0R1C12, H_DL0R1C13, H_DL0R1C14, H_DL0R1C15, H_DL0R1C16, H_DL0R1C17, H_DL0R1C18, H_DL0R1C19, H_DL0R1C20, H_DL0R1C21, H_DL0R1C22, H_DL0R1C23,     KC_CAPS,    KC_PSCR,    KC_SLCK,    KC_PAUSE,
        KC_F1,      KC_F2,      KC_F13,     KC_F14,         H_DL0R2C04,    H_DL0R2C05, H_DL0R2C06, KC_F1,      KC_F2,      KC_F3,      KC_F4,      H_DL0R2C11, KC_F5,      KC_F6,      KC_F7,      KC_F8,      H_DL0R2C16, KC_F9,      KC_F10,     KC_F11,     KC_F12,     H_DL0R2C21, H_DL0R2C22, H_DL0R2C23,     H_DL0R2C24, H_DL0R2C25, H_DL0R2C26, H_DL0R2C27,

		KC_F3,      KC_F4,      KC_F15,     KC_F16,         KC_PAUSE,         H_ML0R3C05, KC_GRAVE,   KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_BSLS,    KC_7,       KC_8,       KC_9,       KC_0,       KC_MINUS,   KC_EQUAL,   KC_DEL,     H_ML0R3C21,       KC_UNDO,        KC_NLCK,    KC_PSLS,    KC_PAST,    KC_EQL,
        KC_F5,      KC_F6,      KC_F17,     KC_F18,         KC_COPY,     KC_PASTE,         KC_TAB,           KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_LBRC,    KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_QUOTE,   KC_BSPC,          KC_CUT,          KC_HOME,        KC_P7,      KC_P8,     KC_P9,      KC_PMNS,
	    KC_F7,      KC_F8,      KC_F19,     KC_F20,         MO(_FN),          MO(_APL),        LCTL_T(KC_ESC),    KC_A,       KC_R,       KC_S,       KC_T,       KC_D,       KC_RBRC,    KC_H,       KC_N,       KC_E,       KC_I,       KC_O,       KC_ENTER,          MO(_CYR),              H_ML0R5C23,     KC_P4,      KC_P5,      KC_P6,      KC_PPLS,
        KC_F9,      KC_F10,     KC_F21,     KC_F22,         KC_HOME,    KC_END,     MO(_GREEK),       KC_LSFT,          KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SLASH,   KC_K,       KC_M,       KC_COMMA,     KC_DOT,   KC_RSFT,          MO(_GREEK),       KC_UP,      KC_END,         KC_P1,      KC_P2,      KC_P3,      KC_ENTER,
        KC_F11,     KC_F12,     KC_F23,     KC_F23,         KC_MPRV,    KC_MNXT,    H_ML0R7C06, KC_MEH,     KC_LGUI,    KC_LALT,          KC_HYPR,          KC_SPC,           H_ML0R7C14, KC_DEL,           KC_HYPR,          KC_RALT,    KC_RGUI,          KC_MEH,     KC_LEFT,    KC_DOWN,    KC_RGHT,        KC_P0,      KC_DEL,     KC_PDOT,    KC_BSPC


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
    [_APL] = LAYOUT_h7v3_213(
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,

        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  X(N_ARY_LOGICAL_AND), X(N_ARY_LOGICAL_OR), X(N_ARY_INTERSECT), X(N_ARY_UNION), X(SUBSET_OF),FT,X(SUPERSET_OF), X(FORALL),X(LEMNISCATE), X(THERE_EXISTS),FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  X(UP_TACK), X(DOWN_TACK), X(RIGHT_TACK), X(LEFT_TACK), X(UPWARDS_ARROW),FT,X(DOWNARDS_ARROW), X(LEFTWARDS_ARROW),X(RIGHTWARDS_ARROW), X(LEFTRIGHT_ARROW),X(PARTIAL_DIFFERENTIAL),       FT,      FT,      FT,                                      FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,  X(LEFT_FLOOR), X(LEFT_CEILING), X(NOT_EQUAL_TO), X(ASYMPTOTICALLY_EQUAL_TO),X(NOT_ASYMPTOTICALLY_EQUAL_TO),FT, X(LESS_THAN_OR_EQUAL),X(GREATER_THAN_OR_EQUAL),      FT,       FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT
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
    [_GREEK] = LAYOUT_h7v3_213(
        FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
        FT,      FT,      FT,       FT,       FT, X(CONTOUR_INTEGRAL),  X(NEGATION),  X(COPTIC_LC_DEI), X(DOUBLE_DAGGER), X(NABLA), X(CENT), X(DEGREE), X(APL_QUAD), X(DOUBLE_VERTICAL_LINE), X(DIVISION), X(MULTIPLICATION), X(PILCROW), X(LARGE_CIRCLE), X(HORIZONTAL_BAR), X(APPROXIMATELY_EQUAL_TO), X(SQUARE_IMAGE_OF), X(SQUARE_ORIGINAL_OF),       FT,                    FT,     FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(GREEK_LC_XI, GREEK_UC_XI), XP(GREEK_LC_FINAL_SIGMA, GREEK_UC_SIGMA), XP(GREEK_LC_PHI, GREEK_UC_PHI), XP(GREEK_LC_PI, GREEK_UC_PI), XP(GREEK_LC_GAMMA, GREEK_UC_GAMMA), X(MATHEMATICAL_LEFT_WHITE_SQUARE_BRACKET), XP(GREEK_LC_YOT, GREEK_UC_YOT),XP(GREEK_LC_LAMDA, GREEK_UC_LAMDA),XP(GREEK_LC_THETA, GREEK_UC_THETA),XP(GREEK_LC_UPSILON, GREEK_UC_UPSILON),X(TWO_DOT_LEADER),X(BULLET),     FT,      FT,      FT,                            FT,      FT,       FT,      FT,
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
    [_FN] = LAYOUT_h7v3_213(
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         RESET,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         KC_MUTE,    KC_VOLD,    KC_VOLU,  FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,

        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       UC_M_WI,  FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       UC_MOD,   FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       UC_M_LN,  FT,       FT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,   FT,       FT,       FT,       FT,       FT,       FT,       UC_M_WC,  FT,       FT,       FT,       UC_M_MA,  FT,       FT,       FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT
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
    [_CYR] = LAYOUT_h7v3_213(
        FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
        FT,      FT,      FT,       FT,       FT, FT,  FT,  XP(CYR_LC_DJE, CYR_UC_DJE),XP(CYR_LC_GJE, CYR_UC_GJE),XP(CYR_LC_UAYE, CYR_UC_UAYE),XP(CYR_LC_DZE, CYR_UC_DZE),XP(CYR_LC_IDOT, CYR_UC_IDOT),XP(CYR_LC_JE, CYR_UC_JE),XP(CYR_LC_YI, CYR_UC_YI),XP(CYR_LC_LJE, CYR_UC_LJE),XP(CYR_LC_NJE, CYR_UC_NJE),XP(CYR_LC_TJE, CYR_UC_TJE),XP(CYR_LC_KJE, CYR_UC_KJE),XP(CYR_LC_SHORTU, CYR_UC_SHORTU),XP(CYR_LC_DZHE, CYR_UC_DZHE),       FT,FT,FT,                    FT,     FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(CYR_LC_YA, CYR_UC_YA),XP(CYR_LC_YU, CYR_UC_YU),XP(CYR_LC_EF, CYR_UC_EF),XP(CYR_LC_PE, CYR_UC_PE),XP(CYR_LC_GE, CYR_UC_GE),XP(CYR_LC_TSE, CYR_UC_TSE),XP(CYR_LC_SHORTI, CYR_UC_SHORTI),XP(CYR_LC_EL, CYR_UC_EL),XP(CYR_LC_U, CYR_UC_U),XP(CYR_LC_YERY, CYR_UC_YERY),XP(CYR_LC_E, CYR_UC_E),XP(CYR_LC_YO, CYR_UC_YO),     FT,      FT,      FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(CYR_LC_A, CYR_UC_A),XP(CYR_LC_ER, CYR_UC_ER),XP(CYR_LC_ES, CYR_UC_ES),XP(CYR_LC_TE, CYR_UC_TE),XP(CYR_LC_DE, CYR_UC_DE),XP(CYR_LC_SHCHA, CYR_UC_SHCHA),XP(CYR_LC_ZHE, CYR_UC_ZHE),XP(CYR_LC_EN, CYR_UC_EN),XP(CYR_LC_YE, CYR_UC_YE),XP(CYR_LC_I, CYR_UC_I),XP(CYR_LC_O, CYR_UC_O),      FT,      FT,      FT,                                     FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  FT,  XP(CYR_LC_ZE, CYR_UC_ZE),XP(CYR_LC_KHA, CYR_UC_KHA),XP(CYR_LC_CHE, CYR_UC_CHE),XP(CYR_LC_VE, CYR_UC_VE),XP(CYR_LC_BE, CYR_UC_BE),XP(CYR_LC_SHA, CYR_UC_SHA),XP(CYR_LC_KA, CYR_UC_KA),XP(CYR_LC_EM, CYR_UC_EM),XP(CYR_LC_YERI, CYR_UC_YERI),XP(CYR_LC_YER, CYR_UC_YER),      FT,      FT,      FT,      FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,      FT,                                     FT,      FT,       FT,      FT
        )
};

void matrix_init_keymap(void) {}

void matrix_scan_keymap(void) {}

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      // [daughter board] row 1 POS key macros
	case H_DL0R0C00:
		send_string("hypercomp");
		return false;
	case H_DL0R0C01:
		send_string("hyperflash");
		return false;
	case H_DL0R0C02:
		send_string("hyperedit");
		return false;
	case H_DL0R0C03:
		send_string("cd /home/aj/git/qmk_firmware/keyboards/hyper7/h7/v3");
		return false;
	case H_DL0R0C04:
		send_string("doas mount -a");
		return false;
	case H_DL0R0C05:
		send_string("tappyttf");
		return false;
	case H_DL0R0C06:
		send_string("nmeat");
		return false;
	case H_DL0R0C07:
		send_string("H_DL0R0C07");
		return false;
	case H_DL0R0C08:
		send_string("H_DL0R0C08");
		return false;
	case H_DL0R0C09:
		send_string("H_DL0R0C09");
		return false;
	case H_DL0R0C10:
		send_string("H_DL0R0C10");
		return false;
	case H_DL0R0C11:
		send_string("H_DL0R0C11");
		return false;
	case H_DL0R0C12:
		send_string("H_DL0R0C12");
		return false;
	case H_DL0R0C13:
		send_string("H_DL0R0C13");
		return false;
	case H_DL0R0C14:
		send_string("H_DL0R0C14");
		return false;
	case H_DL0R0C15:
		send_string("H_DL0R0C15");
		return false;
	case H_DL0R0C16:
		send_string("H_DL0R0C16");
		return false;
	case H_DL0R0C17:
		send_string("H_DL0R0C17");
		return false;
	case H_DL0R0C18:
		send_string("H_DL0R0C18");
		return false;
	case H_DL0R0C19:
		send_string("H_DL0R0C19");
		return false;
	case H_DL0R0C20:
		send_string("H_DL0R0C20");
		return false;
	case H_DL0R0C21:
		send_string("H_DL0R0C21");
		return false;
	case H_DL0R0C22:
		send_string("H_DL0R0C22");
		return false;
	case H_DL0R0C23:
		send_string("H_DL0R0C23");
		return false;
	case H_DL0R0C24:
		send_string("H_DL0R0C24");
		return false;
	case H_DL0R0C25:
		send_string("H_DL0R0C25");
		return false;
	case H_DL0R0C26:
		send_string("H_DL0R0C26");
		return false;
	case H_DL0R0C27:
		send_string("H_DL0R0C27");
		return false;
// [daughter board] row 2 POS key macros
	case H_DL0R1C00:
		send_string("doas pacman -Syu");
		return false;
	case H_DL0R1C01:
		send_string("H_DL0R1C01");
		return false;
	case H_DL0R1C02:
		send_string("H_DL0R1C02");
		return false;
	case H_DL0R1C03:
		send_string("H_DL0R1C03");
		return false;
	case H_DL0R1C04:
		send_string("H_DL0R1C04");
		return false;
	case H_DL0R1C05:
		//send_string(LGUI(KC_P));
		send_string("H_DL0R1C05");
		return false;
	case H_DL0R1C06:
		send_string("H_DL0R1C06");
		//send_string(LGUI(LSFT(KC_P)));
		return false;
	case H_DL0R1C07:
		send_string("H_DL0R1C07");
		return false;
	case H_DL0R1C08:
		send_string("H_DL0R1C08");
		return false;
	case H_DL0R1C09:
		send_string("H_DL0R1C09");
		return false;
	case H_DL0R1C10:
		send_string("H_DL0R1C10");
		return false;
	case H_DL0R1C11:
		send_string("H_DL0R1C11");
		return false;
	case H_DL0R1C12:
		send_string("H_DL0R1C12");
		return false;
	case H_DL0R1C13:
		send_string("H_DL0R1C13");
		return false;
	case H_DL0R1C14:
		send_string("H_DL0R1C14");
		return false;
	case H_DL0R1C15:
		send_string("H_DL0R1C15");
		return false;
	case H_DL0R1C16:
		send_string("H_DL0R1C16");
		return false;
	case H_DL0R1C17:
		send_string("H_DL0R1C17");
		return false;
	case H_DL0R1C18:
		send_string("H_DL0R1C18");
		return false;
	case H_DL0R1C19:
		send_string("H_DL0R1C19");
		return false;
	case H_DL0R1C20:
		send_string("H_DL0R1C20");
		return false;
	case H_DL0R1C21:
		send_string("H_DL0R1C21");
		return false;
	case H_DL0R1C22:
		send_string("H_DL0R1C22");
		return false;
	case H_DL0R1C23:
		send_string("H_DL0R1C23");
		return false;
	case H_DL0R1C24:
		send_string("H_DL0R1C24");
		return false;
	case H_DL0R1C25:
		send_string("H_DL0R1C25");
		return false;
	case H_DL0R1C27:
		send_string("H_DL0R1C27");
		return false;
      // [daughter board] row 3
	case H_DL0R2C04:
		send_string("H_DL0R2C04");
		return false;
	case H_DL0R2C05:
		send_string("H_DL0R2C05");
		return false;
	case H_DL0R2C06:
		send_string("H_DL0R2C06");
		return false;
	case H_DL0R2C11:
		send_string("H_DL0R2C11");
		return false;
	case H_DL0R2C16:
		send_string("H_DL0R2C16");
		return false;
	case H_DL0R2C21:
		send_string("H_DL0R2C21");
		return false;
	case H_DL0R2C22:
		send_string("H_DL0R2C22");
		return false;
	case H_DL0R2C23:
		send_string("H_DL0R2C23");
		return false;
	case H_DL0R2C24:
		send_string("H_DL0R2C24");
		return false;
	case H_DL0R2C25:
		send_string("H_DL0R2C25");
		return false;
	case H_DL0R2C26:
		send_string("H_DL0R2C26");
		return false;
	case H_DL0R2C27:
		send_string("H_DL0R2C27");
		return false;
	case H_ML0R3C05:
		send_string("H_ML0R3C05");
		return false;
	case H_ML0R3C21:
		send_string("H_ML0R3C21");
		return false;
	case H_ML0R5C21:
		send_string("H_ML0R5C21");
		return false;
    case H_ML0R5C23:
        if (get_mods() & MODS_SHIFT_MASK) {
          CLEAN_MODS(
            send_string(SS_TAP(X_PGUP));
          );
        } else {
          send_string(SS_TAP(X_PGDN));
        }
		return false;
	case H_ML0R7C06:
		send_string("H_ML0R7C06");
		return false;
	case H_ML0R7C14:
		send_string("H_ML0R7C14");
		return false;
    }
  }

  return true;
};

bool led_update_kb(led_t led_state) {
  // stub
  return true;
};
