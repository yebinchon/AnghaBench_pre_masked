
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int ngx_uint_t ;
struct TYPE_10__ {int valid; int * data; int * len; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_stream_variable_value_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
struct TYPE_12__ {struct sockaddr* sockaddr; } ;
typedef TYPE_4__ ngx_stream_realip_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int pool; struct sockaddr* sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*) ;
 int * FUNC_1 (int ,int) ;
 int * FUNC_2 (int *,char*,int) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_stream_session_t *VAR_3,
    ngx_stream_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    ngx_uint_t VAR_6;
    struct sockaddr *VAR_7;
    ngx_stream_realip_ctx_t *VAR_8;

    VAR_8 = FUNC_3(VAR_3, VAR_2);

    VAR_7 = VAR_8 ? VAR_8->sockaddr : VAR_3->connection->sockaddr;

    VAR_4->len = 0;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;

    VAR_4->data = FUNC_1(VAR_3->connection->pool, sizeof("65535") - 1);
    if (VAR_4->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_7);

    if (VAR_6 > 0 && VAR_6 < 65536) {
        VAR_4->len = FUNC_2(VAR_4->data, "%ui", VAR_6) - VAR_4->data;
    }

    return VAR_1;
}
