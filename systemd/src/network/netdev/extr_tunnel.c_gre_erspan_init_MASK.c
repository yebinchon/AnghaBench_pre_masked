
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int kind; int pmtudisc; int gre_erspan_sequence; int fou_encap_type; } ;
typedef TYPE_1__ Tunnel ;
typedef TYPE_1__ NetDev ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;



 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(NetDev *VAR_1) {
        Tunnel *VAR_2;

        FUNC_3(VAR_1);

        switch (VAR_1->kind) {
        case 129:
                VAR_2 = FUNC_1(VAR_1);
                break;
        case 130:
                VAR_2 = FUNC_0(VAR_1);
                break;
        case 128:
                VAR_2 = FUNC_2(VAR_1);
                break;
        default:
                FUNC_4("invalid netdev kind");
        }

        FUNC_3(VAR_2);

        VAR_2->pmtudisc = 1;
        VAR_2->gre_erspan_sequence = -1;
        VAR_2->fou_encap_type = VAR_0;
}
