
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int section; struct TYPE_6__* wireguard; } ;
typedef TYPE_1__ WireguardPeer ;
typedef int NetDev ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(WireguardPeer *VAR_0) {
        NetDev *VAR_1;

        FUNC_1(VAR_0);
        FUNC_1(VAR_0->wireguard);

        VAR_1 = FUNC_0(VAR_0->wireguard);

        if (FUNC_3(VAR_0->section))
                FUNC_4(VAR_0);

        FUNC_2(VAR_1);
}
