
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_track ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*,char const**,char const**,char const**) ;

__attribute__((used)) static int FUNC_3(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        sd_bus_track *VAR_3 = VAR_1;
        const char *VAR_4, *VAR_5, *VAR_6;
        int VAR_7;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_7 = FUNC_2(VAR_0, "sss", &VAR_4, &VAR_5, &VAR_6);
        if (VAR_7 < 0)
                return 0;

        FUNC_1(VAR_3, VAR_4);
        return 0;
}
