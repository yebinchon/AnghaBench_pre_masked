
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static int FUNC_0( unsigned *VAR_8,
                      unsigned *VAR_9, unsigned *VAR_10,
                      unsigned *VAR_11,
                      const uint8_t *VAR_12 )
{
    const uint8_t VAR_13 = VAR_12[4];

    switch( (VAR_13 >> 4) & 0x3 )
    {
    case 0:
        *VAR_8 = 48000;
        break;
    case 1:
        *VAR_8 = 96000;
        break;
    case 2:
        *VAR_8 = 44100;
        break;
    case 3:
        *VAR_8 = 32000;
        break;
    }

    *VAR_9 = (VAR_13 & 0x7) + 1;
    switch( *VAR_9 - 1 )
    {
    case 0:
        *VAR_10 = VAR_0;
        break;
    case 1:
        *VAR_10 = VAR_1 | VAR_7;
        break;
    case 2:

        *VAR_10 = VAR_1 | VAR_7 | VAR_2;
        break;
    case 3:
        *VAR_10 = VAR_1 | VAR_7
                               | VAR_5 | VAR_6;
        break;
    case 4:

        *VAR_10 = VAR_1 | VAR_7
                               | VAR_5 | VAR_6
                               | VAR_2;
        break;
    case 5:
        *VAR_10 = VAR_1 | VAR_7
                               | VAR_5 | VAR_6
                               | VAR_0 | VAR_2;
        break;
    case 6:
        *VAR_10 = VAR_1 | VAR_7
                               | VAR_5 | VAR_6
                               | VAR_0 | VAR_3
                               | VAR_4;
        break;
    case 7:
        *VAR_10 = VAR_1 | VAR_7
                               | VAR_5 | VAR_6
                               | VAR_0 | VAR_3
                               | VAR_4 | VAR_2;
        break;
    }

    switch( (VAR_13 >> 6) & 0x3 )
    {
    case 2:
        *VAR_11 = 24;
        break;
    case 1:
        *VAR_11 = 20;
        break;
    case 0:
    default:
        *VAR_11 = 16;
        break;
    }


    if( VAR_12[5] != 0x80 )
        return -1;
    return 0;
}
