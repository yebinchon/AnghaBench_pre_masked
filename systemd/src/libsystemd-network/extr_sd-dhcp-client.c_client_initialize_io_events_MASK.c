
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sd_event_io_handler_t ;
struct TYPE_7__ {int receive_message; int event_priority; int fd; struct TYPE_7__* event; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(
                sd_dhcp_client *VAR_1,
                sd_event_io_handler_t VAR_2) {

        int VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->event);

        VAR_3 = FUNC_2(VAR_1->event, &VAR_1->receive_message,
                            VAR_1->fd, VAR_0, VAR_2,
                            VAR_1);
        if (VAR_3 < 0)
                goto error;

        VAR_3 = FUNC_4(VAR_1->receive_message,
                                         VAR_1->event_priority);
        if (VAR_3 < 0)
                goto error;

        VAR_3 = FUNC_3(VAR_1->receive_message, "dhcp4-receive-message");
        if (VAR_3 < 0)
                goto error;

error:
        if (VAR_3 < 0)
                FUNC_1(VAR_1, VAR_3);

        return 0;
}
