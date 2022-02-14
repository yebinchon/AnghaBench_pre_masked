
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_9__ {int len; scalar_t__ data; } ;
struct TYPE_11__ {TYPE_2__ send; } ;
typedef TYPE_4__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_12__ {TYPE_4__* conf; TYPE_6__* check_data; } ;
typedef TYPE_5__ ngx_http_upstream_check_peer_t ;
struct TYPE_10__ {int * last; int end; int * pos; int start; } ;
struct TYPE_8__ {int * start; int * last; int * end; int * pos; } ;
struct TYPE_13__ {int status; scalar_t__ state; TYPE_3__ recv; TYPE_1__ send; } ;
typedef TYPE_6__ ngx_http_upstream_check_ctx_t ;
typedef int ngx_http_status_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_upstream_check_peer_t *VAR_1)
{
    ngx_http_upstream_check_ctx_t *VAR_2;
    ngx_http_upstream_check_srv_conf_t *VAR_3;

    VAR_2 = VAR_1->check_data;
    VAR_3 = VAR_1->conf;

    VAR_2->send.start = VAR_2->send.pos = (u_char *)VAR_3->send.data;
    VAR_2->send.end = VAR_2->send.last = VAR_2->send.start + VAR_3->send.len;

    VAR_2->recv.start = *(VAR_2->recv.pos = ((void*)0));
    VAR_2->recv.end = *(VAR_2->recv.last = ((void*)0));

    VAR_2->state = 0;

    FUNC_0(&VAR_2->status, sizeof(ngx_http_status_t));

    return VAR_0;
}
