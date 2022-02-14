
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rlimit {int rlim_cur; } ;
struct TYPE_3__ {int connections_max; } ;
typedef TYPE_1__ VarlinkServer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;

unsigned FUNC_2(VarlinkServer *VAR_2) {
        struct rlimit VAR_3;


        if (VAR_2)
                return VAR_2->connections_max;

        FUNC_0(FUNC_1(VAR_0, &VAR_3) >= 0);


        if (VAR_1 > VAR_3.rlim_cur / 4 * 3)
                return VAR_3.rlim_cur / 4 * 3;

        return VAR_1;
}
