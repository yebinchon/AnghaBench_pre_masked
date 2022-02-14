
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
struct TYPE_7__ {TYPE_4__** p_overlays; } ;
struct TYPE_9__ {TYPE_1__ bdj; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_10__ {int width; int height; int b_on_vout; int lock; } ;
typedef TYPE_4__ bluray_overlay_t ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(demux_t *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    demux_sys_t *VAR_4 = VAR_0->p_sys;

    FUNC_0(VAR_4->bdj.p_overlays[VAR_1] == ((void*)0));

    bluray_overlay_t *VAR_5 = FUNC_1(1, sizeof(*VAR_5));
    if (FUNC_2(VAR_5 == ((void*)0)))
        return;

    VAR_5->width = VAR_2;
    VAR_5->height = VAR_3;
    VAR_5->b_on_vout = 0;

    FUNC_3(&VAR_5->lock);

    VAR_4->bdj.p_overlays[VAR_1] = VAR_5;
}
