
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dns_servers; scalar_t__ fallback_dns_servers; TYPE_1__* current_dns_server; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ servers_next; scalar_t__ linked; } ;
typedef TYPE_2__ Manager ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

void FUNC_2(Manager *VAR_1) {
        FUNC_0(VAR_1);



        if (!VAR_1->current_dns_server)
                return;



        if (VAR_1->current_dns_server->linked && VAR_1->current_dns_server->servers_next) {
                FUNC_1(VAR_1, VAR_1->current_dns_server->servers_next);
                return;
        }



        if (VAR_1->current_dns_server->type == VAR_0)
                FUNC_1(VAR_1, VAR_1->fallback_dns_servers);
        else
                FUNC_1(VAR_1, VAR_1->dns_servers);
}
