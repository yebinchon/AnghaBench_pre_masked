
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {int flag; } ;
typedef TYPE_2__ ngx_http_upstream_check_status_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(
    ngx_http_upstream_check_status_ctx_t *VAR_4, ngx_str_t *VAR_5)
{
    if (VAR_5->len == (sizeof("down") - 1)
        && FUNC_0(VAR_5->data, (u_char *) "down", VAR_5->len) == 0) {

        VAR_4->flag |= VAR_0;

    } else if (VAR_5->len == (sizeof("up") - 1)
               && FUNC_0(VAR_5->data, (u_char *) "up", VAR_5->len)
                  == 0) {

        VAR_4->flag |= VAR_1;

    } else {
        return VAR_2;
    }

    return VAR_3;
}
