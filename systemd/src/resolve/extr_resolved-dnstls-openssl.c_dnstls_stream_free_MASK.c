
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ssl; } ;
struct TYPE_6__ {TYPE_1__ dnstls_data; struct TYPE_6__* encrypted; } ;
typedef TYPE_2__ DnsStream ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(DnsStream *VAR_0) {
        FUNC_1(VAR_0);
        FUNC_1(VAR_0->encrypted);

        if (VAR_0->dnstls_data.ssl)
                FUNC_0(VAR_0->dnstls_data.ssl);
}
