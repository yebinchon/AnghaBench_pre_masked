
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int machine_units; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;
typedef int Machine ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,char const**,char const**) ;

int FUNC_5(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        const char *VAR_3, *VAR_4;
        Manager *VAR_5 = VAR_1;
        Machine *VAR_6;
        int VAR_7;

        FUNC_0(VAR_0);
        FUNC_0(VAR_5);

        VAR_7 = FUNC_4(VAR_0, "so", &VAR_4, &VAR_3);
        if (VAR_7 < 0) {
                FUNC_1(VAR_7);
                return 0;
        }

        VAR_6 = FUNC_2(VAR_5->machine_units, VAR_4);
        if (!VAR_6)
                return 0;

        FUNC_3(VAR_6);
        return 0;
}
