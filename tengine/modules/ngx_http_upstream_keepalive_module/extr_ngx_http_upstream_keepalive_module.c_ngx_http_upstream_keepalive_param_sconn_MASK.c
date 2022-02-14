
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {scalar_t__ slice_conn; } ;
typedef TYPE_2__ ngx_http_upstream_keepalive_srv_conf_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_2, void *VAR_3,
    ngx_str_t *VAR_4)
{
    ngx_http_upstream_keepalive_srv_conf_t *VAR_5 = VAR_3;

    VAR_5->slice_conn = FUNC_0(VAR_4->data, VAR_4->len);

    return VAR_5->slice_conn == VAR_0 ? VAR_0 : VAR_1;
}
