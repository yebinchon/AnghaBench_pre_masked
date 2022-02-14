
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {int lock; TYPE_4__** p_overlays; } ;
struct TYPE_10__ {TYPE_1__ bdj; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_11__ {scalar_t__ status; int b_on_vout; int lock; } ;
typedef TYPE_4__ bluray_overlay_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(demux_t *VAR_2)
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    FUNC_1(&VAR_3->bdj.lock);

    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        bluray_overlay_t *VAR_5 = VAR_3->bdj.p_overlays[VAR_4];
        if (!VAR_5) {
            continue;
        }
        FUNC_1(&VAR_5->lock);
        bool VAR_6 = VAR_5->status == VAR_1;
        FUNC_2(&VAR_5->lock);
        if (VAR_6 && !VAR_5->b_on_vout)
        {





            FUNC_0(VAR_2, VAR_4, VAR_5);
        }
    }

    FUNC_2(&VAR_3->bdj.lock);
}
