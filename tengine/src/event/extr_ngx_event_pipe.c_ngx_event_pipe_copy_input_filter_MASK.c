
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_9__ {int length; TYPE_2__** last_in; TYPE_2__* in; int log; int tag; int free; int pool; } ;
typedef TYPE_1__ ngx_event_pipe_t ;
struct TYPE_10__ {struct TYPE_10__* next; TYPE_3__* buf; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_11__ {scalar_t__ pos; scalar_t__ last; int last_shadow; int recycled; int num; struct TYPE_11__* shadow; int tag; } ;
typedef TYPE_3__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;

ngx_int_t
FUNC_3(ngx_event_pipe_t *VAR_3, ngx_buf_t *VAR_4)
{
    ngx_buf_t *VAR_5;
    ngx_chain_t *VAR_6;

    if (VAR_4->pos == VAR_4->last) {
        return VAR_2;
    }

    VAR_6 = FUNC_0(VAR_3->pool, &VAR_3->free);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = VAR_6->buf;

    FUNC_2(VAR_5, VAR_4, sizeof(ngx_buf_t));
    VAR_5->shadow = VAR_4;
    VAR_5->tag = VAR_3->tag;
    VAR_5->last_shadow = 1;
    VAR_5->recycled = 1;
    VAR_4->shadow = VAR_5;

    FUNC_1(VAR_1, VAR_3->log, 0, "input buf #%d", VAR_5->num);

    if (VAR_3->in) {
        *VAR_3->last_in = VAR_6;
    } else {
        VAR_3->in = VAR_6;
    }
    VAR_3->last_in = &VAR_6->next;

    if (VAR_3->length == -1) {
        return VAR_2;
    }

    VAR_3->length -= VAR_5->last - VAR_5->pos;

    return VAR_2;
}
