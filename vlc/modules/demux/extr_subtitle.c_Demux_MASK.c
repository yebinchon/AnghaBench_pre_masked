
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_11__ {int i_start; int i_stop; } ;
typedef TYPE_2__ subtitle_t ;
struct TYPE_12__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_10__ {size_t i_current; size_t i_count; TYPE_2__* p_array; } ;
struct TYPE_13__ {int i_next_demux_date; int f_rate; int b_first_time; TYPE_1__ subtitles; int b_slave; int es; TYPE_5__* (* pf_convert ) (TYPE_2__ const*) ;} ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_14__ {int i_length; scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,TYPE_5__*) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_5__* FUNC_3 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;

    vlc_tick_t VAR_5 = VAR_4->i_next_demux_date;

    while( VAR_4->subtitles.i_current < VAR_4->subtitles.i_count &&
           ( VAR_4->subtitles.p_array[VAR_4->subtitles.i_current].i_start *
             VAR_4->f_rate ) <= VAR_5 )
    {
        const subtitle_t *VAR_6 = &VAR_4->subtitles.p_array[VAR_4->subtitles.i_current];

        if ( !VAR_4->b_slave && VAR_4->b_first_time )
        {
            FUNC_2( VAR_3->out, VAR_2 + VAR_5 );
            VAR_4->b_first_time = 0;
        }

        if( VAR_6->i_start >= 0 )
        {
            block_t *VAR_7 = VAR_4->pf_convert( VAR_6 );
            if( VAR_7 )
            {
                VAR_7->i_dts =
                VAR_7->i_pts = VAR_2 + VAR_6->i_start * VAR_4->f_rate;
                if( VAR_6->i_stop >= 0 && VAR_6->i_stop >= VAR_6->i_start )
                    VAR_7->i_length = (VAR_6->i_stop - VAR_6->i_start) * VAR_4->f_rate;

                FUNC_1( VAR_3->out, VAR_4->es, VAR_7 );
            }
        }

        VAR_4->subtitles.i_current++;
    }

    if ( !VAR_4->b_slave )
    {
        FUNC_2( VAR_3->out, VAR_2 + VAR_5 );
        VAR_4->i_next_demux_date += FUNC_0(125);
    }

    if( VAR_4->subtitles.i_current >= VAR_4->subtitles.i_count )
        return VAR_0;

    return VAR_1;
}
