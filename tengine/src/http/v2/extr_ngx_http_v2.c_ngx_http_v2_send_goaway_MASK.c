
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_1__* first; } ;
typedef TYPE_3__ ngx_http_v2_out_frame_t ;
struct TYPE_14__ {int last_sid; TYPE_2__* connection; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_15__ {int last; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_12__ {int log; } ;
struct TYPE_11__ {TYPE_5__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_v2_connection_t *VAR_6, ngx_uint_t VAR_7)
{
    ngx_buf_t *VAR_8;
    ngx_http_v2_out_frame_t *VAR_9;

    FUNC_4(VAR_4, VAR_6->connection->log, 0,
                   "http2 send GOAWAY frame: last sid %ui, error %ui",
                   VAR_6->last_sid, VAR_7);

    VAR_9 = FUNC_0(VAR_6, VAR_2,
                                  VAR_1,
                                  VAR_3, 0);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = VAR_9->first->buf;

    VAR_8->last = FUNC_2(VAR_8->last, VAR_6->last_sid);
    VAR_8->last = FUNC_3(VAR_8->last, VAR_7);

    FUNC_1(VAR_6, VAR_9);

    return VAR_5;
}
