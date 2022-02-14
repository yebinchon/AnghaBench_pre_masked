
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* userdata; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_11__ {int polkit_registry; } ;
typedef TYPE_2__ Manager ;
typedef TYPE_1__ Image ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (int *,int ,char*,char const*) ;
 int FUNC_5 (TYPE_1__*,char*,char const**) ;
 int FUNC_6 (TYPE_1__*,int *) ;

int FUNC_7(
                sd_bus_message *VAR_3,
                void *VAR_4,
                sd_bus_error *VAR_5) {

        Image *VAR_6 = VAR_4;
        Manager *VAR_7 = VAR_6->userdata;
        const char *VAR_8;
        int VAR_9;

        FUNC_0(VAR_3);
        FUNC_0(VAR_6);

        VAR_9 = FUNC_5(VAR_3, "s", &VAR_8);
        if (VAR_9 < 0)
                return VAR_9;

        if (!FUNC_2(VAR_8))
                return FUNC_4(VAR_5, VAR_1, "Image name '%s' is invalid.", VAR_8);

        VAR_9 = FUNC_1(
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
