
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int type; } ;
struct TYPE_14__ {TYPE_1__* unicast_scope; TYPE_3__* current_dns_server; } ;
struct TYPE_13__ {int cache; } ;
typedef TYPE_2__ Manager ;
typedef TYPE_3__ DnsServer ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,char*) ;

DnsServer *FUNC_8(Manager *VAR_0, DnsServer *VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->current_dns_server == VAR_1)
                return VAR_1;

        if (VAR_1)
                FUNC_6("Switching to %s DNS server %s.",
                          FUNC_4(VAR_1->type),
                          FUNC_3(VAR_1));

        FUNC_5(VAR_0->current_dns_server);
        VAR_0->current_dns_server = FUNC_2(VAR_1);

        if (VAR_0->unicast_scope)
                FUNC_1(&VAR_0->unicast_scope->cache);

        (void) FUNC_7(VAR_0, "CurrentDNSServer");

        return VAR_1;
}
