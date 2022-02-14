
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ protocol; TYPE_2__* manager; TYPE_1__* link; } ;
struct TYPE_7__ {int * search_domains; } ;
struct TYPE_6__ {int * search_domains; } ;
typedef int DnsSearchDomain ;
typedef TYPE_3__ DnsScope ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

DnsSearchDomain *FUNC_1(DnsScope *VAR_1) {
        FUNC_0(VAR_1);

        if (VAR_1->protocol != VAR_0)
                return ((void*)0);

        if (VAR_1->link)
                return VAR_1->link->search_domains;

        return VAR_1->manager->search_domains;
}
