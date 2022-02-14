
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sa; scalar_t__ section; TYPE_1__* macsec; } ;
struct TYPE_5__ {int receive_associations_by_section; } ;
typedef TYPE_2__ ReceiveAssociation ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(ReceiveAssociation *VAR_0) {
        if (!VAR_0)
                return;

        if (VAR_0->macsec && VAR_0->section)
                FUNC_2(VAR_0->macsec->receive_associations_by_section, VAR_0->section);

        FUNC_1(VAR_0->section);
        FUNC_3(&VAR_0->sa);

        FUNC_0(VAR_0);
}
