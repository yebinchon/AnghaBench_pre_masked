
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {float i_left_samples; float i_right_samples; int i_nb_samples; int p_es; int * p_buffer; int i_rate; int i_delay; int i_pair; int i_group; } ;
typedef TYPE_1__ sdi_audio_t ;
typedef int int16_t ;
struct TYPE_11__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_12__ {scalar_t__ i_next_date; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_13__ {scalar_t__ p_buffer; scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (int *,int *,int,float) ;
 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_2__*,char*,int ,int ,...) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_4, sdi_audio_t *VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_4->p_sys;
    block_t *VAR_7;
    int16_t *VAR_8;

    if ( VAR_5->p_buffer == ((void*)0) )
        return VAR_1;
    if ( !VAR_5->i_left_samples && !VAR_5->i_right_samples )
    {
        FUNC_4( VAR_4, "no audio %u/%u", VAR_5->i_group,
                  VAR_5->i_pair );
        return VAR_1;
    }
    if ( VAR_5->i_left_samples <
            (float)VAR_5->i_nb_samples * (1.f - VAR_0) ||
        VAR_5->i_left_samples >
            (float)VAR_5->i_nb_samples * (1.f + VAR_0) )
    {
        FUNC_4( VAR_4,
            "left samplerate out of tolerance for audio %u/%u (%u vs. %u)",
            VAR_5->i_group, VAR_5->i_pair,
            VAR_5->i_left_samples, VAR_5->i_nb_samples );
        return VAR_1;
    }
    if ( VAR_5->i_right_samples <
            (float)VAR_5->i_nb_samples * (1.f - VAR_0) ||
        VAR_5->i_right_samples >
            (float)VAR_5->i_nb_samples * (1.f + VAR_0) )
    {
        FUNC_4( VAR_4,
            "right samplerate out of tolerance for audio %u/%u (%u vs. %u)",
            VAR_5->i_group, VAR_5->i_pair,
            VAR_5->i_right_samples, VAR_5->i_nb_samples );
        return VAR_1;
    }

    VAR_7 = FUNC_1( VAR_5->i_nb_samples * sizeof(int16_t) * 2 );
    if( FUNC_5( !VAR_7 ) )
        return VAR_2;
    VAR_7->i_dts = VAR_7->i_pts = VAR_6->i_next_date
        + FUNC_6(VAR_5->i_delay, VAR_5->i_rate);
    VAR_8 = (int16_t *)VAR_7->p_buffer;

    if ( VAR_5->i_left_samples == VAR_5->i_nb_samples &&
         VAR_5->i_right_samples == VAR_5->i_nb_samples )
        FUNC_3( VAR_8, VAR_5->p_buffer,
                    VAR_5->i_nb_samples * sizeof(int16_t) * 2 );
    else
    {
        FUNC_0( VAR_8, VAR_5->p_buffer,
                       VAR_5->i_nb_samples, VAR_5->i_left_samples );

        FUNC_0( VAR_8 + 1, VAR_5->p_buffer + 1,
                       VAR_5->i_nb_samples, VAR_5->i_right_samples );
    }

    FUNC_2( VAR_4->out, VAR_5->p_es, VAR_7 );
    return VAR_3;
}
