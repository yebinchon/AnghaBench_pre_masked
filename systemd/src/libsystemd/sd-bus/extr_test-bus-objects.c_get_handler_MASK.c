
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int something; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_3(sd_bus *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3, sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        struct context *VAR_7 = VAR_5;
        int VAR_8;

        FUNC_1("property get for %s called, returning \"%s\".", VAR_3, VAR_7->something);

        VAR_8 = FUNC_2(VAR_4, "s", VAR_7->something);
        FUNC_0(VAR_8 >= 0);

        return 1;
}
