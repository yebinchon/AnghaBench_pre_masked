
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
struct TYPE_9__ {TYPE_1__ bdj; int p_out; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_10__ {int p_regions; int lock; scalar_t__ p_updater; } ;
typedef TYPE_4__ bluray_overlay_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(demux_t *VAR_1, int VAR_2)
{
    demux_sys_t *VAR_3 = VAR_1->p_sys;
    bluray_overlay_t *VAR_4 = VAR_3->bdj.p_overlays[VAR_2];

    if (VAR_4 != ((void*)0)) {


        if (VAR_4->p_updater) {
            FUNC_3(VAR_4->p_updater);
        }


        FUNC_0(VAR_3->p_out, VAR_0, VAR_2);

        FUNC_4(&VAR_4->lock);
        FUNC_2(VAR_4->p_regions);
        FUNC_1(VAR_4);

        VAR_3->bdj.p_overlays[VAR_2] = ((void*)0);
    }
}
