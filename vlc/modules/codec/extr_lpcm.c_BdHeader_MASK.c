
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int pi_chan_table; int i_chans_to_reorder; } ;
typedef TYPE_1__ decoder_sys_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int *,unsigned int,int ) ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;

__attribute__((used)) static int FUNC_2( decoder_sys_t *VAR_15,
                     unsigned *VAR_16,
                     unsigned *VAR_17,
                     unsigned *VAR_18,
                     unsigned *VAR_19,
                     unsigned *VAR_20,
                     const uint8_t *VAR_21 )
{
    const uint32_t VAR_22 = FUNC_0( VAR_21 );
    const uint32_t *VAR_23 = ((void*)0);
    switch( ( VAR_22 & 0xf000) >> 12 )
    {
    case 1:
        *VAR_17 = 1;
        *VAR_19 = VAR_0;
        break;
    case 3:
        *VAR_17 = 2;
        *VAR_19 = VAR_1 | VAR_8;
        break;
    case 4:
        *VAR_17 = 3;
        *VAR_19 = VAR_1 | VAR_8 | VAR_0;
        VAR_23 = VAR_9;
        break;
    case 5:
        *VAR_17 = 3;
        *VAR_19 = VAR_1 | VAR_8 | VAR_5;
        break;
    case 6:
        *VAR_17 = 4;
        *VAR_19 = VAR_1 | VAR_8 | VAR_0 |
                                VAR_5;
        break;
    case 7:
        *VAR_17 = 4;
        *VAR_19 = VAR_1 | VAR_8 |
                                VAR_6 | VAR_7;
        VAR_23 = VAR_10;
        break;
    case 8:
        *VAR_17 = 5;
        *VAR_19 = VAR_1 | VAR_8 | VAR_0 |
                                VAR_6 | VAR_7;
        VAR_23 = VAR_11;
        break;
    case 9:
        *VAR_17 = 6;
        *VAR_19 = VAR_1 | VAR_8 | VAR_0 |
                                VAR_6 | VAR_7 |
                                VAR_2;
        VAR_23 = VAR_12;
        break;
    case 10:
        *VAR_17 = 7;
        *VAR_19 = VAR_1 | VAR_8 | VAR_0 |
                                VAR_6 | VAR_7 |
                                VAR_3 | VAR_4;
        VAR_23 = VAR_13;
        break;
    case 11:
        *VAR_17 = 8;
        *VAR_19 = VAR_1 | VAR_8 | VAR_0 |
                                VAR_6 | VAR_7 |
                                VAR_3 | VAR_4 |
                                VAR_2;
        VAR_23 = VAR_14;
        break;

    default:
        return -1;
    }
    *VAR_18 = *VAR_17 & 1;

    switch( (VAR_22 >> 6) & 0x03 )
    {
    case 1:
        *VAR_20 = 16;
        break;
    case 2:
    case 3:
        *VAR_20 = 24;
        break;
    default:
        return -1;
    }
    switch( (VAR_22 >> 8) & 0x0f )
    {
    case 1:
        *VAR_16 = 48000;
        break;
    case 4:
        *VAR_16 = 96000;
        break;
    case 5:
        *VAR_16 = 192000;
        break;
    default:
        return -1;
    }

    if( VAR_23 )
    {
        VAR_15->i_chans_to_reorder =
            FUNC_1( VAR_23, ((void*)0),
                                      *VAR_19,
                                      VAR_15->pi_chan_table );
    }

    return 0;
}
