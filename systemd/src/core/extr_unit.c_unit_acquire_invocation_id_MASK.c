
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;
typedef int Unit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(Unit *VAR_0) {
        sd_id128_t VAR_1;
        int VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_2(&VAR_1);
        if (VAR_2 < 0)
                return FUNC_1(VAR_0, VAR_2, "Failed to generate invocation ID for unit: %m");

        VAR_2 = FUNC_4(VAR_0, VAR_1);
        if (VAR_2 < 0)
                return FUNC_1(VAR_0, VAR_2, "Failed to set invocation ID for unit: %m");

        FUNC_3(VAR_0);
        return 0;
}
