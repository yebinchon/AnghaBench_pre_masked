
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {scalar_t__ client_fd; int client_event_source; TYPE_1__* context; int sa_family; } ;
typedef struct sockaddr* socklen_t ;
struct TYPE_2__ {int event; } ;
typedef struct sockaddr Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (scalar_t__,struct sockaddr*,struct sockaddr*) ;
 int VAR_6 ;
 int FUNC_2 (struct sockaddr*) ;
 int FUNC_3 (struct sockaddr*) ;
 int VAR_7 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int *,scalar_t__,int ,int ,struct sockaddr*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int FUNC_8(Connection *VAR_8, struct sockaddr *VAR_9, socklen_t VAR_10) {
        int VAR_11;

        FUNC_0(VAR_8);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        VAR_8->client_fd = FUNC_7(VAR_9->sa_family, VAR_5|VAR_4|VAR_3, 0);
        if (VAR_8->client_fd < 0) {
                FUNC_4(VAR_7, "Failed to get remote socket: %m");
                goto fail;
        }

        VAR_11 = FUNC_1(VAR_8->client_fd, VAR_9, VAR_10);
        if (VAR_11 < 0) {
                if (VAR_7 == VAR_0) {
                        VAR_11 = FUNC_5(VAR_8->context->event, &VAR_8->client_event_source, VAR_8->client_fd, VAR_1, VAR_6, VAR_8);
                        if (VAR_11 < 0) {
                                FUNC_4(VAR_11, "Failed to add connection socket: %m");
                                goto fail;
                        }

                        VAR_11 = FUNC_6(VAR_8->client_event_source, VAR_2);
                        if (VAR_11 < 0) {
                                FUNC_4(VAR_11, "Failed to enable oneshot event source: %m");
                                goto fail;
                        }
                } else {
                        FUNC_4(VAR_7, "Failed to connect to remote host: %m");
                        goto fail;
                }
        } else {
                VAR_11 = FUNC_2(VAR_8);
                if (VAR_11 < 0)
                        goto fail;
        }

        return 0;

fail:
        FUNC_3(VAR_8);
        return 0;
}
