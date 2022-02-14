
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int ngx_uint_t ;
struct TYPE_15__ {scalar_t__ last_modified_time; } ;
struct TYPE_13__ {TYPE_2__* if_modified_since; } ;
struct TYPE_16__ {TYPE_5__ headers_out; TYPE_4__* connection; TYPE_3__ headers_in; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ if_modified_since; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {int log; } ;
struct TYPE_11__ {int len; int data; } ;
struct TYPE_12__ {TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static ngx_uint_t
FUNC_3(ngx_http_request_t *VAR_4)
{
    time_t VAR_5;
    ngx_http_core_loc_conf_t *VAR_6;

    if (VAR_4->headers_out.last_modified_time == (time_t) -1) {
        return 1;
    }

    VAR_6 = FUNC_0(VAR_4, VAR_3);

    if (VAR_6->if_modified_since == VAR_1) {
        return 1;
    }

    VAR_5 = FUNC_2(VAR_4->headers_in.if_modified_since->value.data,
                              VAR_4->headers_in.if_modified_since->value.len);

    FUNC_1(VAR_2, VAR_4->connection->log, 0,
                   "http ims:%T lm:%T", VAR_5, VAR_4->headers_out.last_modified_time);

    if (VAR_5 == VAR_4->headers_out.last_modified_time) {
        return 0;
    }

    if (VAR_6->if_modified_since == VAR_0
        || VAR_5 < VAR_4->headers_out.last_modified_time)
    {
        return 1;
    }

    return 0;
}
