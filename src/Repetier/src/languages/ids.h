// For selectable translations we refer to each text by a id which gets
// defined here. The list starts at 0 and defines the position in the
// translation index.

#define UI_TEXT_ON_ID 0 //               "On"
#define UI_TEXT_OFF_ID 1 //              "Off"
#define UI_TEXT_NA_ID 2 //               "N/A" // Output for not available
#define UI_TEXT_YES_ID 3 //              "Yes"
#define UI_TEXT_NO_ID 4 //               "No"
#define UI_TEXT_PRINT_POS_ID 5 //        "Printing..."
#define UI_TEXT_PRINTING_ID 6 //         "Printing"
#define UI_TEXT_IDLE_ID 7 //             "Idle"
#define UI_TEXT_NOSDCARD_ID 8 //         "No SD Card"
#define UI_TEXT_ERROR_ID 9 //            "**** ERROR ****"
#define UI_TEXT_BACK_ID 10 //             "Back " cUP
#define UI_TEXT_QUICK_SETTINGS_ID 11 //   "Quick Settings"
#define UI_TEXT_ERRORMSG_ID 12 //         "%oe"
#define UI_TEXT_CONFIGURATION_ID 13 //    "Configuration"
#define UI_TEXT_POSITION_ID 14 //         "Position"
#define UI_TEXT_EXTRUDER_ID 15 //         "Extruder"
#define UI_TEXT_SD_CARD_ID 16 //          "SD Card"
#define UI_TEXT_DEBUGGING_ID 17 //        "Debugging"
#define UI_TEXT_HOME_DELTA_ID 18 //       "Home Delta"
#define UI_TEXT_HOME_ALL_ID 19 //         "Home All"
#define UI_TEXT_HOME_X_ID 20 //           "Home X"
#define UI_TEXT_HOME_Y_ID 21 //           "Home Y"
#define UI_TEXT_HOME_Z_ID 22 //           "Home Z"
#define UI_TEXT_PREHEAT_SINGLE_ID 23 //      "Preheat PLA"
#define UI_TEXT_PREHEAT_ALL_ID 24 //      "Preheat All"
#define UI_TEXT_LIGHTS_ONOFF_ID 25 //     "Lights :%lo"
#define UI_TEXT_COOLDOWN_ID 26 //         "Cooldown"
#define UI_TEXT_SET_TO_ORIGIN_ID 27 //    "Set to Origin"
#define UI_TEXT_DISABLE_STEPPER_ID 28 //  "Disable stepper"
#define UI_TEXT_X_POSITION_ID 29 //       "X Position"
#define UI_TEXT_X_POS_FAST_ID 30 //       "X Pos. Fast"
#define UI_TEXT_Y_POSITION_ID 31 //       "Y Position"
#define UI_TEXT_Y_POS_FAST_ID 32 //       "Y Pos. Fast"
#define UI_TEXT_Z_POSITION_ID 33 //       "Z Position"
#define UI_TEXT_Z_POS_FAST_ID 34 //       "Z Pos. Fast"
#define UI_TEXT_E_POSITION_ID 35 //       "Extr. position"
#define UI_TEXT_BED_TEMP_ID 36 //         "Bed Temp: %Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_ID 37 //       "Temp. 1 : %E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_ID 38 //       "Temp. 2 : %E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_ID 39 //       "Temp. 3 : %E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_ID 40 //        "Turn Extr. 1 Off"
#define UI_TEXT_EXTR1_OFF_ID 41 //        "Turn Extr. 2 Off"
#define UI_TEXT_EXTR2_OFF_ID 42 //        "Turn Extr. 3 Off"
#define UI_TEXT_EXTR0_SELECT_ID 43 //     "%X0 Select Extr. 1"
#define UI_TEXT_EXTR1_SELECT_ID 44 //     "%X1 Select Extr. 2"
#define UI_TEXT_EXTR2_SELECT_ID 45 //     "%X2 Select Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_ID 46 //      "Set Origin"
#define UI_TEXT_PRINT_X_ID 47 //          "Print X:%ax"
#define UI_TEXT_PRINT_Y_ID 48 //          "Print Y:%ay"
#define UI_TEXT_PRINT_Z_ID 49 //          "Print Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_ID 50 //    "Print:%az"
#define UI_TEXT_MOVE_X_ID 51 //           "Move X :%aX"
#define UI_TEXT_MOVE_Y_ID 52 //           "Move Y :%aY"
#define UI_TEXT_MOVE_Z_ID 53 //           "Move Z :%aZ"
#define UI_TEXT_MOVE_Z_DELTA_ID 54 //     "Move:%aZ"
#define UI_TEXT_JERK_ID 55 //             "Jerk   :%aj"
#define UI_TEXT_ZJERK_ID 56 //            "Z-Jerk :%aJ"
#define UI_TEXT_ACCELERATION_ID 57 //     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM_ID 58 //  "Store to EEPROM"
#define UI_TEXT_LOAD_EEPROM_ID 59 //      "Load f. EEPROM"
#define UI_TEXT_DBG_ECHO_ID 60 //         "Echo   :%do"
#define UI_TEXT_DBG_INFO_ID 61 //         "Info   :%di"
#define UI_TEXT_DBG_ERROR_ID 62 //        "Errors :%de"
#define UI_TEXT_DBG_DRYRUN_ID 63 //       "Dry run:%dd"
#define UI_TEXT_OPS_OFF_ID 64 //          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_ID 65 //      "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST_ID 66 //         "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT_ID 67 //      "Retract   :%Or"
#define UI_TEXT_OPS_BACKSLASH_ID 68 //    "Backsl.   :%Ob"
#define UI_TEXT_OPS_MINDIST_ID 69 //      "Min.dist  :%Od"
#define UI_TEXT_OPS_MOVE_AFTER_ID 70 //   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE_ID 71 //        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_ID 72 //       "Print file"
#define UI_TEXT_PAUSE_PRINT_ID 73 //      "Pause Print"
#define UI_TEXT_CONTINUE_PRINT_ID 74 //   "Continue Print"
#define UI_TEXT_UNMOUNT_CARD_ID 75 //     "Unmount Card"
#define UI_TEXT_MOUNT_CARD_ID 76 //       "Mount Card"
#define UI_TEXT_DELETE_FILE_ID 77 //      "Delete file"
#define UI_TEXT_FEEDRATE_ID 78 //         "Feedrate"
#define UI_TEXT_FEED_MAX_X_ID 79 //       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_ID 80 //       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_ID 81 //       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_ID 82 // "Max:%fz"
#define UI_TEXT_FEED_HOME_X_ID 83 //      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_ID 84 //      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_ID 85 //      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_ID 86 // "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_ID 87 // "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_ID 88 // "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_ID 89 // "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_ID 90 // ""
#define UI_TEXT_ACTION_YPOSITION4A_ID 91 // "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_ID 92 // "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_ID 93 // "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_ID 94 // ""
#define UI_TEXT_ACTION_ZPOSITION4A_ID 95 // "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_ID 96 // "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_ID 97 // "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_ID 98 // ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_ID 99 // "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_ID 100 // "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_ID 101 // "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_ID 102 // ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_ID 103 // "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_ID 104 // "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_ID 105 // "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_ID 106 // ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_ID 107 // "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_ID 108 // "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_ID 109 // "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_ID 110 // ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_ID 111 // "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_ID 112 // "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_ID 113 // "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_ID 114 // "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_ID 115 // "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_ID 116 // "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_ID 117 // "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_ID 118 // "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_ID 119 // "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_ID 120 // "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_ID 121 // "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_ID 122 // "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_ID 123 // "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_ID 124 // "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_ID 125 //          "Fan speed"
#define UI_TEXT_ACTION_FANSPEED_ID 126 //   "Fan speed:%Fs%%%"
#define UI_TEXT_FAN_OFF_ID 127 //           "Turn Fan Off"
#define UI_TEXT_FAN_25_ID 128 //            "Set Fan 25%%%"
#define UI_TEXT_FAN_50_ID 129 //            "Set Fan 50%%%"
#define UI_TEXT_FAN_75_ID 130 //            "Set Fan 75%%%"
#define UI_TEXT_FAN_FULL_ID 131 //          "Set Fan Full"
#define UI_TEXT_STEPPER_INACTIVE_ID 132 //  "Stepper Inactive"
#define UI_TEXT_STEPPER_INACTIVE2A_ID 133 // "Dis. After: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_ID 134 // "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_ID 135 //    "Max. Inactive"
#define UI_TEXT_POWER_INACTIVE2A_ID 136 //   "Dis. After: %ip"
#define UI_TEXT_POWER_INACTIVE2B_ID 137 //   "[min] 0=Off"
#define UI_TEXT_GENERAL_ID 138 //           "General"
#define UI_TEXT_BAUDRATE_ID 139 //          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_ID 140 //        "Steps/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_ID 141 //   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_ID 142 //     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_ID 143 //        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_ID 144 //        "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_ID 145 //    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_ID 146 //    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_ID 147 //      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_ID 148 //        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_ID 149 //     "Deadtime:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_ID 150 //      "Control PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_ID 151 //        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_ID 152 //        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_ID 153 //         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_ID 154 //         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_ID 155 //         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_ID 156 //         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_ID 157 //         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_ID 158 // "BangBang"
#define UI_TEXT_STRING_HM_PID_ID 159 //     "PID"
#define UI_TEXT_STRING_ACTION_ID 160 //     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER_ID 161//  "Heating Extruder"
#define UI_TEXT_HEATING_BED_ID 162 //       "Heating Bed"
#define UI_TEXT_KILLED_ID 163 //            "Killed"
#define UI_TEXT_STEPPER_DISABLED_ID 164 //  "Stepper Disabled"
#define UI_TEXT_EEPROM_STOREDA_ID 165 //     "Configuration"
#define UI_TEXT_EEPROM_STOREDB_ID 166 //     "stored in EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_ID 167 //     "Configuration"
#define UI_TEXT_EEPROM_LOADEDB_ID 168 //     "loaded f. EEPROM"
#define UI_TEXT_UPLOADING_ID 169 //         "Uploading..."
#define UI_TEXT_PAGE_BUFFER_ID 170 //       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_ID 171 //     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_ID 172 //     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_ID 173 //     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_ID 174 //     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_ID 175 //          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_ID 176 //    "Speed Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_ID 177 //     "Flow Mul. :%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_ID 178 //  "Show meas."
#define UI_TEXT_RESET_MEASUREMENT_ID 179 // "Reset meas."
#define UI_TEXT_SET_MEASURED_ORIGIN_ID 180 // "Set Z=0"
#define UI_TEXT_ZCALIB_ID 181 //             "Z Calib."
#define UI_TEXT_SET_P1_ID 182 //            "Set P1"
#define UI_TEXT_SET_P2_ID 183 //            "Set P2"
#define UI_TEXT_SET_P3_ID 184 //            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_ID 185 // "Calculate Leveling"
#define UI_TEXT_LEVEL_ID 186 //             "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_ID 187 // "Wait Temp. %XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_ID 188 // "Wait Units: %XU mm"
#define UI_TEXT_SD_REMOVED_ID 189 //       "SD Card removed"
#define UI_TEXT_SD_INSERTED_ID 190 //      "SD Card inserted"
#define UI_TEXT_PRINTER_READY_ID 191 //    "Printer ready."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_ID 192 //   " days "
#define UI_TEXT_PRINTTIME_HOURS_ID 193 //  ":"
#define UI_TEXT_PRINTTIME_MINUTES_ID 194 // ""
#define UI_TEXT_PRINT_TIME_ID 195 //     "Printing time"
#define UI_TEXT_PRINT_FILAMENT_ID 196 // "Filament printed"
#define UI_TEXT_PRINTED_ID 197 //           "printed"
#define UI_TEXT_POWER_ID 198 //            "ATX power on/off"
#define UI_TEXT_STRING_HM_DEADTIME_ID 199 //     "Dead Time"
#define UI_TEXT_STRING_HM_SLOWBANG_ID 200 //     "SlowBang"
#define UI_TEXT_STOP_PRINT_ID 201 // "Stop Print"
#define UI_TEXT_Z_BABYSTEPPING_ID 202 // "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_ID 203 // "Change filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_ID 204 // "Change filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_ID 205 // "Rotate to move"
#define UI_TEXT_WIZ_CH_FILAMENT3_ID 206 // "filament up/down"
#define UI_TEXT_CLICK_DONE_ID 207 // "Click when done"
#define UI_TEXT_AUTOLEVEL_ONOFF_ID 208 //  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_ID 209 // "Servo pos.: %oS"
#define UI_TEXT_IGNORE_M106_ID 210 //      "Ignore M106 cmd %Fi"
#define UI_TEXT_WIZ_REHEAT1_ID 211 // "Click to reheat"
#define UI_TEXT_WIZ_REHEAT2_ID 212 // "extruders."
#define UI_TEXT_WIZ_WAITTEMP1_ID 213 // "Wait for target"
#define UI_TEXT_WIZ_WAITTEMP2_ID 214 // "temperatures ..."
#define UI_TEXT_EXTRUDER_JAM_ID 215 // "Extruder Jam"
#define UI_TEXT_STANDBY_ID 216 // "Standby"
#define UI_TEXT_BED_COATING_ID 217 // "Bed Coating"
#define UI_TEXT_BED_COATING_SET1_ID 218 // "Bed coating set to",""
#define UI_TEXT_BED_COATING_SET2_ID 219 // "Bed coating set to",""
#define UI_TEXT_NOCOATING_ID 220 // "No Coating"
#define UI_TEXT_BUILDTAK_ID 221 // "BuildTak"
#define UI_TEXT_KAPTON_ID 222 // "Kapton"
#define UI_TEXT_BLUETAPE_ID 223 // "Blue Paper Tape"
#define UI_TEXT_PETTAPE_ID 224 // "Green PET Tape"
#define UI_TEXT_GLUESTICK_ID 225 // "Glue Stick"
#define UI_TEXT_CUSTOM_ID 226 // "Custom"
#define UI_TEXT_COATING_CUSTOM_ID 227 // "Custom : %oCmm"
#define UI_TEXT_LANGUAGE_ID 228 // "Language"
#define UI_TEXT_MAINPAGE6_1_ID 229 //"\xa %e0/%E0\xb0 X:%x0"
#define UI_TEXT_MAINPAGE6_2_ID 230 //"\xa %e1/%E1\xb0 Y:%x1"
#define UI_TEXT_MAINPAGE6_3_ID 231 //"\xe %eb/%Eb\xb0 Z:%x2",
#define UI_TEXT_MAINPAGE6_4_ID 232 //"Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_ID 233 //"Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_ID 234 //"%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_ID 235 //cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_ID 236 //"B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_ID 237 //"Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_ID 238 //"Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_ID 239 //"X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_ID 240 //"%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_ID 241 //"%Uf m"
#define UI_TEXT_METER_PRINTED_ID 242 //"%Uf m " UI_TEXT_PRINTED
#define UI_TEXT_STATUS_ID 243 //"%os"
#define UI_TEXT_EMPTY_ID 244 //""
#define UI_TEXT_TEMP_SET_ID 245 //cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_ID 246 //cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_ID 247 //" %oCmm"
#define UI_TEXT_EXTR3_TEMP_ID 248 //       "Temp. 4 : %E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_ID 249 //       "Temp. 5 : %E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_ID 250 //       "Temp. 6 : %E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_ID 251
#define UI_TEXT_EXTR4_OFF_ID 252
#define UI_TEXT_EXTR5_OFF_ID 253
#define UI_TEXT_EXTR3_SELECT_ID 254
#define UI_TEXT_EXTR4_SELECT_ID 255
#define UI_TEXT_EXTR5_SELECT_ID 256
#define UI_TEXT_DITTO_0_ID 257
#define UI_TEXT_DITTO_1_ID 258
#define UI_TEXT_DITTO_2_ID 259
#define UI_TEXT_DITTO_3_ID 260
#define UI_TEXT_ZPROBE_HEIGHT_ID 261
#define UI_TEXT_OFFSETS_ID 262
#define UI_TEXT_X_OFFSET_ID 263
#define UI_TEXT_Y_OFFSET_ID 264
#define UI_TEXT_Z_OFFSET_ID 265
#define UI_TEXT_DBG_ENDSTOP_ID 266 //     "EndStop:%dp"
#define UI_TEXT_LAYER_ID 267
#define UI_TEXT_PROGRESS_ID 268
#define UI_TEXT_PRINTNAME_ID 269

