#ifndef IS_VENDER_ROM_CONFIG_AAV_V04S_H
#define IS_VENDER_ROM_CONFIG_AAV_V04S_H
#include "is-otprom-rear2-gc02m1_v001.h"
#include "is-eeprom-macro-gc02m1_v001.h"
#include "is-eeprom-rear-jn1_v001.h"
#include "is-otprom-front-gc5035_v001.h"
const struct is_vender_rom_addr *vender_rom_addr[SENSOR_POSITION_MAX] = {
    &rear_jn1_cal_addr,                     //[0] SENSOR_POSITION_REAR
    &front_gc5035_otp_cal_addr,             //[1] SENSOR_POSITION_FRONT
    &rear2_gc02m1_otp_cal_addr,             //[2] SENSOR_POSITION_REAR2
    NULL,                                   //[3] SENSOR_POSITION_FRONT2
    NULL,                                   //[4] SENSOR_POSITION_REAR3
    NULL,                                   //[5] SENSOR_POSITION_FRONT3
    &macro_gc02m1_cal_addr,                 //[6] SENSOR_POSITION_REAR4
    NULL,                                   //[7] SENSOR_POSITION_FRONT4
    NULL,                                   //[8] SP_REAR_TOF
    NULL,                                   //[9] SP_FRONT_TOF
};
#endif /*IS_VENDER_ROM_CONFIG_AAV_V04S_H*/