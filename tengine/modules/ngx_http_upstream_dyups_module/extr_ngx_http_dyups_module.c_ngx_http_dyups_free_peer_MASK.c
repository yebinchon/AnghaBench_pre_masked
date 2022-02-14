
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_12__ {int * data; int handler; } ;
typedef TYPE_3__ ngx_pool_cleanup_t ;
struct TYPE_13__ {TYPE_1__* connection; scalar_t__ cached; } ;
typedef TYPE_4__ ngx_peer_connection_t ;
struct TYPE_14__ {int data; int (* free ) (TYPE_4__*,int ,int ) ;TYPE_2__* scf; } ;
typedef TYPE_5__ ngx_http_dyups_ctx_t ;
struct TYPE_15__ {int log; } ;
struct TYPE_11__ {int ref; } ;
struct TYPE_10__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(ngx_peer_connection_t *VAR_4, void *VAR_5,
    ngx_uint_t VAR_6)
{
    ngx_http_dyups_ctx_t *VAR_7 = VAR_5;

    ngx_pool_cleanup_t *VAR_8;


    FUNC_0(VAR_0, VAR_2->log, 0,
                   "[dyups] dynamic upstream free handler count %i",
                   VAR_7->scf->ref);


    if (VAR_4->connection == ((void*)0)) {
        goto done;
    }

    if (VAR_4->cached) {
        goto done;
    }

    VAR_7->scf->ref++;

    VAR_8 = FUNC_2(VAR_4->connection->pool, 0);
    if (VAR_8 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_2->log, 0,
                      "[dyups] dynamic upstream free peer may cause memleak %i",
                      VAR_7->scf->ref);
        goto done;
    }

    VAR_8->handler = VAR_3;
    VAR_8->data = &VAR_7->scf->ref;

 done:

    VAR_7->free(VAR_4, VAR_7->data, VAR_6);
}
