
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int receive_associations_by_section; int transmit_associations_by_section; int receive_channels_by_section; int receive_channels; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ MACsec ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(NetDev *VAR_3) {
        MACsec *VAR_4;

        FUNC_1(VAR_3);

        VAR_4 = FUNC_0(VAR_3);

        FUNC_1(VAR_4);

        FUNC_2(VAR_4->receive_channels, VAR_1);
        FUNC_2(VAR_4->receive_channels_by_section, VAR_1);
        FUNC_2(VAR_4->transmit_associations_by_section, VAR_2);
        FUNC_2(VAR_4->receive_associations_by_section, VAR_0);
}
