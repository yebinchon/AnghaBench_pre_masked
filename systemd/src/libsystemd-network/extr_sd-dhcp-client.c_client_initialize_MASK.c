
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lease; scalar_t__ xid; int state; scalar_t__ attempt; int timeout_expire; int timeout_t2; int timeout_t1; int timeout_resend; int fd; int receive_message; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(sd_dhcp_client *VAR_2) {
        FUNC_0(VAR_2, -VAR_1);

        VAR_2->receive_message = FUNC_4(VAR_2->receive_message);

        VAR_2->fd = FUNC_1(VAR_2->fd);

        (void) FUNC_2(VAR_2->timeout_resend);
        (void) FUNC_2(VAR_2->timeout_t1);
        (void) FUNC_2(VAR_2->timeout_t2);
        (void) FUNC_2(VAR_2->timeout_expire);

        VAR_2->attempt = 0;

        VAR_2->state = VAR_0;
        VAR_2->xid = 0;

        VAR_2->lease = FUNC_3(VAR_2->lease);

        return 0;
}
