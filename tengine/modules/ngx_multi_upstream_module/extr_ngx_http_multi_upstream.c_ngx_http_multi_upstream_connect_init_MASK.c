
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int ngx_queue_t ;
struct TYPE_25__ {TYPE_8__* data; } ;
typedef TYPE_5__ ngx_multi_data_t ;
struct TYPE_26__ {int connected; int data; } ;
typedef TYPE_6__ ngx_multi_connection_t ;
struct TYPE_24__ {scalar_t__ limit; TYPE_9__* connection; int * out; int ** last; } ;
struct TYPE_23__ {int sendfile; TYPE_8__* filter_ctx; } ;
struct TYPE_27__ {TYPE_4__ writer; TYPE_3__ output; int read_event_handler; int write_event_handler; } ;
typedef TYPE_7__ ngx_http_upstream_t ;
struct TYPE_28__ {TYPE_7__* upstream; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_29__ {int pool; int sendfile; TYPE_2__* write; TYPE_1__* read; TYPE_8__* data; int log; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_20__ {size_t nelts; TYPE_5__* elts; } ;
typedef TYPE_10__ ngx_array_t ;
struct TYPE_22__ {void* handler; } ;
struct TYPE_21__ {void* handler; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_10__*,int ,int,int) ;
 TYPE_5__* FUNC_1 (TYPE_10__*) ;
 TYPE_6__* FUNC_2 (TYPE_9__*) ;
 void* VAR_2 ;
 int FUNC_3 (TYPE_9__*,TYPE_8__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_9__*) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

void
FUNC_8(ngx_connection_t *VAR_5)
{
    ngx_multi_connection_t *VAR_6;
    ngx_http_request_t *VAR_7, *VAR_8;
    ngx_http_upstream_t *VAR_9;
    ngx_queue_t *VAR_10, *VAR_11;
    ngx_array_t VAR_12;
    ngx_multi_data_t *VAR_13;
    size_t VAR_14;

    FUNC_4(VAR_0, VAR_5->log, 0,
                   "multi: http upstream init connection: %p", VAR_5);

    VAR_7 = VAR_5->data;
    VAR_9 = VAR_7->upstream;

    VAR_5->read->handler = VAR_2;
    VAR_5->write->handler = VAR_2;

    VAR_9->write_event_handler = VAR_4;
    VAR_9->read_event_handler = VAR_3;
    VAR_9->output.filter_ctx = VAR_7;
    VAR_9->output.sendfile = VAR_5->sendfile;

    VAR_9->writer.out = ((void*)0);
    VAR_9->writer.last = &VAR_9->writer.out;
    VAR_9->writer.connection = VAR_5;
    VAR_9->writer.limit = 0;



    VAR_6 = FUNC_2(VAR_5);
    VAR_6->connected = 1;
    VAR_10 = &VAR_6->data;

    if (VAR_1 != FUNC_0(&VAR_12, VAR_5->pool, 4, sizeof(ngx_multi_data_t))) {
        return;
    }

    for (VAR_11 = FUNC_5(VAR_10);
            VAR_11 != FUNC_7(VAR_10);
            VAR_11 = FUNC_6(VAR_11))
    {
        VAR_13 = FUNC_1(&VAR_12);
        if (VAR_13 == ((void*)0)) {
            return;
        }
        *VAR_13 = *(ngx_multi_data_t*) VAR_11;
    }

    VAR_13 = VAR_12.elts;
    for (VAR_14=0; VAR_14 < VAR_12.nelts; VAR_14++) {

        VAR_8 = VAR_13[VAR_14].data;

        FUNC_3(VAR_5, VAR_8);
    }
}
