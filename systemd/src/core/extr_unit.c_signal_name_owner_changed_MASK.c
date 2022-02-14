
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Unit ;
struct TYPE_2__ {int (* bus_name_owner_change ) (int *,char const*,char const*) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int *,char*,char const**,char const**,char const**) ;
 int FUNC_5 (int *,char const*,char const*) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        const char *VAR_3, *VAR_4, *VAR_5;
        Unit *VAR_6 = VAR_1;
        int VAR_7;

        FUNC_1(VAR_0);
        FUNC_1(VAR_6);

        VAR_7 = FUNC_4(VAR_0, "sss", &VAR_3, &VAR_4, &VAR_5);
        if (VAR_7 < 0) {
                FUNC_2(VAR_7);
                return 0;
        }

        VAR_4 = FUNC_3(VAR_4);
        VAR_5 = FUNC_3(VAR_5);

        if (FUNC_0(VAR_6)->bus_name_owner_change)
                FUNC_0(VAR_6)->bus_name_owner_change(VAR_6, VAR_4, VAR_5);

        return 0;
}
