
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_4__ {int manager; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;
typedef int uint32_t ;
struct wl_registry {int dummy; } ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (struct wl_registry*,int ,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct wl_registry *VAR_2,
                               uint32_t VAR_3, const char *VAR_4, uint32_t VAR_5)
{
    vlc_inhibit_t *VAR_6 = VAR_1;
    vlc_inhibit_sys_t *VAR_7 = VAR_6->p_sys;

    if (!FUNC_0(VAR_4, "zwp_idle_inhibit_manager_v1"))
        VAR_7->manager = FUNC_1(VAR_2, VAR_3,
                                    &VAR_0, 1);
    (void) VAR_5;
}
