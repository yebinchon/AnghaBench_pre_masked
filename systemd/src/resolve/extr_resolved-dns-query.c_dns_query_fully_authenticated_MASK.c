
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int previous_redirect_unauthenticated; scalar_t__ answer_authenticated; } ;
typedef TYPE_1__ DnsQuery ;


 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1(DnsQuery *VAR_0) {
        FUNC_0(VAR_0);

        return VAR_0->answer_authenticated && !VAR_0->previous_redirect_unauthenticated;
}
