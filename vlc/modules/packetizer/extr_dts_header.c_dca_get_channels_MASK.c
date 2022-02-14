
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


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

__attribute__((used)) static uint16_t FUNC_0( uint8_t VAR_13, bool VAR_14,
                                  uint16_t *VAR_15 )
{
    uint16_t VAR_16;

    switch( VAR_13 )
    {
        case 0x0:
            VAR_16 = VAR_10;
            break;
        case 0x1:
            VAR_16 = VAR_8;
            *VAR_15 = VAR_0;
            break;
        case 0x2:
        case 0x3:
        case 0x4:
            VAR_16 = VAR_8;
            break;
        case 0x5:
            VAR_16 = VAR_1;
            break;
        case 0x6:
            VAR_16 = VAR_8 | VAR_12;
            break;
        case 0x7:
            VAR_16 = VAR_3;
            break;
        case 0x8:
            VAR_16 = VAR_2;
            break;
        case 0x9:
            VAR_16 = VAR_4;
            break;
        case 0xA:
        case 0xB:
            VAR_16 = VAR_5;
            break;
        case 0xC:
            VAR_16 = VAR_7 | VAR_8
                                | VAR_9;
            break;
        case 0xD:
            VAR_16 = VAR_6;
            break;
        case 0xE:
        case 0xF:

            VAR_16 = VAR_6;
            break;
        default:
            return 0;
    }
    if (VAR_14)
        VAR_16 |= VAR_11;

    return VAR_16;
}
