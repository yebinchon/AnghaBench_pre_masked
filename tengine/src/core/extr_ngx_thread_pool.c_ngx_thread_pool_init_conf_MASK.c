
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_13__ {scalar_t__ len; int data; } ;
struct TYPE_9__ {int threads; int max_queue; int line; int file; TYPE_7__ name; } ;
typedef TYPE_2__ ngx_thread_pool_t ;
struct TYPE_8__ {size_t nelts; TYPE_2__** elts; } ;
struct TYPE_10__ {TYPE_1__ pools; } ;
typedef TYPE_3__ ngx_thread_pool_conf_t ;
struct TYPE_11__ {int log; } ;
typedef TYPE_4__ ngx_cycle_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_7__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 TYPE_6__ VAR_3 ;

__attribute__((used)) static char *
FUNC_2(ngx_cycle_t *VAR_4, void *VAR_5)
{
    ngx_thread_pool_conf_t *VAR_6 = VAR_5;

    ngx_uint_t VAR_7;
    ngx_thread_pool_t **VAR_8;

    VAR_8 = VAR_6->pools.elts;

    for (VAR_7 = 0; VAR_7 < VAR_6->pools.nelts; VAR_7++) {

        if (VAR_8[VAR_7]->threads) {
            continue;
        }

        if (VAR_8[VAR_7]->name.len == VAR_3.len
            && FUNC_1(VAR_8[VAR_7]->name.data, VAR_3.data,
                           VAR_3.len)
               == 0)
        {
            VAR_8[VAR_7]->threads = 32;
            VAR_8[VAR_7]->max_queue = 65536;
            continue;
        }

        FUNC_0(VAR_2, VAR_4->log, 0,
                      "unknown thread pool \"%V\" in %s:%ui",
                      &VAR_8[VAR_7]->name, VAR_8[VAR_7]->file, VAR_8[VAR_7]->line);

        return VAR_0;
    }

    return VAR_1;
}
