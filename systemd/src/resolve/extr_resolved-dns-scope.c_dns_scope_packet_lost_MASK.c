
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_4__ {int resend_timeout; } ;
typedef TYPE_1__ DnsScope ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(DnsScope *VAR_1, usec_t VAR_2) {
        FUNC_1(VAR_1);

        if (VAR_1->resend_timeout <= VAR_2)
                VAR_1->resend_timeout = FUNC_0(VAR_1->resend_timeout * 2, VAR_0);
}
