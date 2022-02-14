
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_error ;
typedef int sd_bus ;


 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 char** FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(sd_bus *VAR_0, const char *VAR_1, void *VAR_2, char ***VAR_3, sd_bus_error *VAR_4) {

        if (FUNC_1("/value/a", VAR_1))
                FUNC_0(*VAR_3 = FUNC_2("/value/a/x", "/value/a/y", "/value/a/z"));

        return 1;
}
