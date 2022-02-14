
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {TYPE_1__* connection; int write_event_handler; scalar_t__ discard_body; int read_event_handler; int http_state; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_13__ {int send_lowat; int send_timeout; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {scalar_t__ delayed; scalar_t__ ready; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_11__ {TYPE_4__* write; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_7)
{
    ngx_event_t *VAR_8;
    ngx_http_core_loc_conf_t *VAR_9;

    VAR_7->http_state = VAR_1;

    VAR_7->read_event_handler = VAR_7->discard_body ?
                                VAR_4:
                                VAR_5;
    VAR_7->write_event_handler = VAR_6;

    VAR_8 = VAR_7->connection->write;

    if (VAR_8->ready && VAR_8->delayed) {
        return VAR_2;
    }

    VAR_9 = FUNC_3(VAR_7, VAR_3);
    if (!VAR_8->delayed) {
        FUNC_0(VAR_8, VAR_9->send_timeout);
    }

    if (FUNC_1(VAR_8, VAR_9->send_lowat) != VAR_2) {
        FUNC_2(VAR_7, 0);
        return VAR_0;
    }

    return VAR_2;
}
