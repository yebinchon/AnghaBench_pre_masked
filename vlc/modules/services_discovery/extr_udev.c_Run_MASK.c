
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udev_monitor {int dummy; } ;
struct udev_device {int dummy; } ;
struct pollfd {int fd; int events; } ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {struct udev_monitor* monitor; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int FUNC_0 (TYPE_1__*,struct udev_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,struct udev_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (char const*,char*) ;
 char* FUNC_4 (struct udev_device*) ;
 int FUNC_5 (struct udev_device*) ;
 int FUNC_6 (struct udev_monitor*) ;
 struct udev_device* FUNC_7 (struct udev_monitor*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

__attribute__((used)) static void *FUNC_10 (void *VAR_3)
{
    services_discovery_t *VAR_4 = VAR_3;
    services_discovery_sys_t *VAR_5 = VAR_4->p_sys;
    struct udev_monitor *VAR_6 = VAR_5->monitor;

    int VAR_7 = FUNC_6 (VAR_6);
    struct pollfd VAR_8 = { .fd = VAR_7, .events = VAR_1, };

    for (;;)
    {
        while (FUNC_2 (&VAR_8, 1, -1) == -1)
            if (VAR_2 != VAR_0)
                break;

        int VAR_9 = FUNC_9 ();
        struct udev_device *VAR_10 = FUNC_7 (VAR_6);
        if (VAR_10 == ((void*)0))
            continue;

        const char *VAR_11 = FUNC_4 (VAR_10);
        if (!FUNC_3 (VAR_11, "add"))
            FUNC_0 (VAR_4, VAR_10);
        else if (!FUNC_3 (VAR_11, "remove"))
            FUNC_1 (VAR_4, VAR_10);
        else if (!FUNC_3 (VAR_11, "change"))
        {
            FUNC_1 (VAR_4, VAR_10);
            FUNC_0 (VAR_4, VAR_10);
        }
        FUNC_5 (VAR_10);
        FUNC_8 (VAR_9);
    }
    return ((void*)0);
}
