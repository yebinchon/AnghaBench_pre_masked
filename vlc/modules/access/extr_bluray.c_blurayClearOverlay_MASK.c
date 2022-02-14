
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
struct TYPE_6__ {TYPE_4__** p_overlays; } ;
struct TYPE_8__ {TYPE_1__ bdj; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_9__ {int lock; int status; int * p_regions; } ;
typedef TYPE_4__ bluray_overlay_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(demux_t *VAR_1, int VAR_2)
{
    demux_sys_t *VAR_3 = VAR_1->p_sys;
    bluray_overlay_t *VAR_4 = VAR_3->bdj.p_overlays[VAR_2];

    FUNC_1(&VAR_4->lock);

    FUNC_0(VAR_4->p_regions);
    VAR_4->p_regions = ((void*)0);
    VAR_4->status = VAR_0;

    FUNC_2(&VAR_4->lock);
}
