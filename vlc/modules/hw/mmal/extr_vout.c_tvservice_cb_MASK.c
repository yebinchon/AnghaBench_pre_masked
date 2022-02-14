
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_4__ {int need_configure_display; int manage_mutex; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    vout_display_t *VAR_4 = (vout_display_t *)VAR_0;
    vout_display_sys_t *VAR_5 = VAR_4->sys;

    FUNC_1(&VAR_5->manage_mutex);
    VAR_5->need_configure_display = 1;
    FUNC_2(&VAR_5->manage_mutex);
}
