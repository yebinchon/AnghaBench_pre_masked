
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {int state; int start_delay; int fd; int ip_service_type; int port; TYPE_1__* lease; int ifindex; int last_addr; int attempt; int receive_message; int timeout_resend; int event_priority; struct TYPE_25__* event; } ;
typedef TYPE_2__ sd_dhcp_client ;
struct TYPE_24__ {int address; } ;
typedef TYPE_2__ DHCPMessage ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int const,int const) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int VAR_9 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int VAR_10 ;
 int FUNC_14 (int *,int ,TYPE_2__*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ,int ,int ) ;
 int FUNC_17 (TYPE_2__*,int *,int ,int ,int ,int ,TYPE_2__*,int ,char*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,int,int,int ) ;
 int FUNC_20 (TYPE_2__*,char*,...) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(sd_dhcp_client *VAR_11, DHCPMessage *VAR_12, int VAR_13) {
        FUNC_1(VAR_11);
        char VAR_14[VAR_3];
        int VAR_15 = 0, VAR_16 = 0;

        FUNC_3(VAR_11);
        FUNC_3(VAR_11->event);
        FUNC_3(VAR_12);

        switch (VAR_11->state) {
        case 129:

                VAR_15 = FUNC_7(VAR_11, VAR_12, VAR_13);
                if (VAR_15 >= 0) {

                        VAR_11->state = 130;
                        VAR_11->attempt = 0;

                        VAR_15 = FUNC_17(VAR_11->event, &VAR_11->timeout_resend,
                                             FUNC_15(),
                                             0, 0,
                                             VAR_10, VAR_11,
                                             VAR_11->event_priority, "dhcp4-resend-timer", 1);
                        if (VAR_15 < 0)
                                goto error;
                } else if (VAR_15 == -VAR_2)

                        return 0;

                break;

        case 132:
        case 130:
        case 131:
        case 133:

                VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_13);
                if (VAR_15 >= 0) {
                        VAR_11->start_delay = 0;
                        (void) FUNC_18(VAR_11->timeout_resend);
                        VAR_11->receive_message =
                                FUNC_21(VAR_11->receive_message);
                        VAR_11->fd = FUNC_4(VAR_11->fd);

                        if (FUNC_2(VAR_11->state, 130,
                                   132))
                                VAR_16 = VAR_7;
                        else if (VAR_15 != VAR_7)
                                VAR_16 = VAR_15;

                        VAR_11->state = 136;
                        VAR_11->attempt = 0;

                        VAR_11->last_addr = VAR_11->lease->address;

                        VAR_15 = FUNC_11(VAR_11);
                        if (VAR_15 < 0) {
                                FUNC_20(VAR_11, "could not set lease timeouts");
                                goto error;
                        }

                        VAR_15 = FUNC_16(VAR_11->ifindex, VAR_11->lease->address, VAR_11->port, VAR_11->ip_service_type);
                        if (VAR_15 < 0) {
                                FUNC_20(VAR_11, "could not bind UDP socket");
                                goto error;
                        }

                        VAR_11->fd = VAR_15;

                        FUNC_9(VAR_11, VAR_9);

                        if (VAR_16) {
                                FUNC_10(VAR_11, VAR_16);
                                if (VAR_11->state == 128)
                                        return 0;
                        }

                } else if (VAR_15 == -VAR_0) {

                        FUNC_10(VAR_11, VAR_6);

                        VAR_15 = FUNC_8(VAR_11);
                        if (VAR_15 < 0)
                                goto error;

                        VAR_15 = FUNC_12(VAR_11);
                        if (VAR_15 < 0)
                                goto error;

                        FUNC_20(VAR_11, "REBOOT in %s", FUNC_19(VAR_14, VAR_3,
                                                                                VAR_11->start_delay, VAR_8));

                        VAR_11->start_delay = FUNC_0(VAR_11->start_delay * 2,
                                                    VAR_5, VAR_4);

                        return 0;
                } else if (VAR_15 == -VAR_2)

                        return 0;

                break;

        case 136:
                VAR_15 = FUNC_6(VAR_11, VAR_12, VAR_13);
                if (VAR_15 >= 0) {
                        VAR_15 = FUNC_14(((void*)0), 0, VAR_11);
                        if (VAR_15 < 0)
                                goto error;
                } else if (VAR_15 == -VAR_2)

                        return 0;

                break;

        case 135:
        case 134:

                break;

        case 128:
                VAR_15 = -VAR_1;
                goto error;
        }

error:
        if (VAR_15 < 0)
                FUNC_13(VAR_11, VAR_15);

        return VAR_15;
}
