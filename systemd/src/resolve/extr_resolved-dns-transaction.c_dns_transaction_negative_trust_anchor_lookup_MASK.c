
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* scope; } ;
struct TYPE_9__ {TYPE_2__* link; TYPE_1__* manager; } ;
struct TYPE_8__ {int dnssec_negative_trust_anchors; } ;
struct TYPE_7__ {int trust_anchor; } ;
typedef TYPE_4__ DnsTransaction ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static int FUNC_3(DnsTransaction *VAR_0, const char *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);





        VAR_2 = FUNC_1(&VAR_0->scope->manager->trust_anchor, VAR_1);
        if (VAR_2 != 0)
                return VAR_2;

        if (!VAR_0->scope->link)
                return 0;

        return FUNC_2(VAR_0->scope->link->dnssec_negative_trust_anchors, VAR_1);
}
