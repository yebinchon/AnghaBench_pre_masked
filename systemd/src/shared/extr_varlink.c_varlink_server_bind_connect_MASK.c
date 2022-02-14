
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ connect_callback; } ;
typedef TYPE_1__ VarlinkServer ;
typedef scalar_t__ VarlinkConnect ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(VarlinkServer *VAR_2, VarlinkConnect VAR_3) {
        FUNC_0(VAR_2, -VAR_1);

        if (VAR_3 && VAR_2->connect_callback && VAR_3 != VAR_2->connect_callback)
                return -VAR_0;

        VAR_2->connect_callback = VAR_3;
        return 0;
}
