
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_14__ {int sockaddr; } ;
typedef TYPE_2__ ngx_sockaddr_t ;
typedef int ngx_resolver_t ;
struct TYPE_15__ {size_t naddrs; TYPE_5__* addrs; int port; void* state; int * ctx; } ;
typedef TYPE_3__ ngx_resolver_srv_name_t ;
struct TYPE_16__ {scalar_t__ count; int naddrs; TYPE_1__* addrs; int valid; void* state; int async; TYPE_3__* srvs; struct TYPE_16__* data; int * resolver; } ;
typedef TYPE_4__ ngx_resolver_ctx_t ;
struct TYPE_17__ {int * sockaddr; int socklen; } ;
typedef TYPE_5__ ngx_addr_t ;
struct TYPE_13__ {int sockaddr; int socklen; } ;


 void* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 TYPE_5__* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_8(ngx_resolver_ctx_t *VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_addr_t *VAR_3;
    ngx_resolver_t *VAR_4;
    ngx_sockaddr_t *VAR_5;
    ngx_resolver_ctx_t *VAR_6;
    ngx_resolver_srv_name_t *VAR_7;

    VAR_4 = VAR_1->resolver;
    VAR_6 = VAR_1->data;
    VAR_7 = VAR_1->srvs;

    VAR_6->count--;
    VAR_6->async |= VAR_1->async;

    VAR_7->ctx = ((void*)0);
    VAR_7->state = VAR_1->state;

    if (VAR_1->naddrs) {

        VAR_6->valid = FUNC_2(VAR_6->valid, VAR_1->valid);

        VAR_3 = FUNC_5(VAR_4, VAR_1->naddrs * sizeof(ngx_addr_t));
        if (VAR_3 == ((void*)0)) {
            VAR_7->state = VAR_0;
            goto done;
        }

        VAR_5 = FUNC_4(VAR_4, VAR_1->naddrs * sizeof(ngx_sockaddr_t));
        if (VAR_5 == ((void*)0)) {
            FUNC_6(VAR_4, VAR_3);
            VAR_7->state = VAR_0;
            goto done;
        }

        for (VAR_2 = 0; VAR_2 < VAR_1->naddrs; VAR_2++) {
            VAR_3[VAR_2].sockaddr = &VAR_5[VAR_2].sockaddr;
            VAR_3[VAR_2].socklen = VAR_1->addrs[VAR_2].socklen;

            FUNC_1(&VAR_5[VAR_2], VAR_1->addrs[VAR_2].sockaddr,
                       VAR_3[VAR_2].socklen);

            FUNC_0(VAR_3[VAR_2].sockaddr, VAR_7->port);
        }

        VAR_7->addrs = VAR_3;
        VAR_7->naddrs = VAR_1->naddrs;
    }

done:

    FUNC_3(VAR_1);

    if (VAR_6->count == 0) {
        FUNC_7(VAR_4, VAR_6);
    }
}
