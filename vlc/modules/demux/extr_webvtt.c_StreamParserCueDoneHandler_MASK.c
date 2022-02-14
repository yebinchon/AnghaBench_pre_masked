
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ i_start; scalar_t__ i_stop; scalar_t__ psz_text; } ;
typedef TYPE_1__ webvtt_cue_t ;
struct TYPE_12__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {int b_first_time; scalar_t__ i_next_demux_time; int es; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_14__ {scalar_t__ i_dts; scalar_t__ i_pts; scalar_t__ i_length; } ;
typedef TYPE_4__ block_t ;


 TYPE_4__* FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5( void *VAR_1, webvtt_cue_t *VAR_2 )
{
    demux_t *VAR_3 = (demux_t *) VAR_1;
    demux_sys_t *VAR_4 = VAR_3->p_sys;

    if( VAR_2->psz_text )
    {
        block_t *VAR_5 = FUNC_0( VAR_2, 1 );
        if( VAR_5 )
        {
            if ( VAR_4->b_first_time )
            {
                FUNC_2( VAR_3->out, VAR_2->i_start + VAR_0 );
                VAR_4->b_first_time = 0;
            }
            VAR_4->i_next_demux_time = VAR_2->i_start;
            VAR_5->i_dts =
                    VAR_5->i_pts = VAR_0 + VAR_2->i_start;
            if( VAR_2->i_stop >= 0 && VAR_2->i_stop >= VAR_2->i_start )
                VAR_5->i_length = VAR_2->i_stop - VAR_2->i_start;
            FUNC_1( VAR_3->out, VAR_4->es, VAR_5 );
            FUNC_2( VAR_3->out, VAR_2->i_start + VAR_0 );
        }
    }
    FUNC_4( VAR_2 );
    FUNC_3( VAR_2 );
}
