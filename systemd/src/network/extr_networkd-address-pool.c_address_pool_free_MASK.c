
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* manager; } ;
struct TYPE_6__ {int address_pools; } ;
typedef TYPE_2__ AddressPool ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(AddressPool *VAR_1) {

        if (!VAR_1)
                return;

        if (VAR_1->manager)
                FUNC_0(VAR_0, VAR_1->manager->address_pools, VAR_1);

        FUNC_1(VAR_1);
}
