#include QMK_KEYBOARD_H

//#include "bit-shifter.h"

// Brevity defines
#define KN KC_NO
#define FT KC_TRNS

// UNICODEMAP_ENABLE
enum unicode_names {
    AT_SYMBOL,
    GBP,
    JPY,
    EURO,
    PLUS_MINUS,
    QUOTATION_MARK,
    TILDE_OPERATOR,
    SINGLE_RIGHT_POINTING_ANGLE_QUOTATION_MARK,
    SINGLE_LEFT_POINTING_ANGLE_QUOTATION_MARK,
    BACKTICK,
    DQUOTE_OPEN,
    DQUOTE_CLOSE,
    PRIME,
    PIPE,

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
};

const uint32_t PROGMEM unicode_map[] = {
// Unicode char definitions
    [AT_SYMBOL] = 0x0040,
    [GBP] = 0x00A3,
    [JPY] = 0x00A5,
    [EURO] = 0x20AC,
    [PLUS_MINUS] = 0x00B1,
    [QUOTATION_MARK] = 0x0022,
    [TILDE_OPERATOR] = 0x223C,
    [SINGLE_RIGHT_POINTING_ANGLE_QUOTATION_MARK] = 0x203A,
    [SINGLE_LEFT_POINTING_ANGLE_QUOTATION_MARK] = 0x2039,
    [BACKTICK] = 0x2018,
    [DQUOTE_OPEN] = 0x201C,
    [DQUOTE_CLOSE] = 0x201D,
    [PRIME] = 0x2019,
    [PIPE] = 0x2502,


// Greek
// [main board] row 0
    [CONTOUR_INTEGRAL] = 0x222E,
    [COPTIC_LC_DEI] = 0x03EF,
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
};

/*
 * Layer definitions.
 */
#define _BASE 0   // Base layer
#define _APL 1    // APL symbols
#define _GREEK 2  // Greek symbols
#define _FN 3     // FN & media keys

