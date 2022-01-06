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
    k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, \
    k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k214, k215, k216, k217, k218, k219, k220, k221,    \
    k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313, k314, k315, k316, k317, k318, k319, k320, k321,    \
    k401, k402, k403, k404, k405, k406, k407, k408, k409, k410, k411, k412, k413, k414, k415, k416, k417, k418,    \
    k501, k502, k503, k504, k505, k506, k507, k508, k509, k510, k511, k512, k513, k514, k515, k516, k517, k518, k519,   \
    k601, k602, k603, k604, k605, k606, k607, k608, k609
) { \
    { k101, KC_NO, k103, KC_NO, k105, KC_NO, k107, KC_NO, k109, KC_NO }, \
    { k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211 },  \
    { k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311 },  \
    { KC_NO, k402, k403, k404, k405, k406, k407, k408, k409, k410, k411 }, \
      \
    {
    { k111, KC_NO, k102, KC_NO, k104, KC_NO, k106, KC_NO, k108, KC_NO, k110 }, \
    { k212, k213, k214, k215, k216, k217, k218, k219, k220, k221 }, \
    { k312, k313, k314, k315, k316, k317, k318, k319, k320, k321 }, \
    { k412, k413, k414, k415, k416, k417, k418 },
    { k10, KC_NO, k12 }
}
