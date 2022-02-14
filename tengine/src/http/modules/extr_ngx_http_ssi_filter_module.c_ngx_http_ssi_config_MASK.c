
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int * data; scalar_t__ len; } ;
struct TYPE_10__ {TYPE_2__ errmsg; TYPE_1__ timefmt; } ;
typedef TYPE_3__ ngx_http_ssi_ctx_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int * FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_4, ngx_http_ssi_ctx_t *VAR_5,
    ngx_str_t **VAR_6)
{
    ngx_str_t *VAR_7;

    VAR_7 = VAR_6[VAR_2];

    if (VAR_7) {
        VAR_5->timefmt.len = VAR_7->len;
        VAR_5->timefmt.data = FUNC_1(VAR_4->pool, VAR_7->len + 1);
        if (VAR_5->timefmt.data == ((void*)0)) {
            return VAR_0;
        }

        FUNC_0(VAR_5->timefmt.data, VAR_7->data, VAR_7->len + 1);
    }

    VAR_7 = VAR_6[VAR_1];

    if (VAR_7) {
        VAR_5->errmsg = *VAR_7;
    }

    return VAR_3;
}
