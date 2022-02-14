
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
struct vlc_wl_registry {int dummy; } ;
struct vlc_wl_global {int version; } ;


 struct vlc_wl_global* FUNC_0 (struct vlc_wl_registry*,char const*) ;

uint_fast32_t FUNC_1(struct vlc_wl_registry *VAR_0,
                                           const char *VAR_1)
{
    const struct vlc_wl_global *VAR_2 = FUNC_0(VAR_0, VAR_1);

    return (VAR_2 != ((void*)0)) ? VAR_2->version : 0;
}
