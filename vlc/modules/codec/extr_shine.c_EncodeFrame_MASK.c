
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int int16_t ;
struct TYPE_21__ {int i_rate; } ;
struct TYPE_22__ {TYPE_3__ audio; } ;
struct TYPE_19__ {int i_channels; } ;
struct TYPE_20__ {int i_codec; TYPE_1__ audio; } ;
struct TYPE_23__ {TYPE_4__ fmt_out; TYPE_2__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ encoder_t ;
struct TYPE_24__ {size_t samples_per_frame; int s; } ;
typedef TYPE_6__ encoder_sys_t ;
struct TYPE_25__ {int i_buffer; unsigned int i_nb_samples; int i_pts; int i_dts; scalar_t__ i_length; int p_buffer; } ;
typedef TYPE_7__ block_t ;


 TYPE_7__* FUNC_0 (TYPE_5__*,TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int ,size_t,int ,int ) ;
 TYPE_7__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__**,TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 unsigned char* FUNC_7 (int ,int **,int*) ;
 scalar_t__ FUNC_8 (unsigned int,int ) ;

__attribute__((used)) static block_t *FUNC_9( encoder_t *VAR_1, block_t *VAR_2 )
{
    if (!VAR_2)
        return ((void*)0);

    encoder_sys_t *VAR_3 = VAR_1->p_sys;
    block_t *VAR_4;
    block_t *VAR_5 = ((void*)0);
    unsigned int VAR_6 = VAR_2->i_buffer >> 2 ;
    vlc_tick_t VAR_7 = VAR_2->i_pts;
    VAR_7 -= FUNC_8(VAR_6, VAR_1->fmt_out.audio.i_rate);

    FUNC_1(VAR_1);

    do {
        VAR_4 = FUNC_0( VAR_1, VAR_2 );
        if( !VAR_4 )
            break;

        VAR_2 = ((void*)0);
        int16_t VAR_8[VAR_0 * 2];
        int16_t *VAR_9[2] = {
            &VAR_8[0],
            &VAR_8[VAR_3->samples_per_frame],
        };
        FUNC_2( VAR_8, VAR_4->p_buffer,
                VAR_3->samples_per_frame, VAR_1->fmt_in.audio.i_channels, VAR_1->fmt_in.i_codec);

        int VAR_10;
        unsigned char *VAR_11 = FUNC_7(VAR_3->s, VAR_9, &VAR_10);
        FUNC_5( VAR_4 );

        if (VAR_10 <= 0)
            break;

        block_t *VAR_12 = FUNC_3( VAR_10 );
        if( !VAR_12 )
            break;

        FUNC_6( VAR_12->p_buffer, VAR_11, VAR_10 );


        VAR_12->i_length = FUNC_8(VAR_3->samples_per_frame,
            VAR_1->fmt_out.audio.i_rate);

        VAR_7 += VAR_12->i_length;
        VAR_12->i_dts = VAR_12->i_pts = VAR_7;

        VAR_12->i_nb_samples = VAR_3->samples_per_frame;

        FUNC_4( &VAR_5, VAR_12 );

    } while( VAR_4 );

    return VAR_5;
}
