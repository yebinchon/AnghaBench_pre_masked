
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_error ;
typedef int Unit ;
typedef int * Manager ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char const*,char const*,int *,int **) ;
 int * FUNC_3 (int *) ;

int FUNC_4(
                Manager *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                sd_bus_error *VAR_3,
                Unit **VAR_4) {

        int VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);




        VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
        if (VAR_5 != 0)
                return VAR_5;

        FUNC_1(VAR_0);

        *VAR_4 = FUNC_3(*VAR_4);
        return 0;
}
