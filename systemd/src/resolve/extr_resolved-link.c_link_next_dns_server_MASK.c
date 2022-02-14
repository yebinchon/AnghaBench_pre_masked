
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dns_servers; TYPE_1__* current_dns_server; } ;
struct TYPE_6__ {scalar_t__ servers_next; scalar_t__ linked; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

void FUNC_2(Link *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->current_dns_server)
                return;



        if (VAR_0->current_dns_server->linked && VAR_0->current_dns_server->servers_next) {
                FUNC_1(VAR_0, VAR_0->current_dns_server->servers_next);
                return;
        }

        FUNC_1(VAR_0, VAR_0->dns_servers);
}
