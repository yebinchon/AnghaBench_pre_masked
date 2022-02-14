
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_connection_t ;
struct TYPE_12__ {int surface; TYPE_3__* window; int * platform_sys; TYPE_1__* instance; } ;
typedef TYPE_4__ vlc_vk_t ;
struct TYPE_13__ {int * connection; int window; int sType; } ;
typedef TYPE_5__ VkXcbSurfaceCreateInfoKHR ;
typedef scalar_t__ VkResult ;
typedef int VkInstance ;
struct TYPE_10__ {int xid; } ;
struct TYPE_11__ {TYPE_2__ handle; } ;
struct TYPE_9__ {int instance; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_5__*,int *,int *) ;

int FUNC_2(vlc_vk_t *VAR_4)
{
    VkInstance VAR_5 = VAR_4->instance->instance;
    xcb_connection_t *VAR_6 = VAR_4->platform_sys;

    VkXcbSurfaceCreateInfoKHR VAR_7 = {
         .sType = VAR_0,
         .window = (xcb_window_t) VAR_4->window->handle.xid,
         .connection = VAR_6,
    };

    VkResult VAR_8 = FUNC_1(VAR_5, &VAR_7, ((void*)0), &VAR_4->surface);
    if (VAR_8 != VAR_1) {
        FUNC_0(VAR_4, "Failed creating XCB surface");
        return VAR_2;
    }

    return VAR_3;
}
