
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int jobs; } ;
typedef TYPE_1__ BusWaitForJobs ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_0 ;

int FUNC_3(BusWaitForJobs *VAR_1, const char *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);

        VAR_3 = FUNC_1(&VAR_1->jobs, &VAR_0);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_2(VAR_1->jobs, VAR_2);
}
