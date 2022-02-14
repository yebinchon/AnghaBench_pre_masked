
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
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_17, size_t VAR_18) {
        unsigned VAR_19;

        for (VAR_19 = 0; VAR_19+4 <= VAR_18; VAR_19 += 4) {
                int VAR_20;

                VAR_20 = VAR_17[VAR_19] << 8 | VAR_17[VAR_19+1];
                switch (VAR_20) {
                case 0x03:
                case 0x04:
                case 0x05:
                        FUNC_0("profile 0x%02x mo", VAR_20);
                        VAR_16 = 1;
                        break;
                case 0x08:
                        FUNC_0("profile 0x%02x cd_rom", VAR_20);
                        VAR_4 = 1;
                        break;
                case 0x09:
                        FUNC_0("profile 0x%02x cd_r", VAR_20);
                        VAR_3 = 1;
                        break;
                case 0x0A:
                        FUNC_0("profile 0x%02x cd_rw", VAR_20);
                        VAR_5 = 1;
                        break;
                case 0x10:
                        FUNC_0("profile 0x%02x dvd_rom", VAR_20);
                        VAR_11 = 1;
                        break;
                case 0x12:
                        FUNC_0("profile 0x%02x dvd_ram", VAR_20);
                        VAR_10 = 1;
                        break;
                case 0x13:
                case 0x14:
                        FUNC_0("profile 0x%02x dvd_rw", VAR_20);
                        VAR_12 = 1;
                        break;
                case 0x1B:
                        FUNC_0("profile 0x%02x dvd_plus_r", VAR_20);
                        VAR_6 = 1;
                        break;
                case 0x1A:
                        FUNC_0("profile 0x%02x dvd_plus_rw", VAR_20);
                        VAR_8 = 1;
                        break;
                case 0x2A:
                        FUNC_0("profile 0x%02x dvd_plus_rw_dl", VAR_20);
                        VAR_9 = 1;
                        break;
                case 0x2B:
                        FUNC_0("profile 0x%02x dvd_plus_r_dl", VAR_20);
                        VAR_7 = 1;
                        break;
                case 0x40:
                        VAR_0 = 1;
                        FUNC_0("profile 0x%02x bd", VAR_20);
                        break;
                case 0x41:
                case 0x42:
                        VAR_1 = 1;
                        FUNC_0("profile 0x%02x bd_r", VAR_20);
                        break;
                case 0x43:
                        VAR_2 = 1;
                        FUNC_0("profile 0x%02x bd_re", VAR_20);
                        break;
                case 0x50:
                        VAR_13 = 1;
                        FUNC_0("profile 0x%02x hddvd", VAR_20);
                        break;
                case 0x51:
                        VAR_14 = 1;
                        FUNC_0("profile 0x%02x hddvd_r", VAR_20);
                        break;
                case 0x52:
                        VAR_15 = 1;
                        FUNC_0("profile 0x%02x hddvd_rw", VAR_20);
                        break;
                default:
                        FUNC_0("profile 0x%02x <ignored>", VAR_20);
                        break;
                }
        }
        return 0;
}
