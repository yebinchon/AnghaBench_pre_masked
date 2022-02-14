
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int device_monitor; int event; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(Manager *VAR_1) {
        int VAR_2;




        if (FUNC_0() > 0)
                return 0;

        VAR_2 = FUNC_4(&VAR_1->device_monitor);
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to initialize device monitor: %m");

        VAR_2 = FUNC_3(VAR_1->device_monitor, "net", ((void*)0));
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Could not add device monitor filter: %m");

        VAR_2 = FUNC_2(VAR_1->device_monitor, VAR_1->event);
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to attach event to device monitor: %m");

        VAR_2 = FUNC_5(VAR_1->device_monitor, VAR_0, VAR_1);
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to start device monitor: %m");

        return 0;
}
