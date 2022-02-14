
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int learning; int udpcsum; int udp6zerocsumtx; int udp6zerocsumrx; int df; scalar_t__ vni; } ;
typedef TYPE_1__ VxLan ;
typedef TYPE_1__ NetDev ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(NetDev *VAR_2) {
        VxLan *VAR_3;

        FUNC_1(VAR_2);

        VAR_3 = FUNC_0(VAR_2);

        FUNC_1(VAR_3);

        VAR_3->vni = VAR_0 + 1;
        VAR_3->df = VAR_1;
        VAR_3->learning = 1;
        VAR_3->udpcsum = 0;
        VAR_3->udp6zerocsumtx = 0;
        VAR_3->udp6zerocsumrx = 0;
}
