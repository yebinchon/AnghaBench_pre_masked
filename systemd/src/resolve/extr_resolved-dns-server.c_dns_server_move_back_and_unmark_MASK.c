
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int marked; int type; TYPE_1__* manager; int dns_servers; struct TYPE_11__* link; int servers_next; int linked; } ;
struct TYPE_10__ {int fallback_dns_servers; int dns_servers; } ;
typedef TYPE_2__ DnsServer ;





 int FUNC_0 (int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

void FUNC_5(DnsServer *VAR_1) {
        DnsServer *VAR_2;

        FUNC_3(VAR_1);

        if (!VAR_1->marked)
                return;

        VAR_1->marked = 0;

        if (!VAR_1->linked || !VAR_1->servers_next)
                return;




        switch (VAR_1->type) {

        case 129:
                FUNC_3(VAR_1->link);
                FUNC_0(VAR_0, VAR_1, VAR_2);
                FUNC_2(VAR_0, VAR_1->link->dns_servers, VAR_1);
                FUNC_1(VAR_0, VAR_1->link->dns_servers, VAR_2, VAR_1);
                break;

        case 128:
                FUNC_0(VAR_0, VAR_1, VAR_2);
                FUNC_2(VAR_0, VAR_1->manager->dns_servers, VAR_1);
                FUNC_1(VAR_0, VAR_1->manager->dns_servers, VAR_2, VAR_1);
                break;

        case 130:
                FUNC_0(VAR_0, VAR_1, VAR_2);
                FUNC_2(VAR_0, VAR_1->manager->fallback_dns_servers, VAR_1);
                FUNC_1(VAR_0, VAR_1->manager->fallback_dns_servers, VAR_2, VAR_1);
                break;

        default:
                FUNC_4("Unknown server type");
        }
}
