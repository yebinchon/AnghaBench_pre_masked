
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ protocol; TYPE_1__* link; } ;
struct TYPE_6__ {scalar_t__ default_route; } ;
typedef TYPE_2__ DnsScope ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

bool FUNC_2(DnsScope *VAR_1) {
        FUNC_0(VAR_1);


        if (VAR_1->protocol != VAR_0)
                return 0;


        if (!VAR_1->link)
                return 1;



        if (VAR_1->link->default_route >= 0)
                return VAR_1->link->default_route;



        return !FUNC_1(VAR_1);
}
