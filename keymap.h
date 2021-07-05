#pragma once

#include QMK_KEYBOARD_H

// Initialize variable holding the binary
// representation of active modifiers.
uint8_t mod_state;
uint8_t oneshot_mod_state;

enum custom_keycodes {
    CAPSWORD = SAFE_RANGE,
    SNAKECASE,
};