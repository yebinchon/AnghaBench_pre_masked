
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {TYPE_3__* free; TYPE_3__* in; TYPE_3__* out; TYPE_3__* busy; } ;
typedef TYPE_2__ ngx_event_pipe_t ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_1__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_6__ {int * shadow; scalar_t__ last_shadow; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_event_pipe_t *VAR_2)
{
    ngx_chain_t *VAR_3, *VAR_4;

    for ( ;; ) {
        if (VAR_2->busy) {
            VAR_3 = VAR_2->busy;
            VAR_2->busy = ((void*)0);

        } else if (VAR_2->out) {
            VAR_3 = VAR_2->out;
            VAR_2->out = ((void*)0);

        } else if (VAR_2->in) {
            VAR_3 = VAR_2->in;
            VAR_2->in = ((void*)0);

        } else {
            return VAR_1;
        }

        while (VAR_3) {
            if (VAR_3->buf->last_shadow) {
                if (FUNC_0(VAR_2, VAR_3->buf->shadow) != VAR_1) {
                    return VAR_0;
                }

                VAR_3->buf->last_shadow = 0;
            }

            VAR_3->buf->shadow = ((void*)0);
            VAR_4 = VAR_3->next;
            VAR_3->next = VAR_2->free;
            VAR_2->free = VAR_3;
            VAR_3 = VAR_4;
        }
    }
}
