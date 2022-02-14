
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {int b_eof; int b_eos; int i_sendtime; TYPE_3__** track; int i_preroll_start; void* i_time; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_8__ {void* i_time; } ;
typedef TYPE_3__ asf_track_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;

    VAR_5->b_eof = 0;
    VAR_5->b_eos = 0;
    VAR_5->i_time = VAR_3;
    VAR_5->i_sendtime = -1;
    VAR_5->i_preroll_start = VAR_0;

    for( int VAR_6 = 0; VAR_6 < VAR_2 ; VAR_6++ )
    {
        asf_track_t *VAR_7 = VAR_5->track[VAR_6];
        if( VAR_7 )
        {
            FUNC_0( VAR_7 );
            VAR_7->i_time = VAR_3;
        }
    }

    FUNC_1( VAR_4->out, VAR_1 );
}
