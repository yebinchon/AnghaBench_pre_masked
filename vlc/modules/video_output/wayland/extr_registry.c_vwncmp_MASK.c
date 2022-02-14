
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_wl_global {scalar_t__ name; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct vlc_wl_global *VAR_2 = VAR_0;
    const struct vlc_wl_global *VAR_3 = VAR_1;

    return (VAR_2->name < VAR_3->name) ? -1 : (VAR_2->name > VAR_3->name);
}
