
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_21) {
        switch (VAR_21) {
        case 0x03:
        case 0x04:
        case 0x05:
                FUNC_0("profile 0x%02x ", VAR_21);
                VAR_0 = 1;
                VAR_20 = 1;
                break;
        case 0x08:
                FUNC_0("profile 0x%02x media_cd_rom", VAR_21);
                VAR_0 = 1;
                VAR_5 = 1;
                break;
        case 0x09:
                FUNC_0("profile 0x%02x media_cd_r", VAR_21);
                VAR_0 = 1;
                VAR_4 = 1;
                break;
        case 0x0a:
                FUNC_0("profile 0x%02x media_cd_rw", VAR_21);
                VAR_0 = 1;
                VAR_6 = 1;
                break;
        case 0x10:
                FUNC_0("profile 0x%02x media_dvd_ro", VAR_21);
                VAR_0 = 1;
                VAR_13 = 1;
                break;
        case 0x11:
                FUNC_0("profile 0x%02x media_dvd_r", VAR_21);
                VAR_0 = 1;
                VAR_11 = 1;
                break;
        case 0x12:
                FUNC_0("profile 0x%02x media_dvd_ram", VAR_21);
                VAR_0 = 1;
                VAR_12 = 1;
                break;
        case 0x13:
                FUNC_0("profile 0x%02x media_dvd_rw_ro", VAR_21);
                VAR_0 = 1;
                VAR_14 = 1;
                VAR_15 = 1;
                break;
        case 0x14:
                FUNC_0("profile 0x%02x media_dvd_rw_seq", VAR_21);
                VAR_0 = 1;
                VAR_14 = 1;
                VAR_16 = 1;
                break;
        case 0x1B:
                FUNC_0("profile 0x%02x media_dvd_plus_r", VAR_21);
                VAR_0 = 1;
                VAR_7 = 1;
                break;
        case 0x1A:
                FUNC_0("profile 0x%02x media_dvd_plus_rw", VAR_21);
                VAR_0 = 1;
                VAR_9 = 1;
                break;
        case 0x2A:
                FUNC_0("profile 0x%02x media_dvd_plus_rw_dl", VAR_21);
                VAR_0 = 1;
                VAR_10 = 1;
                break;
        case 0x2B:
                FUNC_0("profile 0x%02x media_dvd_plus_r_dl", VAR_21);
                VAR_0 = 1;
                VAR_8 = 1;
                break;
        case 0x40:
                FUNC_0("profile 0x%02x media_bd", VAR_21);
                VAR_0 = 1;
                VAR_1 = 1;
                break;
        case 0x41:
        case 0x42:
                FUNC_0("profile 0x%02x media_bd_r", VAR_21);
                VAR_0 = 1;
                VAR_2 = 1;
                break;
        case 0x43:
                FUNC_0("profile 0x%02x media_bd_re", VAR_21);
                VAR_0 = 1;
                VAR_3 = 1;
                break;
        case 0x50:
                FUNC_0("profile 0x%02x media_hddvd", VAR_21);
                VAR_0 = 1;
                VAR_17 = 1;
                break;
        case 0x51:
                FUNC_0("profile 0x%02x media_hddvd_r", VAR_21);
                VAR_0 = 1;
                VAR_18 = 1;
                break;
        case 0x52:
                FUNC_0("profile 0x%02x media_hddvd_rw", VAR_21);
                VAR_0 = 1;
                VAR_19 = 1;
                break;
        default:
                FUNC_0("profile 0x%02x <ignored>", VAR_21);
                break;
        }
}
