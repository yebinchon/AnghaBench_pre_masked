
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_sample1; int i_coeff1; int i_sample2; int i_coeff2; int i_idelta; } ;
typedef TYPE_1__ adpcm_ms_channel_t ;


 int FUNC_0 (int,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_1(adpcm_ms_channel_t *VAR_1,
                               int VAR_2 )
{
    int VAR_3;
    int VAR_4;


    VAR_4 = VAR_2 - ( VAR_2&0x08 ? 0x10 : 0 );

    VAR_3 = ( VAR_1->i_sample1 * VAR_1->i_coeff1 +
                    VAR_1->i_sample2 * VAR_1->i_coeff2 ) / 256 +
                  VAR_4 * VAR_1->i_idelta;

    FUNC_0( VAR_3, -32768, 32767 );

    VAR_1->i_sample2 = VAR_1->i_sample1;
    VAR_1->i_sample1 = VAR_3;

    VAR_1->i_idelta = ( VAR_0[VAR_2] *
                            VAR_1->i_idelta ) / 256;
    if( VAR_1->i_idelta < 16 )
    {
        VAR_1->i_idelta = 16;
    }
    return( VAR_3 );
}
