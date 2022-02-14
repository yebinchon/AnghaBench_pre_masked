
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int options; int user_class; int vendor_class_identifier; int hostname; int req_opts; int lease; void* timeout_expire; void* timeout_t2; void* timeout_t1; void* timeout_resend; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (void*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static sd_dhcp_client *FUNC_9(sd_dhcp_client *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_2(VAR_0, "FREE");

        VAR_0->timeout_resend = FUNC_7(VAR_0->timeout_resend);
        VAR_0->timeout_t1 = FUNC_7(VAR_0->timeout_t1);
        VAR_0->timeout_t2 = FUNC_7(VAR_0->timeout_t2);
        VAR_0->timeout_expire = FUNC_7(VAR_0->timeout_expire);

        FUNC_0(VAR_0);

        FUNC_5(VAR_0);

        FUNC_6(VAR_0->lease);

        FUNC_1(VAR_0->req_opts);
        FUNC_1(VAR_0->hostname);
        FUNC_1(VAR_0->vendor_class_identifier);
        VAR_0->user_class = FUNC_8(VAR_0->user_class);
        FUNC_4(VAR_0->options);
        return FUNC_3(VAR_0);
}
