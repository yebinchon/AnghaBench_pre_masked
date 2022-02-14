
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct addrinfo {int ai_flags; int ai_socktype; } ;
struct TYPE_14__ {scalar_t__ type; int string; int * names_next; } ;
struct TYPE_13__ {int exhausted_servers; scalar_t__ poll_interval_usec; scalar_t__ poll_interval_max_usec; TYPE_3__* current_server_name; int resolve_query; int resolve; int event_retry; int event; int * fallback_servers; int * system_servers; int * link_servers; TYPE_1__* current_server_address; int ratelimit; } ;
struct TYPE_12__ {scalar_t__ addresses_next; } ;
typedef int ServerName ;
typedef TYPE_2__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *,int ,char*,struct addrinfo*,int ,int *,TYPE_2__*) ;
 int FUNC_12 (int ,int *,int ,scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_3__*) ;

int FUNC_15(Manager *VAR_7) {
        int VAR_8;

        FUNC_0(VAR_7);

        FUNC_5(VAR_7);

        VAR_7->event_retry = FUNC_13(VAR_7->event_retry);
        if (!FUNC_9(&VAR_7->ratelimit)) {
                FUNC_2("Delaying attempts to contact servers.");

                VAR_8 = FUNC_12(VAR_7->event, &VAR_7->event_retry, FUNC_1(), FUNC_8(FUNC_1()) + VAR_2, 0, VAR_6, VAR_7);
                if (VAR_8 < 0)
                        return FUNC_3(VAR_8, "Failed to create retry timer: %m");

                return 0;
        }



        if (VAR_7->current_server_address && VAR_7->current_server_address->addresses_next)
                FUNC_6(VAR_7, VAR_7->current_server_address->addresses_next);
        else {
                struct addrinfo VAR_9 = {
                        .ai_flags = VAR_1|VAR_0,
                        .ai_socktype = VAR_4,
                };


                if (VAR_7->current_server_name && VAR_7->current_server_name->names_next)
                        FUNC_7(VAR_7, VAR_7->current_server_name->names_next);
                else {
                        ServerName *VAR_10;
                        bool VAR_11 = 1;
                        if (!VAR_7->current_server_name || VAR_7->current_server_name->type == VAR_3) {
                                VAR_10 = VAR_7->system_servers;
                                if (!VAR_10)
                                        VAR_10 = VAR_7->link_servers;
                        } else {
                                VAR_10 = VAR_7->link_servers;
                                if (!VAR_10)
                                        VAR_10 = VAR_7->system_servers;
                                else
                                        VAR_11 = 0;
                        }

                        if (!VAR_10)
                                VAR_10 = VAR_7->fallback_servers;

                        if (!VAR_10) {
                                FUNC_7(VAR_7, ((void*)0));
                                FUNC_2("No server found.");
                                return 0;
                        }

                        if (VAR_11 && !VAR_7->exhausted_servers && VAR_7->poll_interval_usec) {
                                FUNC_2("Waiting after exhausting servers.");
                                VAR_8 = FUNC_12(VAR_7->event, &VAR_7->event_retry, FUNC_1(), FUNC_8(FUNC_1()) + VAR_7->poll_interval_usec, 0, VAR_6, VAR_7);
                                if (VAR_8 < 0)
                                        return FUNC_3(VAR_8, "Failed to create retry timer: %m");

                                VAR_7->exhausted_servers = 1;


                                if (VAR_7->poll_interval_usec < VAR_7->poll_interval_max_usec)
                                        VAR_7->poll_interval_usec *= 2;

                                return 0;
                        }

                        VAR_7->exhausted_servers = 0;

                        FUNC_7(VAR_7, VAR_10);
                }



                FUNC_10();


                FUNC_14(VAR_7->current_server_name);

                FUNC_2("Resolving %s...", VAR_7->current_server_name->string);

                VAR_8 = FUNC_11(VAR_7->resolve, &VAR_7->resolve_query, VAR_7->current_server_name->string, "123", &VAR_9, VAR_5, ((void*)0), VAR_7);
                if (VAR_8 < 0)
                        return FUNC_3(VAR_8, "Failed to create resolver: %m");

                return 1;
        }

        VAR_8 = FUNC_4(VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        return 1;
}
