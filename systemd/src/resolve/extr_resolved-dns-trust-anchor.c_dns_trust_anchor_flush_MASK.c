
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int negative_by_name; int revoked_by_rr; int positive_by_key; } ;
typedef TYPE_1__ DnsTrustAnchor ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(DnsTrustAnchor *VAR_2) {
        FUNC_0(VAR_2);

        VAR_2->positive_by_key = FUNC_1(VAR_2->positive_by_key, VAR_0);
        VAR_2->revoked_by_rr = FUNC_3(VAR_2->revoked_by_rr, VAR_1);
        VAR_2->negative_by_name = FUNC_2(VAR_2->negative_by_name);
}
