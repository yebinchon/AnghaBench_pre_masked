
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_registry {int dummy; } ;
struct vlc_wl_registry {int names; } ;
struct vlc_wl_global {int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_wl_global*,int *,int ) ;
 void** FUNC_2 (struct vlc_wl_global*,int *,int ) ;
 int FUNC_3 (struct vlc_wl_global*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(void *VAR_1, struct wl_registry *VAR_2,
                                      uint32_t VAR_3)
{
    struct vlc_wl_registry *VAR_4 = VAR_1;
    struct vlc_wl_global VAR_5 = { .name = VAR_3 };
    void **VAR_6 = FUNC_2(&VAR_5, &VAR_4->names, VAR_0);

    if (FUNC_0(VAR_6 != ((void*)0)))
    {
        struct vlc_wl_global *VAR_7 = *VAR_6;

        FUNC_1(VAR_7, &VAR_4->names, VAR_0);
        FUNC_3(VAR_7);
    }

    (void) VAR_2;
}
