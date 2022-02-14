
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*,int *,char const**) ;

__attribute__((used)) static int FUNC_2(sd_bus *VAR_0, const char *VAR_1, sd_bus_message *VAR_2, sd_bus_error *VAR_3, void *VAR_4) {
        const char *VAR_5, **VAR_6 = VAR_4;
        int VAR_7;

        VAR_7 = FUNC_1(VAR_2, "(ss)", ((void*)0), &VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        if (!FUNC_0(VAR_5))
                *VAR_6 = VAR_5;

        return 0;
}
