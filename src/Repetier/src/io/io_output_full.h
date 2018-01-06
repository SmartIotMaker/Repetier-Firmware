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

IO_OUTPUT_FULL(name, pin)
IO_OUTPUT_INVERTED_FULL(name, pin)

*/

#ifndef IO_TARGET
#error You need to set IO_TARGET before calling this file!
#endif

#undef IO_OUTPUT_FULL
#undef IO_OUTPUT_INVERTED_FULL
#undef IO_OUTPUT_SOFTWARE_PWM
#undef IO_OUTPUT_HARDWARE_PWM

#if IO_TARGET == 1 // Init pins

#define IO_OUTPUT_FULL(name, pin) \
    SET_OUTPUT(pin); \
    WRITE(pin, 0);

#define IO_OUTPUT_INVERTED_FULL(name, pin) \
    SET_OUTPUT(pin); \
    WRITE(pin, 1);

#elif IO_TARGET == 2 // PWM interrupt

#define IO_OUTPUT_FULL(name, pin)
#define IO_OUTPUT_INVERTED_FULL(name, pin)

#elif IO_TARGET == 4 // define class

//#define IO_OUTPUT_FULL(name, pin) class name {inline static void set(fast8_t val){}};
#define IO_OUTPUT_FULL(name, pin) \
    class name { \
    public: \
        inline static void set(fast8_t val) \
        { \
            if (val) { \
                WRITE(pin, 1); \
            } else { \
                WRITE(pin, 0); \
            } \
        } \
        inline static void on() { WRITE(pin, 1); } \
        inline static void off() { WRITE(pin, 0); } \
        inline static void pwm(uint8_t frequency) { name::set(frequency >= 128); } \
    };

#define IO_OUTPUT_INVERTED_FULL(name, pin) \
    class name { \
    public: \
        inline static void set(fast8_t val) \
        { \
            if (val) { \
                WRITE(pin, 0); \
            } else { \
                WRITE(pin, 1); \
            } \
        } \
        inline static void on() { WRITE(pin, 0); } \
        inline static void off() { WRITE(pin, 1); } \
        inline static void pwm(uint8_t frequency) { name::set(frequency >= 128); } \
    };

#else

// Fallback to remove unused macros preventing errors!

#define IO_OUTPUT_FULL(name, pin)
#define IO_OUTPUT_INVERTED_FULL(name, pin)

#endif