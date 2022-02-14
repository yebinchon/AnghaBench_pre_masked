
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const**) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(sd_bus_message *VAR_1, char **VAR_2) {
        const char *VAR_3;
        char *VAR_4;
        int VAR_5;

        VAR_5 = FUNC_0(VAR_1, "o", &VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_4 = FUNC_1(VAR_3);
        if (!VAR_4)
                return -VAR_0;

        *VAR_2 = VAR_4;
        return 1;
}
