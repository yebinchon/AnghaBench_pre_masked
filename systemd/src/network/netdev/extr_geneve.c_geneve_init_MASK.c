
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int udpcsum; int udp6zerocsumtx; int udp6zerocsumrx; int dest_port; int geneve_df; scalar_t__ id; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ Geneve ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(NetDev *VAR_3) {
        Geneve *VAR_4;

        FUNC_1(VAR_3);

        VAR_4 = FUNC_0(VAR_3);

        FUNC_1(VAR_4);

        VAR_4->id = VAR_1 + 1;
        VAR_4->geneve_df = VAR_2;
        VAR_4->dest_port = VAR_0;
        VAR_4->udpcsum = 0;
        VAR_4->udp6zerocsumtx = 0;
        VAR_4->udp6zerocsumrx = 0;
}
