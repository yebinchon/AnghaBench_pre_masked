
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connections_per_uid_max; } ;
typedef TYPE_1__ VarlinkServer ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *) ;

unsigned FUNC_1(VarlinkServer *VAR_1) {
        unsigned VAR_2;

        if (VAR_1)
                return VAR_1->connections_per_uid_max;


        VAR_2 = FUNC_0(((void*)0));
        if (VAR_0 > VAR_2)
                return VAR_2 / 4 * 3;

        return VAR_0;
}
