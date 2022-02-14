
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
typedef int ngx_int_t ;
struct TYPE_10__ {int valid; int * data; int * len; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_11__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {struct sockaddr* sockaddr; } ;
typedef TYPE_4__ ngx_http_realip_ctx_t ;
struct TYPE_9__ {struct sockaddr* sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct sockaddr*) ;
 int * FUNC_2 (int ,int) ;
 int * FUNC_3 (int *,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_uint_t VAR_5;
    struct sockaddr *VAR_6;
    ngx_http_realip_ctx_t *VAR_7;

    VAR_7 = FUNC_0(VAR_2);

    VAR_6 = VAR_7 ? VAR_7->sockaddr : VAR_2->connection->sockaddr;

    VAR_3->len = 0;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    VAR_3->data = FUNC_2(VAR_2->pool, sizeof("65535") - 1);
    if (VAR_3->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_6);

    if (VAR_5 > 0 && VAR_5 < 65536) {
        VAR_3->len = FUNC_3(VAR_3->data, "%ui", VAR_5) - VAR_3->data;
    }

    return VAR_1;
}
