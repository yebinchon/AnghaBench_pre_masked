
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int Transfer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Transfer *VAR_7 = VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        return FUNC_1(VAR_4, "d", FUNC_2(VAR_7));
}
