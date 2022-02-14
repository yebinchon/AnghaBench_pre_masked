
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {unsigned int i_track; TYPE_4__** track; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_6__ {scalar_t__ i_size; } ;
struct TYPE_9__ {scalar_t__ i_idxposc; int b_eof; TYPE_1__ idx; } ;
typedef TYPE_4__ avi_track_t ;



__attribute__((used)) static int FUNC_0( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;
    unsigned int VAR_2;
    int VAR_3 = 1;

    for( VAR_2 = 0; VAR_2 < VAR_1->i_track; VAR_2++ )
    {
        avi_track_t *VAR_4 = VAR_1->track[VAR_2];
        if( VAR_4->i_idxposc >= VAR_4->idx.i_size )
        {
            VAR_4->b_eof = 1;
        }
        else
        {
            VAR_3 = 0;
        }
    }
    return( VAR_3 );
}
