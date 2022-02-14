
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int user_units; int session_units; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int User ;
typedef int Session ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_1__*,char*,char const**,char const**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        const char *VAR_3, *VAR_4;
        Manager *VAR_5 = VAR_1;
        Session *VAR_6;
        User *VAR_7;
        int VAR_8;

        FUNC_0(VAR_0);
        FUNC_0(VAR_5);

        VAR_8 = FUNC_3(VAR_0, "so", &VAR_4, &VAR_3);
        if (VAR_8 < 0) {
                FUNC_1(VAR_8);
                return 0;
        }

        VAR_6 = FUNC_2(VAR_5->session_units, VAR_4);
        if (VAR_6)
                FUNC_4(VAR_6);

        VAR_7 = FUNC_2(VAR_5->user_units, VAR_4);
        if (VAR_7)
                FUNC_5(VAR_7);

        return 0;
}
