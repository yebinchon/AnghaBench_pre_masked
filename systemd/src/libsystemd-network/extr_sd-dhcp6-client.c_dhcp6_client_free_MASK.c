
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int fqdn; int req_opts; int fd; void* timeout_t2; void* timeout_t1; void* timeout_resend_expire; void* timeout_resend; } ;
typedef TYPE_1__ sd_dhcp6_client ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (void*) ;

__attribute__((used)) static sd_dhcp6_client *FUNC_7(sd_dhcp6_client *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->timeout_resend = FUNC_6(VAR_0->timeout_resend);
        VAR_0->timeout_resend_expire = FUNC_6(VAR_0->timeout_resend_expire);
        VAR_0->timeout_t1 = FUNC_6(VAR_0->timeout_t1);
        VAR_0->timeout_t2 = FUNC_6(VAR_0->timeout_t2);

        FUNC_1(VAR_0);

        VAR_0->fd = FUNC_4(VAR_0->fd);

        FUNC_5(VAR_0);

        FUNC_2(VAR_0->req_opts);
        FUNC_2(VAR_0->fqdn);
        return FUNC_3(VAR_0);
}
