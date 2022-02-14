
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int connection_type; scalar_t__ content_length_n; scalar_t__ chunked; } ;
struct TYPE_15__ {int keepalive; int lingering_close; int valid_location; int (* write_event_handler ) (TYPE_5__*) ;scalar_t__ gzip_vary; scalar_t__ gzip_ok; scalar_t__ gzip_tested; scalar_t__ phase_handler; TYPE_3__ headers_in; int http_version; int internal; TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_14__ {scalar_t__ server_rewrite_index; } ;
struct TYPE_16__ {TYPE_4__ phase_engine; } ;
typedef TYPE_6__ ngx_http_core_main_conf_t ;
struct TYPE_12__ {TYPE_1__* log; } ;
struct TYPE_11__ {int * action; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int ) ;

void
FUNC_2(ngx_http_request_t *VAR_2)
{
    ngx_http_core_main_conf_t *VAR_3;

    VAR_2->connection->log->action = ((void*)0);

    if (!VAR_2->internal) {
        switch (VAR_2->headers_in.connection_type) {
        case 0:
            VAR_2->keepalive = (VAR_2->http_version > VAR_0);
            break;

        case 129:
            VAR_2->keepalive = 0;
            break;

        case 128:
            VAR_2->keepalive = 1;
            break;
        }

        VAR_2->lingering_close = (VAR_2->headers_in.content_length_n > 0
                              || VAR_2->headers_in.chunked);
        VAR_2->phase_handler = 0;

    } else {
        VAR_3 = FUNC_1(VAR_2, VAR_1);
        VAR_2->phase_handler = VAR_3->phase_engine.server_rewrite_index;
    }

    VAR_2->valid_location = 1;






    VAR_2->write_event_handler = FUNC_0;
    FUNC_0(VAR_2);
}
