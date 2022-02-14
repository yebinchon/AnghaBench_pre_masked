
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (int *,int,char const*,char const**,int ,int*,int *) ;
 int FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_2(
                sd_bus_message *VAR_0,
                int VAR_1,
                const char *VAR_2,
                const char **VAR_3,
                uid_t VAR_4,
                sd_bus_error *VAR_5) {

        const char *VAR_6;
        bool VAR_7;
        int VAR_8;

        VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7, VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        if (VAR_8 > 0)
                VAR_6 = "yes";
        else if (VAR_7)
                VAR_6 = "challenge";
        else
                VAR_6 = "no";

        return FUNC_1(VAR_0, "s", VAR_6);
}
