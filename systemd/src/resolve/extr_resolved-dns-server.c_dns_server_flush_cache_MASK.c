
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int cache; } ;
struct TYPE_9__ {TYPE_2__* manager; TYPE_1__* link; } ;
struct TYPE_8__ {TYPE_4__* unicast_scope; TYPE_3__* current_dns_server; } ;
struct TYPE_7__ {TYPE_4__* unicast_scope; TYPE_3__* current_dns_server; } ;
typedef TYPE_3__ DnsServer ;
typedef TYPE_4__ DnsScope ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(DnsServer *VAR_0) {
        DnsServer *VAR_1;
        DnsScope *VAR_2;

        FUNC_0(VAR_0);



        VAR_1 = VAR_0->link ? VAR_0->link->current_dns_server : VAR_0->manager->current_dns_server;
        if (VAR_1 != VAR_0)
                return;

        VAR_2 = VAR_0->link ? VAR_0->link->unicast_scope : VAR_0->manager->unicast_scope;
        if (!VAR_2)
                return;

        FUNC_1(&VAR_2->cache);
}
