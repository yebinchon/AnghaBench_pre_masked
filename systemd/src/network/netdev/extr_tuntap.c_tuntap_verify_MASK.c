
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mtu; int kind; scalar_t__ mac; } ;
typedef TYPE_1__ NetDev ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(NetDev *VAR_0, const char *VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->mtu != 0)
                FUNC_1(VAR_0,
                                   "MTUBytes= configured for %s device in %s will be ignored.\n"
                                   "Please set it in the corresponding .network file.",
                                   FUNC_2(VAR_0->kind), VAR_1);

        if (VAR_0->mac)
                FUNC_1(VAR_0,
                                   "MACAddress= configured for %s device in %s will be ignored.\n"
                                   "Please set it in the corresponding .network file.",
                                   FUNC_2(VAR_0->kind), VAR_1);

        return 0;
}
