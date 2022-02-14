
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int resolve_query; int client_to_server_buffer; int server_to_client_buffer; int client_fd; int server_fd; int client_event_source; int server_event_source; TYPE_1__* context; } ;
struct TYPE_7__ {int connections; } ;
typedef TYPE_2__ Connection ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(Connection *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->context)
                FUNC_6(VAR_0->context->connections, VAR_0);

        FUNC_4(VAR_0->server_event_source);
        FUNC_4(VAR_0->client_event_source);

        FUNC_2(VAR_0->server_fd);
        FUNC_2(VAR_0->client_fd);

        FUNC_3(VAR_0->server_to_client_buffer);
        FUNC_3(VAR_0->client_to_server_buffer);

        FUNC_5(VAR_0->resolve_query);

        FUNC_1(VAR_0);
}
