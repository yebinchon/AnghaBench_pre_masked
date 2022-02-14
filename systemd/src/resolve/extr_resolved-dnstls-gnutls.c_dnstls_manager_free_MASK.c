
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cert_cred; } ;
struct TYPE_6__ {TYPE_1__ dnstls_data; } ;
typedef TYPE_2__ Manager ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(Manager *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->dnstls_data.cert_cred)
                FUNC_1(VAR_0->dnstls_data.cert_cred);
}
