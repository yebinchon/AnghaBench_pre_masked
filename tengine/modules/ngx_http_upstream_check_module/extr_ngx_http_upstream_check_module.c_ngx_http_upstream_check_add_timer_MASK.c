
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_msec_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {scalar_t__ timer_set; TYPE_3__* data; int * log; int handler; } ;
struct TYPE_8__ {scalar_t__ timer_set; TYPE_3__* data; int * log; int handler; } ;
struct TYPE_10__ {TYPE_2__* shm; TYPE_7__ check_ev; int reinit; int parse; int init; int recv_handler; int send_handler; int * pool; TYPE_1__ check_timeout_ev; } ;
typedef TYPE_3__ ngx_http_upstream_check_peer_t ;
struct TYPE_11__ {int reinit; int parse; int init; int recv_handler; int send_handler; scalar_t__ need_pool; } ;
typedef TYPE_4__ ngx_check_conf_t ;
struct TYPE_9__ {int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int * FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_upstream_check_peer_t *VAR_5,
    ngx_check_conf_t *VAR_6, ngx_msec_t VAR_7, ngx_log_t *VAR_8)
{
    VAR_5->check_ev.handler = VAR_2;
    VAR_5->check_ev.log = VAR_8;
    VAR_5->check_ev.data = VAR_5;
    VAR_5->check_ev.timer_set = 0;

    VAR_5->check_timeout_ev.handler =
        VAR_3;
    VAR_5->check_timeout_ev.log = VAR_8;
    VAR_5->check_timeout_ev.data = VAR_5;
    VAR_5->check_timeout_ev.timer_set = 0;

    if (VAR_6->need_pool) {
        VAR_5->pool = FUNC_1(VAR_4, VAR_8);
        if (VAR_5->pool == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_5->send_handler = VAR_6->send_handler;
    VAR_5->recv_handler = VAR_6->recv_handler;

    VAR_5->init = VAR_6->init;
    VAR_5->parse = VAR_6->parse;
    VAR_5->reinit = VAR_6->reinit;

    FUNC_0(&VAR_5->check_ev, VAR_7);


    VAR_5->shm->ref++;

    return VAR_1;
}
