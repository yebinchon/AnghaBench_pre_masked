
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
struct TYPE_9__ {scalar_t__ status; int lock; scalar_t__ b_on_vout; } ;
typedef TYPE_4__ bluray_overlay_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(demux_t *VAR_3, int VAR_4)
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;
    bluray_overlay_t *VAR_6 = VAR_5->bdj.p_overlays[VAR_4];





    FUNC_0(&VAR_6->lock);
    if (VAR_6->status >= VAR_0 && VAR_6->b_on_vout) {
        VAR_6->status = VAR_1;
        FUNC_1(&VAR_6->lock);
        return;
    }






    VAR_6->status = VAR_2;
    FUNC_1(&VAR_6->lock);
}
