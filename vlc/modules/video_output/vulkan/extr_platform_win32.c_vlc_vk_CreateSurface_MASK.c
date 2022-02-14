
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
struct TYPE_13__ {int hwnd; int hinstance; int sType; } ;
typedef TYPE_5__ VkWin32SurfaceCreateInfoKHR ;
typedef scalar_t__ VkResult ;
typedef int VkInstance ;
struct TYPE_10__ {int hwnd; } ;
struct TYPE_11__ {TYPE_2__ handle; } ;
struct TYPE_9__ {int instance; } ;
typedef int HWND ;
typedef int HINSTANCE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,int *,int *) ;

int FUNC_3(vlc_vk_t *VAR_4)
{
    VkInstance VAR_5 = VAR_4->instance->instance;


    HINSTANCE VAR_6 = FUNC_0(((void*)0));

    VkWin32SurfaceCreateInfoKHR VAR_7 = {
         .sType = VAR_0,
         .hinstance = VAR_6,
         .hwnd = (HWND) VAR_4->window->handle.hwnd,
    };

    VkResult VAR_8 = FUNC_2(VAR_5, &VAR_7, ((void*)0), &VAR_4->surface);
    if (VAR_8 != VAR_1) {
        FUNC_1(VAR_4, "Failed creating Win32 surface");
        return VAR_2;
    }

    return VAR_3;
}
