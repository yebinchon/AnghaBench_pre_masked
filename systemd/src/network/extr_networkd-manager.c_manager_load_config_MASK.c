
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int networks; int network_dirs_ts_usec; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int *,int) ;

int FUNC_3(Manager *VAR_1) {
        int VAR_2;


        FUNC_2(VAR_0, &VAR_1->network_dirs_ts_usec, 1);

        VAR_2 = FUNC_0(VAR_1, 0);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_1(VAR_1, &VAR_1->networks);
        if (VAR_2 < 0)
                return VAR_2;

        return 0;
}
