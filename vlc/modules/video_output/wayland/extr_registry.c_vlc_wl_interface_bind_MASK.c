
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_proxy {int dummy; } ;
struct wl_interface {int dummy; } ;
struct vlc_wl_registry {int registry; } ;
struct vlc_wl_global {int version; int name; } ;


 struct vlc_wl_global* FUNC_0 (struct vlc_wl_registry*,char const*) ;
 struct wl_proxy* FUNC_1 (int ,int ,struct wl_interface const*,int) ;

struct wl_proxy *FUNC_2(struct vlc_wl_registry *VAR_0,
                                       const char *VAR_1,
                                       const struct wl_interface *VAR_2,
                                       uint32_t *restrict VAR_3)
{
    const struct vlc_wl_global *VAR_4 = FUNC_0(VAR_0, VAR_1);

    if (VAR_4 == ((void*)0))
        return 0;

    uint32_t VAR_5 = (VAR_3 != ((void*)0)) ? *VAR_3 : 1;

    if (VAR_5 > VAR_4->version)
        *VAR_3 = VAR_5 = VAR_4->version;

    return FUNC_1(VAR_0->registry, VAR_4->name, VAR_2, VAR_5);
}
