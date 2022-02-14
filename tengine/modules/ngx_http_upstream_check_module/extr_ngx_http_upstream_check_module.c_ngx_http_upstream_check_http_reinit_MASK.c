
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* check_data; } ;
typedef TYPE_3__ ngx_http_upstream_check_peer_t ;
struct TYPE_6__ {int start; int last; int pos; } ;
struct TYPE_7__ {int end; int last; int start; int pos; } ;
struct TYPE_9__ {int status; scalar_t__ state; TYPE_1__ recv; TYPE_2__ send; } ;
typedef TYPE_4__ ngx_http_upstream_check_ctx_t ;
typedef int ngx_http_status_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(ngx_http_upstream_check_peer_t *VAR_0)
{
    ngx_http_upstream_check_ctx_t *VAR_1;

    VAR_1 = VAR_0->check_data;

    VAR_1->send.pos = VAR_1->send.start;
    VAR_1->send.last = VAR_1->send.end;

    VAR_1->recv.pos = VAR_1->recv.last = VAR_1->recv.start;

    VAR_1->state = 0;

    FUNC_0(&VAR_1->status, sizeof(ngx_http_status_t));
}
