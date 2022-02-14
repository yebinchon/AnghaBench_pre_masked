
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ protocol; TYPE_2__* manager; TYPE_1__* link; } ;
struct TYPE_9__ {struct TYPE_9__* servers_next; } ;
struct TYPE_8__ {TYPE_3__* dns_servers; } ;
struct TYPE_7__ {TYPE_3__* dns_servers; } ;
typedef TYPE_3__ DnsServer ;
typedef TYPE_4__ DnsScope ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;

unsigned FUNC_1(DnsScope *VAR_1) {
        unsigned VAR_2 = 0;
        DnsServer *VAR_3;

        FUNC_0(VAR_1);

        if (VAR_1->protocol != VAR_0)
                return 0;

        if (VAR_1->link)
                VAR_3 = VAR_1->link->dns_servers;
        else
                VAR_3 = VAR_1->manager->dns_servers;

        for (; VAR_3; VAR_3 = VAR_3->servers_next)
                VAR_2++;

        return VAR_2;
}
