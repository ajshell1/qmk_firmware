/* Copyright 2022 ajshell1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
//12 rows, 11 colums
#define LAYOUT( \
    k0101, k0102, k0103, k0104, k0105, k0106, k0107, k0108, k0109, k0110, k0111, k0112, \
    k0201, k0202, k0203, k0204, k0205, k0206, k0207, k0208, k0209, k0210, k0211, k0212, k0213, k0214, k0215, k0216, k0217, k0218, k0219, k0220, k0221,    \
    k0301, k0302, k0303, k0304, k0305, k0306, k0307, k0308, k0309, k0310, k0311, k0312, k0313, k0314, k0315, k0316, k0317, k0318, k0319, k0320, k0321,    \
    k0401, k0402, k0403, k0404, k0405, k0406, k0407, k0408, k0409, k0410, k0411, k0412, k0413, k0414, k0415, k0416, k0417, k0418,    \
    k0501, k0502, k0503, k0504, k0505, k0506, k0507, k0508, k0509, k0510, k0511, k0512, k0513, k0514, k0515, k0516, k0517, k0518, k0519,   \
    k0601, k0602, k0603, k0604, k0605, k0606, k0607, k0608, k0609
) { \
    { k0101, KC_NO, k0103, KC_NO, k0105, KC_NO, k0107, KC_NO, k0109, KC_NO }, \
    { k0201, k0202, k0203, k0204, k0205, k0206, k0207, k0208, k0209, k0210, k0211 },  \
    { k0301, k0302, k0303, k0304, k0305, k0306, k0307, k0308, k0309, k0310, k0311 },  \
    { KC_NO, k0402, k0403, k0404, k0405, k0406, k0407, k0408, k0409, k0410, k0411 }, \
      \
    {
    { k0111, KC_NO, k0102, KC_NO, k0104, KC_NO, k0106, KC_NO, k0108, KC_NO, k0110 }, \
    { k0212, k0213, k0214, k0215, k0216, k0217, k0218, k0219, k0220, k0221 }, \
    { k0312, k0313, k0314, k0315, k0316, k0317, k0318, k0319, k0320, k0321 }, \
    { k0412, k0413, k0414, k0415, k0416, k0417, k0418 },
    { k010, KC_NO, k012 }
}
