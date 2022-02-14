
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct vlc_wl_interface {int globals; } ;
struct vlc_wl_global {int node; struct vlc_wl_interface* interface; void* version; void* name; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct vlc_wl_global* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct vlc_wl_global *FUNC_3(struct vlc_wl_interface *VAR_0,
                                               uint32_t VAR_1, uint32_t VAR_2)
{
    struct vlc_wl_global *VAR_3 = FUNC_1(sizeof (*VAR_3));
    if (FUNC_0(VAR_3 != ((void*)0)))
    {
        VAR_3->name = VAR_1;
        VAR_3->version = VAR_2;
        VAR_3->interface = VAR_0;
        FUNC_2(&VAR_0->globals, &VAR_3->node);
    }
    return VAR_3;
}
