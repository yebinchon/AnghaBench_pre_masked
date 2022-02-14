
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_18__ {scalar_t__ check_keepalive_requests; TYPE_8__* check_type_conf; } ;
typedef TYPE_5__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_13__ {scalar_t__ timer_set; } ;
struct TYPE_16__ {TYPE_7__* connection; } ;
struct TYPE_19__ {TYPE_4__* shm; int (* reinit ) (TYPE_6__*) ;int * check_data; int state; TYPE_11__ check_timeout_ev; TYPE_3__ pc; int index; TYPE_5__* conf; } ;
typedef TYPE_6__ ngx_http_upstream_check_peer_t ;
struct TYPE_20__ {scalar_t__ error; scalar_t__ requests; TYPE_2__* read; TYPE_1__* write; int fd; int log; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_21__ {scalar_t__ need_keepalive; } ;
typedef TYPE_8__ ngx_check_conf_t ;
struct TYPE_17__ {int owner; } ;
struct TYPE_15__ {int handler; } ;
struct TYPE_14__ {int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_11__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_4(ngx_http_upstream_check_peer_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_http_upstream_check_srv_conf_t *VAR_7;
    ngx_check_conf_t *VAR_8;

    VAR_6 = VAR_5->pc.connection;
    VAR_7 = VAR_5->conf;
    VAR_8 = VAR_7->check_type_conf;

    if (VAR_6) {
        FUNC_2(VAR_2, VAR_6->log, 0,
                       "http check clean event: index:%i, fd: %d",
                       VAR_5->index, VAR_6->fd);
        if (VAR_6->error == 0 &&
            VAR_8->need_keepalive &&
            (VAR_6->requests < VAR_7->check_keepalive_requests))
        {
            VAR_6->write->handler = VAR_4;
            VAR_6->read->handler = VAR_3;
        } else {
            FUNC_0(VAR_6);
            VAR_5->pc.connection = ((void*)0);
        }
    }

    if (VAR_5->check_timeout_ev.timer_set) {
        FUNC_1(&VAR_5->check_timeout_ev);
    }

    VAR_5->state = VAR_0;

    if (VAR_5->check_data != ((void*)0) && VAR_5->reinit) {
        VAR_5->reinit(VAR_5);
    }

    VAR_5->shm->owner = VAR_1;
}
