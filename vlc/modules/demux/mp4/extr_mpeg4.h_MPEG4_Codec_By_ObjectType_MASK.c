
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int uint8_t ;


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
 int FUNC_0 (char,char,char,char) ;

__attribute__((used)) static inline bool FUNC_1(uint8_t VAR_16,
                                              const uint8_t *VAR_17,
                                              size_t VAR_18,
                                              vlc_fourcc_t *VAR_19,
                                              int *VAR_20)
{

    switch(VAR_16)
    {
        case 0x20:
            *VAR_19 = VAR_10;
            break;
        case 0x21:
            *VAR_19 = VAR_7;
            break;
        case 0x40:
        case 0x41:
            *VAR_19 = VAR_9;
            if(VAR_18 >= 2 && VAR_17[0] == 0xF8 && (VAR_17[1]&0xE0)== 0x80)
                *VAR_19 = VAR_3;
            break;
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
            *VAR_19 = VAR_12;
            break;

        case 0x66:
        case 0x67:
        case 0x68:
            *VAR_19 = VAR_9;
            break;

        case 0x69:
            *VAR_19 = VAR_11;
            break;
        case 0x6a:
            *VAR_19 = VAR_12;
            break;
        case 0x6b:
            *VAR_19 = VAR_11;
            break;
        case 0x6c:
            *VAR_19 = VAR_8;
            break;
        case 0x6d:
            *VAR_19 = VAR_13;
            break;
        case 0x6e:
            *VAR_19 = FUNC_0('M','J','2','C');
            break;
        case 0xa3:
            *VAR_19 = VAR_14;
            break;
        case 0xa4:
            *VAR_19 = VAR_4;
            break;
        case 0xa5:
            *VAR_19 = VAR_2;
            break;
        case 0xa6:
            *VAR_19 = VAR_6;
            break;
        case 0xa9:
            *VAR_19 = VAR_5;
            break;
        case 0xaa:
        case 0xab:
            *VAR_20 = VAR_1;
            *VAR_19 = VAR_5;
            break;
        case 0xac:
            *VAR_20 = VAR_0;
            *VAR_19 = VAR_5;
            break;
        case 0xDD:
            *VAR_19 = VAR_15;
            break;
        default:
            return 0;
    }
    return 1;
}