enum custom_keycodes {
    // daughter board R1
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
	H_DL0R1C26,
	H_DL0R1C27,
	H_DL0R2C00,
	H_DL0R2C01,
	H_DL0R2C02,
	H_DL0R2C03,
	H_DL0R2C04,
	H_DL0R2C05,
	H_DL0R2C06,
	H_DL0R2C13,
	H_DL0R2C14,
	H_DL0R2C21,
	H_DL0R2C22,
	H_DL0R2C23,
	H_DL0R2C24,
	H_DL0R2C25,
	H_DL0R2C26,
	H_DL0R2C27,
	H_LL0R3C00,
	H_LL0R3C01,
	H_LL0R3C02,
	H_LL0R3C03,
	H_LL0R4C00,
	H_LL0R4C01,
	H_LL0R4C02,
	H_LL0R4C03,
	H_LL0R5C00,
	H_LL0R5C01,
	H_LL0R5C02,
	H_LL0R5C03,
	H_LL0R6C00,
	H_LL0R6C01,
	H_LL0R6C02,
	H_LL0R6C03,
	H_LL0R7C00,
	H_LL0R7C01,
	H_LL0R7C02,
	H_LL0R7C03,
	H_ML0R3C05,
	H_ML0R3C21,
	H_ML0R5C21,
	H_ML0R5C23,
	H_ML0R7C06,
	H_ML0R7C14,
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
		//H_HELP,            H_MACRO,           H_TERMINAL,           H_QUOTE,             H_OVERSTRIKE,            H_CLEAR_INPUT,           H_CLEAR_SCREEN,                 H_HOLD_OUTPUT,             H_STOP_OUTPUT,          H_ABORT,           H_BREAK,              H_RESUME,            H_CALL,              KC_NLCK,           //14
        //H_LOCAL,           H_NETWORK,         H_SYSTEM,             H_REFRESH,           H_BUFFER,                H_SQUARE,                H_CIRCLE,                       H_TRIANGLE,                H_DIAMOND,              H_REPEAT,          H_TRANSMIT,           H_STATUS,            H_SUSPEND,           KC_CLCK,           //14
		//KC_F1,   KC_F2,    H_CLOSE,  H_OPEN,  KC_ESC,               KC_QUES,    KC_EXLM, X(AT_SYMBOL),    X(GBP), X(EURO),        X(JPY),  X(BACKTICK),    X(DQUOTE_OPEN), X(DQUOTE_CLOSE), X(PRIME), KC_UNDS,       KC_LABK, KC_RABK,  X(PIPE), KC_LCBR,    KC_RCBR,  H_COMPLETE,          KC_CIRC,   KC_PERC,  KC_HASH,  KC_DLR,  //26
		//KC_F3,   KC_F4,    KC_FIND,  H_WRITE, KC_LEAD,  H_DOUBLE_QUOTE__PLUS_MINUS, H_COLON__TILDE,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,    KC_6,     KC_7,    KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,  KC_NUBS, H_L_BRACE__L_CHEVRON,  H_R_BRACE__R_CHEVRON,  KC_UNDO,    KC_TILD,   KC_SLSH,  KC_PAST,  KC_PMNS, //27
		//KC_F5,   KC_F6,    KC_EXLM,  KC_UNDO, KC_PASTE, KC_CUT ,  KC_TAB ,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,    KC_Y,     KC_U,    KC_I,     KC_O,    KC_P,     KC_LPRN,  KC_RPRN, KC_BSPC, KC_CLEAR, KC_HOME,                                                                 KC_P7,     KC_P8,    KC_P9,    KC_PPLS, //26
		//KC_F7,   KC_F8,    KC_SELECT,H_DEBUG, MO(_FN), KC_NO,       MO(_APL), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,    KC_H,     KC_J,    KC_K,     KC_L,    H_SEMI_COLON__BACK_TICK,  KC_QUOT,  KC_ENT , H_LINE, H_PAGE,                                                           KC_P4,     KC_P5,    KC_P6,    KC_AMPR, //25
		//KC_F9,   KC_F10,   H_TTY,    KC_LOCK, KC_HOME,  KC_END ,  MO(_GREEK), KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,    KC_B,     KC_N,    KC_M,     KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT, MO(_GREEK),KC_UP,    KC_END,                                                              KC_P1,     KC_P2,    KC_P3,    KC_EQL,  //26
		//KC_F11,  KC_F12,   KC_HOME,  H_EOF,   KC_MPRV,  KC_MNXT,  H_7BIT,  KC_LALT,  KC_HYPR,  KC_LGUI,  KC_LCTL,  KC_SPC,  H_CIRCLE_SM,  KC_DEL,  KC_RCTL,  KC_RGUI, KC_HYPR,  KC_RGUI,  KC_LEFT, KC_DOWN, KC_RGHT,                                                                        KC_DEL,    KC_P0,    KC_PDOT,  KC_ENTER //25
		//https://www.mankier.com/7/xkeyboard-config#Options-Position_of_Compose_key PAUSE IS COMPOS
        //H_DB0X00, H_DB0X01, H_DB0X02, H_DB0X03,     H_DB0X04, H_DB0X05, H_DB0X06, H_DB0X07, H_DB0X08, H_DB0X09, H_DB0X10, H_DB0X11, H_DB0X12, H_DB0X13, H_DB0X14, H_DB0X15, H_DB0X16, H_DB0X17, H_DB0X18, H_DB0X19, H_DB0X20, H_DB0X21, H_DB0X22, H_DB0X23,     H_DB0X24, H_DB0X25, H_DB0X26, H_DB0X27,
        //H_DB1X00, H_DB1X01, H_DB1X02, H_DB1X03,     H_DB1X04, H_DB1X05, H_DB1X06, H_DB1X07, H_DB1X08, H_DB1X09, H_DB1X10, H_DB1X11, H_DB1X12, H_DB1X13, H_DB1X14, H_DB1X15, H_DB1X16, H_DB1X17, H_DB1X18, H_DB1X19, H_DB1X20, H_DB1X21, H_DB1X22, H_DB1X23,     H_DB1X24, H_DB1X25, H_DB1X26, H_DB1X27,
        //H_DB2X00, H_DB2X01, H_DB2X02, H_DB2X03,     H_DB2X04, H_DB2X05, H_DB2X06, KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    H_DB2X13, H_DB2X14, KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   H_DB2X21, H_DB2X22, H_DB2X23,     H_DB2X24, H_DB2X25, H_DB2X26, H_DB2X27,
		//
		//H_LC3X00, H_LC3X01, H_LC3X02, H_LC3X03,     KC_PAUSE, H_MB3X05, KC_GRAVE,           KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_BSLS,  KC_7,     KC_8,     KC_9,     KC_0,     KC_MINUS, KC_EQUAL, KC_DEL,   H_MB3X22, KC_UNDO,      KC_NLCK,  KC_PSLS,  KC_PAST,  KC_EQL,
        //H_LC4X00, H_LC4X01, H_LC4X02, H_LC4X03,     KC_CUT,   KC_PASTE, KC_TAB,             KC_Q,     KC_W,     KC_F,     KC_D,     KC_P,     KC_LBRC,  KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_QUOTE,           KC_BSPC,  KC_COPY,  KC_HOME,      KC_P7,    KC_P7,    KC_P9,    KC_PMNS,
		//H_LC5X00, H_LC5X01, H_LC5X02, H_LC5X03,     MO(_FN),  MO(_APL), LCTL_T(KC_ESC),     KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_RBRC,  KC_M,     KC_N,     KC_E,     KC_I,     KC_O,                         KC_ENTER, MO(_CYR), H_MB5X23,     KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        //H_LC6X00, H_LC6X01, H_LC6X02, H_LC6X03,     KC_HOME,  KC_END,  MO(_GRK),  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_SLASH, KC_K,     KC_H,     KC_DOT,   KC_COMMA,                     KC_RSFT,  MO(_GREEK), KC_UP,  KC_END,       KC_P1,    KC_P2,    KC_P3,    KC_ENTER,
        //H_LC7X00, H_LC7X01, H_LC7X02, H_LC7X03,     KC_MPRV,  KC_MNXT,  H_MB7X06, KC_MEH,   KC_LGUI,  KC_LALT,  KC_HYPR,  KC_SPC,   H_MB7X12, KC_DEL,   KC_HYPR,  KC_RALT,  KC_RGUI,  KC_MEH,                                 KC_LEFT,  KC_DOWN,  KC_RGHT,      KC_P0,    KC_DEL,   KC_PDOT,  KC_BSPC
        H_DL0R0C00, H_DL0R0C01, H_DL0R0C02, H_DL0R0C03,     H_DL0R0C04, H_DL0R0C05, H_DL0R0C06, H_DL0R0C07, H_DL0R0C08, H_DL0R0C09, H_DL0R0C10, H_DL0R0C11, H_DL0R0C12, H_DL0R0C13, H_DL0R0C14, H_DL0R0C15, H_DL0R0C16, H_DL0R0C17, H_DL0R0C18, H_DL0R0C19, H_DL0R0C20, H_DL0R0C21, H_DL0R0C22, H_DL0R0C23,     H_DL0R0C24, H_DL0R0C25, H_DL0R0C26, H_DL0R0C27,
        H_DL0R1C00, H_DL0R1C01, H_DL0R1C02, H_DL0R1C03,     H_DL0R1C04, H_DL0R1C05, H_DL0R1C06, H_DL0R1C07, H_DL0R1C08, H_DL0R1C09, H_DL0R1C10, H_DL0R1C11, H_DL0R1C12, H_DL0R1C13, H_DL0R1C14, H_DL0R1C15, H_DL0R1C16, H_DL0R1C17, H_DL0R1C18, H_DL0R1C19, H_DL0R1C20, H_DL0R1C21, H_DL0R1C22, H_DL0R1C23,     H_DL0R1C24, H_DL0R1C25, H_DL0R1C26, H_DL0R1C27,
        H_DL0R2C00, H_DL0R2C01, H_DL0R2C02, H_DL0R2C03,     H_DL0R2C04, H_DL0R2C05, H_DL0R2C06, KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      H_DL0R2C13, H_DL0R2C14, KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     H_DL0R2C21, H_DL0R2C22, H_DL0R2C23,     H_DL0R2C24, H_DL0R2C25, H_DL0R2C26, H_DL0R2C27,

