
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ n_stdout_streams; int stdout_streams_notify_queue; int stdout_streams; } ;
struct TYPE_6__ {struct TYPE_6__* buffer; struct TYPE_6__* state_file; struct TYPE_6__* unit_id; struct TYPE_6__* identifier; struct TYPE_6__* label; int fd; scalar_t__ event_source; TYPE_4__* server; scalar_t__ in_notify_queue; scalar_t__ context; } ;
typedef TYPE_1__ StdoutStream ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_7(StdoutStream *VAR_3) {
        if (!VAR_3)
                return;

        if (VAR_3->server) {

                if (VAR_3->context)
                        FUNC_2(VAR_3->server, VAR_3->context);

                FUNC_1(VAR_3->server->n_stdout_streams > 0);
                VAR_3->server->n_stdout_streams--;
                FUNC_0(VAR_1, VAR_3->server->stdout_streams, VAR_3);

                if (VAR_3->in_notify_queue)
                        FUNC_0(VAR_2, VAR_3->server->stdout_streams_notify_queue, VAR_3);
        }

        if (VAR_3->event_source) {
                FUNC_5(VAR_3->event_source, VAR_0);
                VAR_3->event_source = FUNC_6(VAR_3->event_source);
        }

        FUNC_4(VAR_3->fd);
        FUNC_3(VAR_3->label);
        FUNC_3(VAR_3->identifier);
        FUNC_3(VAR_3->unit_id);
        FUNC_3(VAR_3->state_file);
        FUNC_3(VAR_3->buffer);

        FUNC_3(VAR_3);
}
