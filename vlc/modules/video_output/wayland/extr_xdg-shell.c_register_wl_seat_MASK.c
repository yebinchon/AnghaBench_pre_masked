
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_5__ {int seats; } ;
typedef TYPE_2__ vout_window_sys_t ;
typedef int uint32_t ;
struct wl_registry {int dummy; } ;


 int FUNC_0 (TYPE_1__*,struct wl_registry*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_registry *VAR_1,
                             uint32_t VAR_2, uint32_t VAR_3)
{
    vout_window_t *VAR_4 = VAR_0;
    vout_window_sys_t *VAR_5 = VAR_4->sys;

    FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3, &VAR_5->seats);
}