		H_LL0R3C00, H_LL0R3C01, H_LL0R3C02, H_LL0R3C03,     KC_PAUSE,         H_ML0R3C05, KC_GRAVE,   KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_BSLS,    KC_7,       KC_8,       KC_9,       KC_0,       KC_MINUS,   KC_EQUAL,   KC_DEL,     H_ML0R3C21,       KC_UNDO,        KC_NLCK,    KC_PSLS,    KC_PAST,    KC_EQL,
        H_LL0R4C00, H_LL0R4C01, H_LL0R4C02, H_LL0R4C03,     KC_CUT,     KC_PASTE,         KC_TAB,           KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_LBRC,    KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_QUOTE,   KC_BSPC,          KC_COPY,          KC_HOME,        KC_P7,      KC_P7,      KC_P9,      KC_PMNS,
		H_LL0R5C00, H_LL0R5C01, H_LL0R5C02, H_LL0R5C03,     MO(_FN),          MO(_APL),        LCTL_T(KC_ESC),    KC_A,       KC_R,       KC_S,       KC_T,       KC_D,       KC_RBRC,    KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_ENTER,          H_ML0R5C21,            H_ML0R5C23,     KC_P4,      KC_P5,      KC_P6,      KC_PPLS,
        H_LL0R6C00, H_LL0R6C01, H_LL0R6C02, H_LL0R6C03,     KC_HOME,    KC_END,     MO(_GREEK),       KC_LSFT,          KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SLASH,   KC_K,       KC_H,       KC_COMMA,     KC_DOT,   KC_RSFT,          MO(_GREEK),       KC_UP,      KC_END,         KC_P1,      KC_P2,      KC_P3,      KC_ENTER,
        H_LL0R7C00, H_LL0R7C01, H_LL0R7C02, H_LL0R7C03,     KC_MPRV,    KC_MNXT,    H_ML0R7C06, KC_MEH,     KC_LGUI,    KC_LALT,          KC_HYPR,          KC_SPC,           H_ML0R7C14, KC_DEL,           KC_HYPR,          KC_RALT,    KC_RGUI,          KC_MEH,     KC_LEFT,    KC_DOWN,    KC_RGHT,        KC_P0,      KC_DEL,     KC_PDOT,    KC_BSPC
       
        
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
     * |     |     |     |     |#|     |        |        |  ⋀  |  ⋁  |  ⋂  |  ⋃  |  ⊂  |  ⊃  |  ∀  |  ∞  |  ∎  |  ∂  |     |     |        |        |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |        |        |  ⊥  |  ⊤  |  ⊢  |  ⊣  |  ↑  |  ↓  |  ←  |  →  |  ↔  |  ;  |  '  |        |        |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |        |        |  ⌊  |  ⌈  |  ≠  |  ≃  |  ≡  |  ≤  |  ≥  |     |     |     |        |        |     |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |     |     |        |     |        |        |     |        |        |     |        |     |     |     |     |#|     |     |     |     |
     * `-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_APL] = LAYOUT_h7v3_213(
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,

 FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,       FT,      FT,       FT,      FT,       FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  X(N_ARY_LOGICAL_AND), X(N_ARY_LOGICAL_OR), X(N_ARY_INTERSECT), X(N_ARY_UNION), X(SUBSET_OF),FT,X(SUPERSET_OF), X(FORALL),X(LEMNISCATE), X(THERE_EXISTS),X(PARTIAL_DIFFERENTIAL),       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  X(UP_TACK), X(DOWN_TACK), X(RIGHT_TACK), X(LEFT_TACK), X(UPWARDS_ARROW),FT,X(DOWNARDS_ARROW), X(LEFTWARDS_ARROW),X(RIGHTWARDS_ARROW), X(LEFTRIGHT_ARROW),       FT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT,
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
     * |     |     |     |     |#|        |  ∮  |     |  ϯ  |  ‡  |  ∇  |  ¢  |  °  |  ⎕  |  ÷  |  ×  |  ¶  |  ◯  |  ―  |  ≈  |  ‖  |  ⊏  |  ⊐  |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |        |        | θ/Θ | ω/Ω | ε/Ε | ρ/Ρ | τ/Τ | ψ/Ψ | υ/Υ | ι/Ι | ο/Ο | π/Π |  ⟦  |  ⟧  |        |        |      |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|        |        |        | α/Α | σ/Σ | δ/Δ | φ/Φ | γ/Γ | η/Η  | ϳ/Ϳ | κ/Κ | λ/Λ |  ‥  |  •  |        |        |        |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |         | SHIFT | ζ/Ζ  | ξ/Ξ | χ/Χ | ς/Σ | β/Β | ν/Ν | μ/Μ |  ≪  |  ≫  |  ∫  |        |        |     |     |#|     |     |     |     |
     * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
     * |     |     |     |     |#|     |     |     |     |        |     |        |        |     |        |        |     |        |     |     |     |     |#|     |     |     |     |
     * `-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_GREEK] = LAYOUT_h7v3_213(
        FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,
        FT,      FT,      FT,       FT,       FT, X(CONTOUR_INTEGRAL),  FT,  X(COPTIC_LC_DEI), X(DOUBLE_DAGGER), X(NABLA), X(CENT), X(DEGREE), X(APL_QUAD), X(DIVISION), X(MULTIPLICATION), X(PILCROW), X(LARGE_CIRCLE), X(HORIZONTAL_BAR), X(APPROXIMATELY_EQUAL_TO), X(DOUBLE_VERTICAL_LINE), X(SQUARE_IMAGE_OF), X(SQUARE_ORIGINAL_OF),       FT,       FT,                 FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(GREEK_LC_THETA, GREEK_UC_THETA), XP(GREEK_LC_OMEGA, GREEK_UC_OMEGA), XP(GREEK_LC_EPSILON, GREEK_UC_EPSILON), XP(GREEK_LC_RHO, GREEK_UC_RHO), XP(GREEK_LC_TAU, GREEK_UC_TAU),XP(GREEK_LC_PSI, GREEK_UC_PSI), XP(GREEK_LC_UPSILON, GREEK_UC_UPSILON),XP(GREEK_LC_IOTA, GREEK_UC_IOTA), XP(GREEK_LC_OMICRON, GREEK_UC_OMICRON),XP(GREEK_LC_PI, GREEK_UC_PI), X(MATHEMATICAL_LEFT_WHITE_SQUARE_BRACKET), X(MATHEMATICAL_RIGHT_WHITE_SQUARE_BRACKET),     FT,      FT,      FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  XP(GREEK_LC_ALPHA, GREEK_UC_ALPHA), XP(GREEK_LC_SIGMA, GREEK_UC_SIGMA), XP(GREEK_LC_DELTA, GREEK_UC_DELTA), XP(GREEK_LC_PHI, GREEK_UC_PHI), XP(GREEK_LC_GAMMA, GREEK_UC_GAMMA),XP(GREEK_LC_ETA, GREEK_UC_ETA), XP(GREEK_LC_YOT, GREEK_UC_YOT),XP(GREEK_LC_KAPPA, GREEK_UC_KAPPA), XP(GREEK_LC_LAMDA, GREEK_UC_LAMDA), X(TWO_DOT_LEADER), X(BULLET),      FT,      FT,      FT,                                     FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,  FT,  XP(GREEK_LC_ZETA, GREEK_UC_ZETA), XP(GREEK_LC_XI, GREEK_UC_XI), XP(GREEK_LC_CHI, GREEK_UC_CHI), XP(GREEK_LC_FINAL_SIGMA, GREEK_UC_SIGMA),XP(GREEK_LC_BETA, GREEK_UC_BETA), XP(GREEK_LC_NU, GREEK_UC_NU),XP(GREEK_LC_MU, GREEK_UC_MU), X(MUCH_LESS_THAN),X(MUCH_GREATER_THAN), X(INTEGRAL),      FT,      FT,      FT,      FT,                            FT,      FT,       FT,      FT,
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
		FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,         FT,             FT,         FT,         FT,         FT,

        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,       FT,       FT,                  FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       UC_M_WI,  FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       UC_MOD,   FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       UC_M_LN,  FT,       FT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,   FT,       FT,       FT,       FT,       FT,       FT,       UC_M_WC,  FT,       FT,       FT,       UC_M_MA,  FT,       FT,       FT,       FT,      FT,      FT,       FT,                            FT,      FT,       FT,      FT,
        FT,      FT,      FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,       FT,      FT,      FT,                                      FT,      FT,       FT,      FT
    )
};

