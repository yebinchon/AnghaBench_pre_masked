
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device_monitor ;
typedef int sd_device ;
typedef int Manager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,char*) ;

__attribute__((used)) static int FUNC_5(sd_device_monitor *VAR_0, sd_device *VAR_1, void *VAR_2) {
        Manager *VAR_3 = VAR_2;
        int VAR_4;

        FUNC_0(VAR_3);

        FUNC_1(VAR_1, ((void*)0));

        VAR_4 = FUNC_2(VAR_3, VAR_1);
        if (VAR_4 < 0) {
                FUNC_4(VAR_1, VAR_4, "Failed to insert device into event queue: %m");
                return 1;
        }


        FUNC_3(VAR_3);

        return 1;
}
