
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_8__ {int i_channels; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
struct TYPE_10__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_11__ {size_t i_samplesperblock; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_12__ {int i_sample1; int i_sample2; int i_idelta; void* i_coeff2; void* i_coeff1; } ;
typedef TYPE_5__ adpcm_ms_channel_t ;


 void* FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void** VAR_0 ;
 void** VAR_1 ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_2, int16_t *VAR_3,
                           uint8_t *VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_2->p_sys;
    adpcm_ms_channel_t VAR_6[2];
    int VAR_7;
    int VAR_8;

    size_t VAR_9 = VAR_5->i_samplesperblock;
    if(VAR_9 < 2)
        return;

    VAR_7 = VAR_2->fmt_out.audio.i_channels == 2 ? 1 : 0;

    FUNC_2( VAR_8 );
    FUNC_1( VAR_8, 0, 6 );
    VAR_6[0].i_coeff1 = VAR_0[VAR_8];
    VAR_6[0].i_coeff2 = VAR_1[VAR_8];

    if( VAR_7 )
    {
        FUNC_2( VAR_8 );
        FUNC_1( VAR_8, 0, 6 );
        VAR_6[1].i_coeff1 = VAR_0[VAR_8];
        VAR_6[1].i_coeff2 = VAR_1[VAR_8];
    }
    FUNC_3( VAR_6[0].i_idelta );
    if( VAR_7 )
    {
        FUNC_3( VAR_6[1].i_idelta );
    }

    FUNC_3( VAR_6[0].i_sample1 );
    if( VAR_7 )
    {
        FUNC_3( VAR_6[1].i_sample1 );
    }

    FUNC_3( VAR_6[0].i_sample2 );
    if( VAR_7 )
    {
        FUNC_3( VAR_6[1].i_sample2 );
    }

    if( VAR_7 )
    {
        *VAR_3++ = VAR_6[0].i_sample2;
        *VAR_3++ = VAR_6[1].i_sample2;
        *VAR_3++ = VAR_6[0].i_sample1;
        *VAR_3++ = VAR_6[1].i_sample1;
    }
    else
    {
        *VAR_3++ = VAR_6[0].i_sample2;
        *VAR_3++ = VAR_6[0].i_sample1;
    }

    for( VAR_9 -= 2; VAR_9 >= 2; VAR_9 -= 2, VAR_4++ )
    {
        *VAR_3++ = FUNC_0( &VAR_6[0], (*VAR_4) >> 4);
        *VAR_3++ = FUNC_0( &VAR_6[VAR_7 ? 1 : 0],
                                           (*VAR_4)&0x0f);
    }
}
