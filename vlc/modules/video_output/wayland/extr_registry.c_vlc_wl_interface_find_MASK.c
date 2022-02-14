
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_wl_registry {int interfaces; } ;
typedef void vlc_wl_interface ;


 void** FUNC_0 (char const*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct vlc_wl_interface *
FUNC_1(const struct vlc_wl_registry *VAR_1, const char *VAR_2)
{
    void **VAR_3 = FUNC_0(VAR_2, &VAR_1->interfaces, VAR_0);

    return (VAR_3 != ((void*)0)) ? *VAR_3 : ((void*)0);
}
