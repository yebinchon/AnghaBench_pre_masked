
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_registry {int dummy; } ;
struct vlc_wl_registry {int names; int interfaces; } ;
typedef void vlc_wl_interface ;
typedef void vlc_wl_global ;


 void** FUNC_0 (void*,int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (void*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(void *VAR_2, struct wl_registry *VAR_3,
                               uint32_t VAR_4, const char *VAR_5, uint32_t VAR_6)
{
    struct vlc_wl_registry *VAR_7 = VAR_2;
    struct vlc_wl_interface *VAR_8 = FUNC_4(VAR_5);

    void **VAR_9 = FUNC_0(VAR_8, &VAR_7->interfaces, VAR_0);
    if (FUNC_1(VAR_9 == ((void*)0)))
    {
        FUNC_5(VAR_8);
        return;
    }

    if (*VAR_9 != VAR_8)
    {
        FUNC_5(VAR_8);
        VAR_8 = *VAR_9;
    }

    struct vlc_wl_global *VAR_10 = FUNC_2(VAR_8, VAR_4, VAR_6);
    if (FUNC_1(VAR_10 == ((void*)0)))
        return;

    void **VAR_11 = FUNC_0(VAR_10, &VAR_7->names, VAR_1);
    if (FUNC_1(VAR_11 == ((void*)0))
     || FUNC_1(*VAR_11 != VAR_10) )
        FUNC_3(VAR_10);

    (void) VAR_3;
}
