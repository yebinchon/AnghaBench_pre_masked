
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_4__ {int * compositor; } ;
typedef TYPE_2__ vout_window_sys_t ;
typedef int uint32_t ;
struct wl_registry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (struct wl_registry*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct wl_registry *VAR_2,
                                   uint32_t VAR_3, uint32_t VAR_4)
{
    vout_window_t *VAR_5 = VAR_1;
    vout_window_sys_t *VAR_6 = VAR_5->sys;

    if (FUNC_0(VAR_6->compositor == ((void*)0)))
        VAR_6->compositor = FUNC_1(VAR_2, VAR_3,
                                           &VAR_0, VAR_4);
}
