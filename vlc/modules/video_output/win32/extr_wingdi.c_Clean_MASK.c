
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {scalar_t__ off_bitmap; scalar_t__ off_dc; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    if (VAR_1->off_dc)
        FUNC_0(VAR_1->off_dc);
    if (VAR_1->off_bitmap)
        FUNC_1(VAR_1->off_bitmap);
}
