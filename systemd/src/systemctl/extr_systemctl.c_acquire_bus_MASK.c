
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;
typedef size_t BusFocus ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int,int **) ;
 int FUNC_2 (scalar_t__,int ,int,int **) ;
 int ** VAR_9 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(BusFocus VAR_10, sd_bus **VAR_11) {
        int VAR_12;

        FUNC_0(VAR_10 < VAR_4);
        FUNC_0(VAR_11);


        if (VAR_8 != VAR_2)
                VAR_10 = VAR_0;

        if (FUNC_3("SYSTEMCTL_FORCE_BUS") > 0)
                VAR_10 = VAR_0;

        if (!VAR_9[VAR_10]) {
                bool VAR_13;

                VAR_13 = VAR_7 != VAR_3;

                if (VAR_10 == VAR_1)
                        VAR_12 = FUNC_2(VAR_8, VAR_6, VAR_13, &VAR_9[VAR_10]);
                else
                        VAR_12 = FUNC_1(VAR_8, VAR_6, VAR_13, &VAR_9[VAR_10]);
                if (VAR_12 < 0)
                        return FUNC_4(VAR_12, "Failed to connect to bus: %m");

                (void) FUNC_5(VAR_9[VAR_10], VAR_5);
        }

        *VAR_11 = VAR_9[VAR_10];
        return 0;
}
