
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_5__ {TYPE_1__* userdata; } ;
struct TYPE_4__ {int polkit_registry; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_2__ Image ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,char*,int*) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(
                sd_bus_message *VAR_2,
                void *VAR_3,
                sd_bus_error *VAR_4) {

        Image *VAR_5 = VAR_3;
        Manager *VAR_6 = VAR_5->userdata;
        int VAR_7, VAR_8;

        FUNC_0(VAR_2);

        VAR_7 = FUNC_3(VAR_2, "b", &VAR_8);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_1(
                        VAR_2,
                        VAR_0,
                        "org.freedesktop.machine1.manage-images",
                        ((void*)0),
                        0,
                        VAR_1,
                        &VAR_6->polkit_registry,
                        VAR_4);
        if (VAR_7 < 0)
                return VAR_7;
        if (VAR_7 == 0)
                return 1;

        VAR_7 = FUNC_2(VAR_5, VAR_8);
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_4(VAR_2, ((void*)0));
}
