
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_9__ {TYPE_4__** track; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_7__ {unsigned int i_size; } ;
struct TYPE_10__ {unsigned int i_idxposc; TYPE_1__ idx; scalar_t__ i_idxposb; } ;
typedef TYPE_4__ avi_track_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1( demux_t *VAR_2, unsigned int VAR_3,
                               unsigned int VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;
    avi_track_t *VAR_6 = VAR_5->track[VAR_3];

    VAR_6->i_idxposc = VAR_4;
    VAR_6->i_idxposb = 0;

    if( VAR_4 >= VAR_6->idx.i_size )
    {
        VAR_6->i_idxposc = VAR_6->idx.i_size - 1;
        do
        {
            VAR_6->i_idxposc++;
            if( FUNC_0( VAR_2, VAR_3 ) )
            {
                return VAR_0;
            }

        } while( VAR_6->i_idxposc < VAR_4 );
    }

    return VAR_1;
}
