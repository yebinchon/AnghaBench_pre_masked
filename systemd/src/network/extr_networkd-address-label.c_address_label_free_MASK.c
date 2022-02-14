
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ section; TYPE_1__* network; } ;
struct TYPE_6__ {scalar_t__ n_address_labels; int address_labels_by_section; int address_labels; } ;
typedef TYPE_2__ AddressLabel ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(AddressLabel *VAR_1) {
        if (!VAR_1)
                return;

        if (VAR_1->network) {
                FUNC_0(VAR_0, VAR_1->network->address_labels, VAR_1);
                FUNC_1(VAR_1->network->n_address_labels > 0);
                VAR_1->network->n_address_labels--;

                if (VAR_1->section) {
                        FUNC_3(VAR_1->network->address_labels_by_section, VAR_1->section);
                        FUNC_4(VAR_1->section);
                }
        }

        FUNC_2(VAR_1);
}
