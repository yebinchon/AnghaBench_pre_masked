
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int ** track; } ;
typedef TYPE_2__ demux_sys_t ;
typedef int asf_track_t ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    for ( unsigned int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
    {
        asf_track_t *VAR_4 = VAR_2->track[VAR_3];
        if( !VAR_4 )
            continue;
        FUNC_0( VAR_4 );
    }
}
