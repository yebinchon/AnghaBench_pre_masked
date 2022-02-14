
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nexthops_foreign; int nexthops; } ;
typedef int NextHop ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int **) ;
 int FUNC_1 (TYPE_1__*,int *,int **) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(Link *VAR_2, NextHop *VAR_3, NextHop **VAR_4) {
        NextHop *VAR_5;
        int VAR_6;

        VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_5);
        if (VAR_6 == -VAR_0) {

                VAR_6 = FUNC_0(VAR_2, &VAR_2->nexthops, VAR_3, &VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;
        } else if (VAR_6 == 0) {

                VAR_6 = FUNC_2(&VAR_2->nexthops, &VAR_1);
                if (VAR_6 < 0)
                        return VAR_6;

                VAR_6 = FUNC_3(VAR_2->nexthops, VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;

                FUNC_4(VAR_2->nexthops_foreign, VAR_5);
        } else if (VAR_6 == 1) {

                ;
        } else
                return VAR_6;

        if (VAR_4)
                *VAR_4 = VAR_5;

        return 0;
}
