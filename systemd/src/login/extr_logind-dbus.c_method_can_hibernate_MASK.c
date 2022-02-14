
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Manager ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,char*,char*,char*,char*,int *) ;

__attribute__((used)) static int FUNC_1(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Manager *VAR_4 = VAR_2;

        return FUNC_0(
                        VAR_4, VAR_1,
                        VAR_0,
                        "org.freedesktop.login1.hibernate",
                        "org.freedesktop.login1.hibernate-multiple-sessions",
                        "org.freedesktop.login1.hibernate-ignore-inhibit",
                        "hibernate",
                        VAR_3);
}
