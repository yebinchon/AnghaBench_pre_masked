
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_5__ {TYPE_1__* userdata; } ;
struct TYPE_4__ {int polkit_registry; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_2__ Image ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(
                sd_bus_message *VAR_3,
                void *VAR_4,
                sd_bus_error *VAR_5) {

        Image *VAR_6 = VAR_4;
        Manager *VAR_7 = VAR_6->userdata;
        uint64_t VAR_8;
        int VAR_9;

        FUNC_1(VAR_3);

        VAR_9 = FUNC_5(VAR_3, "t", &VAR_8);
        if (VAR_9 < 0)
                return VAR_9;
        if (!FUNC_0(VAR_8))
                return FUNC_4(VAR_5, VAR_1, "New limit out of range");

        VAR_9 = FUNC_2(
                        VAR_3,
                        VAR_0,
                        "org.freedesktop.machine1.manage-images",
                        ((void*)0),
                        0,
                        VAR_2,
                        &VAR_7->polkit_registry,
                        VAR_5);
        if (VAR_9 < 0)
                return VAR_9;
        if (VAR_9 == 0)
                return 1;

        VAR_9 = FUNC_3(VAR_6, VAR_8);
        if (VAR_9 < 0)
                return VAR_9;

        return FUNC_6(VAR_3, ((void*)0));
}
