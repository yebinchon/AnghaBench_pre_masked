
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ifname_peer; } ;
typedef TYPE_1__ VxCan ;
typedef TYPE_1__ NetDev ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(NetDev *VAR_0) {
        VxCan *VAR_1;

        FUNC_1(VAR_0);

        VAR_1 = FUNC_0(VAR_0);

        FUNC_1(VAR_1);

        FUNC_2(VAR_1->ifname_peer);
}
