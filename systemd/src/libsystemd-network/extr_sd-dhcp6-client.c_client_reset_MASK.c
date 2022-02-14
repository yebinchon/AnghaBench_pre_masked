
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int timeout_t2; int timeout_t1; int timeout_resend_expire; int timeout_resend; scalar_t__ retransmit_count; scalar_t__ retransmit_time; scalar_t__ transaction_start; scalar_t__ transaction_id; int receive_message; int lease; } ;
typedef TYPE_1__ sd_dhcp6_client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(sd_dhcp6_client *VAR_1) {
        FUNC_0(VAR_1);

        VAR_1->lease = FUNC_2(VAR_1->lease);

        VAR_1->receive_message =
                FUNC_3(VAR_1->receive_message);

        VAR_1->transaction_id = 0;
        VAR_1->transaction_start = 0;

        VAR_1->retransmit_time = 0;
        VAR_1->retransmit_count = 0;

        (void) FUNC_1(VAR_1->timeout_resend);
        (void) FUNC_1(VAR_1->timeout_resend_expire);
        (void) FUNC_1(VAR_1->timeout_t1);
        (void) FUNC_1(VAR_1->timeout_t2);

        VAR_1->state = VAR_0;

        return 0;
}
