/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

/*

Definies the following macros:

IO_INPUT(name, pin)
IO_INPUT_INVERTED(name, pin)
IO_INPUT_PULLUP(name, pin)
IO_INPUT_INVERTED_PULLUP(name, pin)

*/

#ifndef IO_TARGET
#error You need to set IO_TARGET before calling this file!
#endif

#undef IO_INPUT
#undef IO_INPUT_INVERTED
#undef IO_INPUT_PULLUP
#undef IO_INPUT_INVERTED_PULLUP
#undef IO_INPUT_ANAOG
#undef IO_INPUT_ANALOG_INVERTED

#if IO_TARGET == 1 // Init pins

#define IO_INPUT(name, pin) \
    SET_INPUT(pin);

#define IO_INPUT_INVERTED(name, pin) \
    SET_INPUT(pin);

#define IO_INPUT_PULLUP(name, pin) \
    SET_INPUT(pin); \
    PULLUP(pin, HIGH);

#define IO_INPUT_INVERTED_PULLUP(name, pin) \
    SET_INPUT(pin); \
    PULLUP(pin, HIGH);

#elif IO_TARGET == 2 // PWM interrupt

#define IO_INPUT(name, pin)
#define IO_INPUT_INVERTED(name, pin)
#define IO_INPUT_PULLUP(name, pin)
#define IO_INPUT_INVERTED_PULLUP(name, pin)

#elif IO_TARGET == 4 // define class

#define IO_INPUT(name, pin) \
    class name { \
    public: \
        inline static fast8_t get() \
        { \
            return READ(pin); \
        } \
    };

#define IO_INPUT_INVERTED(name, pin) \
    class name { \
    public: \
        inline static fast8_t get() \
        { \
            return !READ(pin); \
        } \
    };

#define IO_INPUT_PULLUP(name, pin) \
    class name { \
    public: \
        inline static fast8_t get() \
        { \
            return READ(pin); \
        } \
    };

#define IO_INPUT_INVERTED_PULLUP(name, pin) \
    class name { \
    public: \
        inline static fast8_t get() \
        { \
            return READ(pin); \
        } \
    };

#else

#define IO_INPUT(name, pin)
#define IO_INPUT_INVERTED(name, pin)
#define IO_INPUT_PULLUP(name, pin)
#define IO_INPUT_INVERTED_PULLUP(name, pin)

#endif