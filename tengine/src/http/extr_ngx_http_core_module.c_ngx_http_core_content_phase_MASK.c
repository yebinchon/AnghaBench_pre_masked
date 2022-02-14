
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {char* data; int len; } ;
struct TYPE_16__ {scalar_t__ (* content_handler ) (TYPE_4__*) ;TYPE_2__* connection; TYPE_1__ uri; int phase_handler; int write_event_handler; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ (* handler ) (TYPE_4__*) ;scalar_t__ checker; } ;
typedef TYPE_5__ ngx_http_phase_handler_t ;
struct TYPE_14__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int * FUNC_1 (TYPE_4__*,TYPE_3__*,size_t*,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;

ngx_int_t
FUNC_6(ngx_http_request_t *VAR_8,
    ngx_http_phase_handler_t *VAR_9)
{
    size_t VAR_10;
    ngx_int_t VAR_11;
    ngx_str_t VAR_12;

    if (VAR_8->content_handler) {
        VAR_8->write_event_handler = VAR_7;
        FUNC_0(VAR_8, VAR_8->content_handler(VAR_8));
        return VAR_6;
    }

    FUNC_2(VAR_4, VAR_8->connection->log, 0,
                   "content phase: %ui", VAR_8->phase_handler);

    VAR_11 = VAR_9->handler(VAR_8);

    if (VAR_11 != VAR_1) {
        FUNC_0(VAR_8, VAR_11);
        return VAR_6;
    }



    VAR_9++;

    if (VAR_9->checker) {
        VAR_8->phase_handler++;
        return VAR_0;
    }



    if (VAR_8->uri.data[VAR_8->uri.len - 1] == '/') {

        if (FUNC_1(VAR_8, &VAR_12, &VAR_10, 0) != ((void*)0)) {
            FUNC_3(VAR_5, VAR_8->connection->log, 0,
                          "directory index of \"%s\" is forbidden", VAR_12.data);
        }

        FUNC_0(VAR_8, VAR_2);
        return VAR_6;
    }

    FUNC_3(VAR_5, VAR_8->connection->log, 0, "no handler found");

    FUNC_0(VAR_8, VAR_3);
    return VAR_6;
}
