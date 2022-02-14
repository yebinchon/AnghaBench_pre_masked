
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int surface; TYPE_3__* window; TYPE_1__* instance; } ;
typedef TYPE_4__ vlc_vk_t ;
typedef scalar_t__ VkResult ;
typedef int VkInstance ;
struct TYPE_13__ {int * window; int flags; int * pNext; int sType; } ;
typedef TYPE_5__ VkAndroidSurfaceCreateInfoKHR ;
struct TYPE_10__ {int anativewindow; } ;
struct TYPE_11__ {TYPE_2__ handle; } ;
struct TYPE_9__ {int instance; } ;
typedef int ANativeWindow ;


 int * FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,int *,int *) ;

int FUNC_3(vlc_vk_t *VAR_5)
{
    VkInstance VAR_6 = VAR_5->instance->instance;

    ANativeWindow *VAR_7 =
        FUNC_0(VAR_5->window->handle.anativewindow,
                                        VAR_0);

    VkAndroidSurfaceCreateInfoKHR VAR_8 = {
         .sType = VAR_1,
         .pNext = ((void*)0),
         .flags = 0,
         .window = VAR_7,
    };

    VkResult VAR_9 = FUNC_2(VAR_6, &VAR_8, ((void*)0), &VAR_5->surface);
    if (VAR_9 != VAR_2) {
        FUNC_1(VAR_5, "Failed creating Android surface");
        return VAR_3;
    }

    return VAR_4;
}
