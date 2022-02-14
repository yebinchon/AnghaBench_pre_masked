
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0( unsigned *VAR_2,
                       unsigned *VAR_3, unsigned *VAR_4,
                       unsigned *VAR_5,
                       const uint8_t *VAR_6 )
{
    if ( VAR_6[0] != 0xa0 || VAR_6[1] != 0x06 )
        return -1;

    switch( ( VAR_6[3] & 0x38 ) >> 3 )
    {
    case 0x01:
        *VAR_2 = 44100;
        break;
    case 0x02:
        *VAR_2 = 48000;
        break;
    default:
        return -1;
    }

    if( VAR_6[3] >> 6 != 0 )
        return -1;
    else
        *VAR_5 = 16;

    *VAR_3 = (VAR_6[3] & 0x7) + 1;

    *VAR_4 = VAR_0 | VAR_1;

    return 0;
}
