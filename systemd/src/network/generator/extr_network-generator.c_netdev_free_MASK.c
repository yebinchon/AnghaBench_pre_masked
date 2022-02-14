
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; int ifname; } ;
typedef TYPE_1__ NetDev ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static NetDev *FUNC_2(NetDev *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->ifname);
        FUNC_0(VAR_0->kind);
        return FUNC_1(VAR_0);
}
