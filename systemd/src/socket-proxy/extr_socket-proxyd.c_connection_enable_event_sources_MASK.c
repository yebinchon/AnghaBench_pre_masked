
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ server_to_client_buffer_full; scalar_t__ server_to_client_buffer_size; scalar_t__ client_to_server_buffer_full; scalar_t__ client_to_server_buffer_size; scalar_t__ server_fd; scalar_t__ client_fd; scalar_t__ client_event_source; TYPE_1__* context; scalar_t__ server_event_source; } ;
struct TYPE_6__ {int event; } ;
typedef TYPE_2__ Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(Connection *VAR_3) {
        uint32_t VAR_4 = 0, VAR_5 = 0;
        int VAR_6;

        FUNC_0(VAR_3);

        if (VAR_3->server_to_client_buffer_full > 0)
                VAR_5 |= VAR_1;
        if (VAR_3->server_to_client_buffer_full < VAR_3->server_to_client_buffer_size)
                VAR_4 |= VAR_0;

        if (VAR_3->client_to_server_buffer_full > 0)
                VAR_4 |= VAR_1;
        if (VAR_3->client_to_server_buffer_full < VAR_3->client_to_server_buffer_size)
                VAR_5 |= VAR_0;

        if (VAR_3->server_event_source)
                VAR_6 = FUNC_3(VAR_3->server_event_source, VAR_4);
        else if (VAR_3->server_fd >= 0)
                VAR_6 = FUNC_2(VAR_3->context->event, &VAR_3->server_event_source, VAR_3->server_fd, VAR_4, VAR_2, VAR_3);
        else
                VAR_6 = 0;

        if (VAR_6 < 0)
                return FUNC_1(VAR_6, "Failed to set up server event source: %m");

        if (VAR_3->client_event_source)
                VAR_6 = FUNC_3(VAR_3->client_event_source, VAR_5);
        else if (VAR_3->client_fd >= 0)
                VAR_6 = FUNC_2(VAR_3->context->event, &VAR_3->client_event_source, VAR_3->client_fd, VAR_5, VAR_2, VAR_3);
        else
                VAR_6 = 0;

        if (VAR_6 < 0)
                return FUNC_1(VAR_6, "Failed to set up client event source: %m");

        return 0;
}
