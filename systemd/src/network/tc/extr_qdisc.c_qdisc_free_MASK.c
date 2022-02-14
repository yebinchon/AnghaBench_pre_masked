
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ section; TYPE_1__* network; } ;
struct TYPE_5__ {int qdiscs_by_section; } ;
typedef TYPE_2__ QDiscs ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(QDiscs *VAR_0) {
        if (!VAR_0)
                return;

        if (VAR_0->network && VAR_0->section)
                FUNC_2(VAR_0->network->qdiscs_by_section, VAR_0->section);

        FUNC_1(VAR_0->section);

        FUNC_0(VAR_0);
}
