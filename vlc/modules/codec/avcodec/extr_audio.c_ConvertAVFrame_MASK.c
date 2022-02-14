
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int i_bytes_per_frame; int i_bitspersample; int i_channels; int i_format; } ;
struct TYPE_18__ {TYPE_1__ audio; } ;
struct TYPE_19__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_20__ {int pi_extraction; scalar_t__ b_extract; TYPE_7__* p_context; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_21__ {int i_nb_samples; int p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_23__ {int channels; int sample_fmt; } ;
struct TYPE_22__ {int* linesize; void** extended_data; int nb_samples; } ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int ,int ,int ,int,int,int ,int ) ;
 int FUNC_1 (int ,void const**,int,int,int ) ;
 int FUNC_2 (TYPE_6__**) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 TYPE_5__* FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static block_t * FUNC_8( decoder_t *VAR_0, AVFrame *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    AVCodecContext *VAR_3 = VAR_2->p_context;
    block_t *VAR_4;


    if( FUNC_3( VAR_3->sample_fmt ) )
    {
        VAR_4 = FUNC_4(VAR_1->linesize[0] * VAR_3->channels);
        if ( FUNC_6(VAR_4) )
        {
            const void *VAR_5[VAR_3->channels];
            for (int VAR_6 = 0; VAR_6 < VAR_3->channels; VAR_6++)
                VAR_5[VAR_6] = VAR_1->extended_data[VAR_6];

            FUNC_1(VAR_4->p_buffer, VAR_5, VAR_1->nb_samples,
                            VAR_3->channels, VAR_0->fmt_out.audio.i_format);
            VAR_4->i_nb_samples = VAR_1->nb_samples;
        }
        FUNC_2(&VAR_1);
    }
    else
    {
        VAR_4 = FUNC_7(VAR_1);
        VAR_1 = ((void*)0);
    }

    if (VAR_2->b_extract && VAR_4)
    {
        block_t *VAR_7 = FUNC_4( VAR_0->fmt_out.audio.i_bytes_per_frame
                                         * VAR_4->i_nb_samples );
        if( FUNC_6(VAR_7) )
        {
            FUNC_0( VAR_7->p_buffer,
                                 VAR_0->fmt_out.audio.i_channels,
                                 VAR_4->p_buffer, VAR_3->channels,
                                 VAR_4->i_nb_samples, VAR_2->pi_extraction,
                                 VAR_0->fmt_out.audio.i_bitspersample );
            VAR_7->i_nb_samples = VAR_4->i_nb_samples;
        }
        FUNC_5( VAR_4 );
        VAR_4 = VAR_7;
    }

    return VAR_4;
}
