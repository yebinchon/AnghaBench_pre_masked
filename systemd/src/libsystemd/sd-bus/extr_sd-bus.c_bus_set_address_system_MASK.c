
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;


 char const* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char*) ;

int FUNC_3(sd_bus *VAR_1) {
        const char *VAR_2;
        FUNC_0(VAR_1);

        VAR_2 = FUNC_2("DBUS_SYSTEM_BUS_ADDRESS");
        if (VAR_2)
                return FUNC_1(VAR_1, VAR_2);

        return FUNC_1(VAR_1, VAR_0);
}