void matrix_init_keymap(void) {}

void matrix_scan_keymap(void) {}

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      // [daughter board] row 1 POS key macros
	case H_DL0R0C00:
		send_string("H_DL0R0C00");
		return false;
	case H_DL0R0C01:
		send_string("H_DL0R0C01");
		return false;
	case H_DL0R0C02:
		send_string("H_DL0R0C02");
		return false;
	case H_DL0R0C03:
		send_string("H_DL0R0C03");
		return false;
	case H_DL0R0C04:
		send_string("H_DL0R0C04");
		return false;
	case H_DL0R0C05:
		send_string("H_DL0R0C05");
		return false;
	case H_DL0R0C06:
		send_string("H_DL0R0C06");
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
		send_string("H_DL0R1C00");
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
		send_string("H_DL0R1C05");
		return false;
	case H_DL0R1C06:
		send_string("H_DL0R1C06");
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
	case H_DL0R1C26:
		send_string("H_DL0R1C26");
		return false;
	case H_DL0R1C27:
		send_string("H_DL0R1C27");
		return false;
      // [daughter board] row 3
	case H_DL0R2C00:
		send_string("H_DL0R2C00");
		return false;
	case H_DL0R2C01:
		send_string("H_DL0R2C01");
		return false;
	case H_DL0R2C02:
		send_string("H_DL0R2C02");
		return false;
	case H_DL0R2C03:
		send_string("H_DL0R2C03");
		return false;
	case H_DL0R2C04:
		send_string("H_DL0R2C04");
		return false;
	case H_DL0R2C05:
		send_string("H_DL0R2C05");
		return false;
	case H_DL0R2C06:
		send_string("H_DL0R2C06");
		return false;
	case H_DL0R2C13:
		send_string("H_DL0R2C13");
		return false;
	case H_DL0R2C14:
		send_string("H_DL0R2C14");
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
	case H_LL0R3C00:
		send_string("H_LL0R3C00");
		return false;
	case H_LL0R3C01:
		send_string("H_LL0R3C01");
		return false;
	case H_LL0R3C02:
		send_string("H_LL0R3C02");
		return false;
	case H_LL0R3C03:
		send_string("H_LL0R3C03");
		return false;
	case H_LL0R4C00:
		send_string("H_LL0R4C00");
		return false;
	case H_LL0R4C01:
		send_string("H_LL0R4C01");
		return false;
	case H_LL0R4C02:
		send_string("H_LL0R4C02");
		return false;
	case H_LL0R4C03:
		send_string("H_LL0R4C03");
		return false;
	case H_LL0R5C00:
		send_string("H_LL0R5C00");
		return false;
	case H_LL0R5C01:
		send_string("H_LL0R5C01");
		return false;
	case H_LL0R5C02:
		send_string("H_LL0R5C02");
		return false;
	case H_LL0R5C03:
		send_string("H_LL0R5C03");
		return false;
	case H_LL0R6C00:
		send_string("H_LL0R6C00");
		return false;
	case H_LL0R6C01:
		send_string("H_LL0R6C01");
		return false;
	case H_LL0R6C02:
		send_string("H_LL0R6C02");
		return false;
	case H_LL0R6C03:
		send_string("H_LL0R6C03");
		return false;
	case H_LL0R7C00:
		send_string("H_LL0R7C00");
		return false;
	case H_LL0R7C01:
		send_string("H_LL0R7C01");
		return false;
	case H_LL0R7C02:
		send_string("H_LL0R7C02");
		return false;
	case H_LL0R7C03:
		send_string("H_LL0R7C03");
		return false;
	case H_ML0R3C05:
		send_string("H_ML0R3C05");
		return false;
	case H_ML0R3C21:
		send_string("H_ML0R3C21");
		return false;
	case H_ML0R5C21:
		send_string("H_ML0R5C21");
		//return false;
        //if (get_mods() & MODS_SHIFT_MASK) {
        //  CLEAN_MODS(
        //    send_string(SS_TAP(X_PGUP));
        //  );
        //} else {
        //  send_string(SS_TAP(X_PGDN));
        //}
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
