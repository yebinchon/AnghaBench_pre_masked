
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ candidates; } ;
typedef TYPE_1__ DnsQuery ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(DnsQuery *VAR_0) {
        FUNC_0(VAR_0);

        while (VAR_0->candidates)
                FUNC_1(VAR_0->candidates);
}
