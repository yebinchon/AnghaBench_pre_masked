
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_vk_t {int ref_count; int * module; struct vout_window_t* window; scalar_t__ surface; int * instance; int * ctx; } ;
typedef struct vlc_vk_t vlc_vk_t ;
typedef int vlc_object_t ;
struct vout_window_t {int dummy; } ;
typedef scalar_t__ VkSurfaceKHR ;


 int * FUNC_0 (struct vlc_vk_t*,char*,char const*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct vlc_vk_t* FUNC_3 (int *,int) ;
 int FUNC_4 (struct vlc_vk_t*) ;

vlc_vk_t *FUNC_5(struct vout_window_t *VAR_0, const char *VAR_1)
{
    vlc_object_t *VAR_2 = (vlc_object_t *) VAR_0;
    struct vlc_vk_t *VAR_3;

    VAR_3 = FUNC_3(VAR_2, sizeof (*VAR_3));
    if (FUNC_1(VAR_3 == ((void*)0)))
        return ((void*)0);

    VAR_3->ctx = ((void*)0);
    VAR_3->instance = ((void*)0);
    VAR_3->surface = (VkSurfaceKHR) ((void*)0);

    VAR_3->window = VAR_0;
    VAR_3->module = FUNC_0(VAR_3, "vulkan", VAR_1, 1);
    if (VAR_3->module == ((void*)0))
    {
        FUNC_4(VAR_3);
        return ((void*)0);
    }
    FUNC_2(&VAR_3->ref_count);

    return VAR_3;
}
