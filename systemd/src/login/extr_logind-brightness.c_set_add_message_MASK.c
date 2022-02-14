
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int Set ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(Set **VAR_1, sd_bus_message *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);

        if (!VAR_2)
                return 0;

        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 <= 0)
                return VAR_3;

        VAR_3 = FUNC_3(VAR_1, &VAR_0);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_4(*VAR_1, VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        FUNC_2(VAR_2);
        return 1;
}
