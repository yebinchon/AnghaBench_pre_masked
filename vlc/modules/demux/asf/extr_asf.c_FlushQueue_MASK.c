
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * p_first; int ** pp_last; } ;
struct TYPE_5__ {int * p_frame; } ;
struct TYPE_7__ {TYPE_2__ queue; TYPE_1__ info; } ;
typedef TYPE_3__ asf_track_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( asf_track_t *VAR_0 )
{
    if( VAR_0->info.p_frame )
    {
        FUNC_0( VAR_0->info.p_frame );
        VAR_0->info.p_frame = ((void*)0);
    }
    if( VAR_0->queue.p_first )
    {
        FUNC_0( VAR_0->queue.p_first );
        VAR_0->queue.p_first = ((void*)0);
        VAR_0->queue.pp_last = &VAR_0->queue.p_first;
    }
}
