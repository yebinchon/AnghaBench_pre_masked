
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sockets; } ;
typedef TYPE_1__ VarlinkServer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(VarlinkServer *VAR_1) {
        FUNC_0(VAR_1, -VAR_0);

        while (VAR_1->sockets)
                FUNC_1(VAR_1->sockets);

        return 0;
}
