
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* key; } ;
struct TYPE_9__ {int revoked_by_rr; } ;
struct TYPE_8__ {int type; } ;
typedef TYPE_2__ DnsTrustAnchor ;
typedef TYPE_3__ DnsResourceRecord ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_3__*) ;

int FUNC_3(DnsTrustAnchor *VAR_2, DnsResourceRecord *VAR_3) {
        FUNC_1(VAR_2);

        if (!FUNC_0(VAR_3->key->type, VAR_1, VAR_0))
                return 0;

        return FUNC_2(VAR_2->revoked_by_rr, VAR_3);
}
