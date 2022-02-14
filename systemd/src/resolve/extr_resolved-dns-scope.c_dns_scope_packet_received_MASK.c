
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_4__ {int max_rtt; int resend_timeout; } ;
typedef TYPE_1__ DnsScope ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(DnsScope *VAR_2, usec_t VAR_3) {
        FUNC_2(VAR_2);

        if (VAR_3 <= VAR_2->max_rtt)
                return;

        VAR_2->max_rtt = VAR_3;
        VAR_2->resend_timeout = FUNC_1(FUNC_0(VAR_1, VAR_2->max_rtt * 2), VAR_0);
}
