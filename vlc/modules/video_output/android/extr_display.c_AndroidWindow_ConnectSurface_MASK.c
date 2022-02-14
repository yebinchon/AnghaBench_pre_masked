
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_awh; } ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_6__ {int id; int p_jsurface; scalar_t__ b_opaque; scalar_t__ p_surface; } ;
typedef TYPE_2__ android_window ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(vout_display_sys_t *VAR_0,
                                        android_window *VAR_1)
{
    if (!VAR_1->p_surface) {
        VAR_1->p_surface = FUNC_0(VAR_0->p_awh,
                                                              VAR_1->id);
        if (!VAR_1->p_surface)
            return -1;
        if (VAR_1->b_opaque)
            VAR_1->p_jsurface = FUNC_1(VAR_0->p_awh,
                                                             VAR_1->id);
    }

    return 0;
}
