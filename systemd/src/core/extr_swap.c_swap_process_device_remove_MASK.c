
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_device ;
struct TYPE_3__ {int swaps_by_devnode; } ;
typedef int Swap ;
typedef TYPE_1__ Manager ;


 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *,char const**) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(Manager *VAR_0, sd_device *VAR_1) {
        const char *VAR_2;
        int VAR_3 = 0;
        Swap *VAR_4;

        VAR_3 = FUNC_1(VAR_1, &VAR_2);
        if (VAR_3 < 0)
                return 0;

        while ((VAR_4 = FUNC_0(VAR_0->swaps_by_devnode, VAR_2))) {
                int VAR_5;

                VAR_5 = FUNC_2(VAR_4, ((void*)0));
                if (VAR_5 < 0)
                        VAR_3 = VAR_5;
        }

        return VAR_3;
}