#define UI_TEXT_SETUP_ID 270 //"Setup"
#define UI_TEXT_MEASURE_DISTORTION_ID 271 // "Measure distortion"
#define UI_TEXT_DISTORTION_CORR_ID 272 // "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_ID 273 //   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_ID 274 // "Cancel"
#define UI_TEXT_PLEASE_WAIT_ID 275 // "*** Please wait ***"
#define UI_TEXT_CLEARBED1_ID 276 // "Make sure the heated"
#define UI_TEXT_CLEARBED2_ID 277 // "bed is clear of any"
#define UI_TEXT_CLEARBED3_ID 278 // "obstructions"
#define UI_TEXT_NOTIFICATION_ID 279 // "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_ID 280 // "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_ID 281 // "Heater decoupled"
#define UI_TEXT_SLIPPING_ID 282 // "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_ID 283 // "Leveling error"
#define UI_TEXT_OK_ID 284 // "Ok"
#define UI_TEXT_CALIBRATING_ID 285 // "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_ID 286 // "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_ID 287 // "Autolevel bed"
#define UI_TEXT_HOMING_ID 288 // "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_ID 289 // "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_ID 290 // "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_ID 291 // "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_ID 292 // "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_ID 293 // "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_ID 294 // "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_ID 295 // "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_ID 296 // "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_ID 297 // "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_ID 298 // "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_ID 299 // "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_ID 300 // "Continue"
#define UI_TEXT_CLOSE_ID 301 // "Close"
#define UI_TEXT_EXTR_ZOFF_ID 302 //         "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_ID 303 // "Measuring ..."
#define UI_TEXT_Z_PROBE_ID 304
#define UI_TEXT_MAINPAGE6_1_C_ID 305 //"\xa %e0/%E0\xb0 X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_ID 306 //"\xa %e1/%E1\xb0 Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_ID 307 //"\xe %eb/%Eb\xb0 Z:%x2"
#define UI_TEXT_MAINPAGE6_4_C_ID 308 //""Mul: %om%%% Laser %op W"
#define UI_TEXT_MAINPAGE6_4_L_ID 309 //""Mul: %om%%% Spindle %opRPM"
#define UI_TEXT_JAMCONTROL_ID 310 // "%ej Jam Control
