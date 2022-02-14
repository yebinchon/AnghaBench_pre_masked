
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; } ;
typedef TYPE_1__ DnsScope ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;

bool FUNC_2(DnsScope *VAR_1, const char *VAR_2) {
        FUNC_0(VAR_1);

        if (VAR_1->protocol != VAR_0)
                return 0;

        return FUNC_1(VAR_2);
}
