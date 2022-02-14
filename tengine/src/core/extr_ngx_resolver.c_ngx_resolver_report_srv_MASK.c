
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_17__ {int valid; } ;
typedef TYPE_2__ ngx_resolver_t ;
struct TYPE_18__ {scalar_t__ state; size_t naddrs; scalar_t__ priority; size_t weight; int name; TYPE_1__* addrs; } ;
typedef TYPE_3__ ngx_resolver_srv_name_t ;
struct TYPE_19__ {size_t nsrvs; scalar_t__ state; size_t naddrs; int (* handler ) (TYPE_4__*) ;TYPE_5__* addrs; void* valid; TYPE_3__* srvs; } ;
typedef TYPE_4__ ngx_resolver_ctx_t ;
struct TYPE_20__ {scalar_t__ priority; size_t weight; int name; int sockaddr; int socklen; } ;
typedef TYPE_5__ ngx_resolver_addr_t ;
struct TYPE_16__ {int sockaddr; int socklen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 () ;
 TYPE_5__* FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,TYPE_5__*) ;
 void* FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_8(ngx_resolver_t *VAR_3, ngx_resolver_ctx_t *VAR_4)
{
    ngx_uint_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    ngx_resolver_addr_t *VAR_15;
    ngx_resolver_srv_name_t *VAR_16;

    VAR_16 = VAR_4->srvs;
    VAR_6 = VAR_4->nsrvs;

    VAR_5 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        if (VAR_16[VAR_8].state == VAR_0) {
            VAR_4->state = VAR_0;
            VAR_4->valid = FUNC_3() + (VAR_3->valid ? VAR_3->valid : 10);

            VAR_4->handler(VAR_4);
            return;
        }

        VAR_5 += VAR_16[VAR_8].naddrs;
    }

    if (VAR_5 == 0) {
        VAR_4->state = VAR_16[0].state;

        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
            if (VAR_16[VAR_8].state == VAR_2) {
                VAR_4->state = VAR_2;
                break;
            }
        }

        VAR_4->valid = FUNC_3() + (VAR_3->valid ? VAR_3->valid : 10);

        VAR_4->handler(VAR_4);
        return;
    }

    VAR_15 = FUNC_1(VAR_3, VAR_5 * sizeof(ngx_resolver_addr_t));
    if (VAR_15 == ((void*)0)) {
        VAR_4->state = VAR_0;
        VAR_4->valid = FUNC_3() + (VAR_3->valid ? VAR_3->valid : 10);

        VAR_4->handler(VAR_4);
        return;
    }

    VAR_8 = 0;
    VAR_13 = 0;

    do {
        VAR_7 = 0;

        for (VAR_9 = VAR_8; VAR_9 < VAR_6; VAR_9++) {
            if (VAR_16[VAR_9].priority != VAR_16[VAR_8].priority) {
                break;
            }

            VAR_7 += VAR_16[VAR_9].naddrs * VAR_16[VAR_9].weight;
        }

        if (VAR_7 == 0) {
            goto next_srv;
        }

        VAR_14 = FUNC_0() % VAR_7;

        for (VAR_10 = VAR_8; VAR_10 < VAR_9; VAR_10++) {
            if (VAR_14 < VAR_16[VAR_10].naddrs * VAR_16[VAR_10].weight) {
                break;
            }

            VAR_14 -= VAR_16[VAR_10].naddrs * VAR_16[VAR_10].weight;
        }

        for (VAR_11 = VAR_8; VAR_11 < VAR_9; VAR_11++) {

            for (VAR_12 = 0; VAR_12 < VAR_16[VAR_10].naddrs; VAR_12++) {
                VAR_15[VAR_13].socklen = VAR_16[VAR_10].addrs[VAR_12].socklen;
                VAR_15[VAR_13].sockaddr = VAR_16[VAR_10].addrs[VAR_12].sockaddr;
                VAR_15[VAR_13].name = VAR_16[VAR_10].name;
                VAR_15[VAR_13].priority = VAR_16[VAR_10].priority;
                VAR_15[VAR_13].weight = VAR_16[VAR_10].weight;
                VAR_13++;
            }

            if (++VAR_10 == VAR_9) {
                VAR_10 = VAR_8;
            }
        }

next_srv:

        VAR_8 = VAR_9;

    } while (VAR_8 < VAR_4->nsrvs);

    VAR_4->state = VAR_1;
    VAR_4->addrs = VAR_15;
    VAR_4->naddrs = VAR_5;

    VAR_4->handler(VAR_4);

    FUNC_2(VAR_3, VAR_15);
}
