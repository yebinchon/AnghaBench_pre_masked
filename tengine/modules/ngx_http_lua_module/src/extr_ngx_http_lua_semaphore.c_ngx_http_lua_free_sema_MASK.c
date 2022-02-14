
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_9__ {int chain; TYPE_3__* block; } ;
typedef TYPE_1__ ngx_http_lua_sema_t ;
struct TYPE_10__ {int used; scalar_t__ cur_epoch; int total; int num_per_block; int free_queue; } ;
typedef TYPE_2__ ngx_http_lua_sema_mm_t ;
struct TYPE_11__ {scalar_t__ used; scalar_t__ epoch; TYPE_2__* mm; } ;
typedef TYPE_3__ ngx_http_lua_sema_mm_block_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 TYPE_8__* VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_1__*,int,int,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(ngx_http_lua_sema_t *VAR_2)
{
    ngx_http_lua_sema_t *VAR_3;
    ngx_uint_t VAR_4, VAR_5;
    ngx_http_lua_sema_mm_block_t *VAR_6;
    ngx_http_lua_sema_mm_t *VAR_7;

    VAR_6 = VAR_2->block;
    VAR_6->used--;

    VAR_7 = VAR_6->mm;
    VAR_7->used--;

    VAR_5 = VAR_7->cur_epoch - ((VAR_7->total / VAR_7->num_per_block) >> 1);

    if (VAR_6->epoch < VAR_5) {
        FUNC_5(&VAR_7->free_queue, &VAR_2->chain);
        FUNC_3(VAR_0, VAR_1->log, 0,
                       "add to free queue tail semaphore: %p epoch: %d"
                       "mid_epoch: %d cur_epoch: %d", VAR_2, (int) VAR_6->epoch,
                       (int) VAR_5, (int) VAR_7->cur_epoch);

    } else {
        FUNC_4(&VAR_7->free_queue, &VAR_2->chain);
        FUNC_3(VAR_0, VAR_1->log, 0,
                       "add to free queue head semaphore: %p epoch: %d"
                       "mid_epoch: %d cur_epoch: %d", VAR_2, (int) VAR_6->epoch,
                       (int) VAR_5, (int) VAR_7->cur_epoch);
    }

    FUNC_0("used: %d", (int) VAR_6->used);

    if (VAR_6->used == 0
        && VAR_7->used <= (VAR_7->total >> 1)
        && VAR_6->epoch < VAR_5)
    {

        VAR_3 = (ngx_http_lua_sema_t *) (VAR_6 + 1);

        for (VAR_4 = 0; VAR_4 < VAR_7->num_per_block; VAR_4++, VAR_3++) {
            FUNC_6(&VAR_3->chain);
        }

        VAR_7->total -= VAR_7->num_per_block;

        FUNC_2(VAR_0, VAR_1->log, 0,
                       "free semaphore block: %p", VAR_6);

        FUNC_1(VAR_6);
    }
}
