
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; int manager; scalar_t__ link; } ;
typedef TYPE_1__ DnsScope ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(DnsScope *VAR_1) {
        FUNC_0(VAR_1);

        if (VAR_1->protocol != VAR_0)
                return;

        if (VAR_1->link)
                FUNC_1(VAR_1->link);
        else
                FUNC_2(VAR_1->manager);
}
