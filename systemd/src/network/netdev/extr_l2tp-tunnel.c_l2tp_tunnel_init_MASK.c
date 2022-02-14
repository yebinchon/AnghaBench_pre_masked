
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int udp6_csum_rx; int udp6_csum_tx; int l2tp_encap_type; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ L2tpTunnel ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(NetDev *VAR_1) {
        L2tpTunnel *VAR_2;

        FUNC_1(VAR_1);

        VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_2);

        VAR_2->l2tp_encap_type = VAR_0;
        VAR_2->udp6_csum_rx = 1;
        VAR_2->udp6_csum_tx = 1;
}
