
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {TYPE_3__** track; int * meta; int * p_fp; int * p_root; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {struct TYPE_10__* p_fmt; scalar_t__ p_es; } ;
typedef TYPE_3__ asf_track_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_root )
    {
        FUNC_0( VAR_1->s, VAR_2->p_root );
        VAR_2->p_root = ((void*)0);
        VAR_2->p_fp = ((void*)0);
    }
    if( VAR_2->meta )
    {
        FUNC_5( VAR_2->meta );
        VAR_2->meta = ((void*)0);
    }

    FUNC_1( VAR_1 );

    for( int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
    {
        asf_track_t *VAR_4 = VAR_2->track[VAR_3];

        if( VAR_4 )
        {
            if( VAR_4->p_es )
            {
                FUNC_3( VAR_1->out, VAR_4->p_es );
            }
            if ( VAR_4->p_fmt )
            {
                FUNC_2( VAR_4->p_fmt );
                FUNC_4( VAR_4->p_fmt );
            }
            FUNC_4( VAR_4 );
        }
        VAR_2->track[VAR_3] = 0;
    }
}
