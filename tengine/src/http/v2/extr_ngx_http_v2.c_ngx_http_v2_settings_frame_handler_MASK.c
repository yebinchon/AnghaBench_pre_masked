
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_6__* first; } ;
typedef TYPE_1__ ngx_http_v2_out_frame_t ;
struct TYPE_8__ {int pool; } ;
typedef TYPE_2__ ngx_http_v2_connection_t ;
struct TYPE_9__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_3__ ngx_buf_t ;
struct TYPE_10__ {TYPE_3__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_v2_connection_t *VAR_2,
    ngx_http_v2_out_frame_t *VAR_3)
{
    ngx_buf_t *VAR_4;

    VAR_4 = VAR_3->first->buf;

    if (VAR_4->pos != VAR_4->last) {
        return VAR_0;
    }

    FUNC_0(VAR_2->pool, VAR_3->first);

    return VAR_1;
}
