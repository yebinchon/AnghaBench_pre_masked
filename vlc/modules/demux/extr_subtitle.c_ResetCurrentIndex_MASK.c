
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_7__ {size_t i_count; size_t i_current; TYPE_1__* p_array; } ;
struct TYPE_9__ {int f_rate; int i_next_demux_date; TYPE_2__ subtitles; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_6__ {int i_start; } ;



__attribute__((used)) static void
FUNC_0( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;
    for( size_t VAR_2 = 0; VAR_2 < VAR_1->subtitles.i_count; VAR_2++ )
    {
        if( VAR_1->subtitles.p_array[VAR_2].i_start * VAR_1->f_rate >
            VAR_1->i_next_demux_date && VAR_2 > 0 )
            break;
        VAR_1->subtitles.i_current = VAR_2;
    }
}
