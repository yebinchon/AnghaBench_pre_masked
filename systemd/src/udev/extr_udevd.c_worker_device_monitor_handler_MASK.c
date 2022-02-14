
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int sd_device_monitor ;
struct TYPE_9__ {int * worker_watch; } ;
typedef TYPE_1__ sd_device ;
typedef TYPE_1__ Manager ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(sd_device_monitor *VAR_1, sd_device *VAR_2, void *VAR_3) {
        Manager *VAR_4 = VAR_3;
        int VAR_5;

        FUNC_0(VAR_2);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_3(VAR_4, VAR_2);
        if (VAR_5 < 0)
                FUNC_2(VAR_2, VAR_5, "Failed to process device, ignoring: %m");


        VAR_5 = FUNC_1(VAR_1, ((void*)0), VAR_2);
        if (VAR_5 < 0)
                FUNC_2(VAR_2, VAR_5, "Failed to send device, ignoring: %m");


        VAR_5 = FUNC_4(VAR_4->worker_watch[VAR_0]);
        if (VAR_5 < 0)
                FUNC_2(VAR_2, VAR_5, "Failed to send signal to main daemon, ignoring: %m");

        return 1;
}
