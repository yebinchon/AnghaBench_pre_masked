
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int rst_sent; int skip_data; TYPE_2__* request; TYPE_1__* node; } ;
typedef TYPE_3__ ngx_http_v2_stream_t ;
typedef int ngx_http_v2_connection_t ;
struct TYPE_11__ {int (* handler ) (TYPE_4__*) ;} ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_12__ {int error; TYPE_4__* read; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_9__ {TYPE_5__* connection; } ;
struct TYPE_8__ {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_v2_connection_t *VAR_2,
    ngx_http_v2_stream_t *VAR_3, ngx_uint_t VAR_4)
{
    ngx_event_t *VAR_5;
    ngx_connection_t *VAR_6;

    if (VAR_3->rst_sent) {
        return VAR_1;
    }

    if (FUNC_0(VAR_2, VAR_3->node->id, VAR_4)
        == VAR_0)
    {
        return VAR_0;
    }

    VAR_3->rst_sent = 1;
    VAR_3->skip_data = 1;

    VAR_6 = VAR_3->request->connection;
    VAR_6->error = 1;

    VAR_5 = VAR_6->read;
    VAR_5->handler(VAR_5);

    return VAR_1;
}
