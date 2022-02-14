
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_peer_connection_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int data; int (* get ) (int *,int ) ;TYPE_1__* scf; } ;
typedef TYPE_2__ ngx_http_dyups_ctx_t ;
struct TYPE_6__ {int log; } ;
struct TYPE_4__ {int ref; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_peer_connection_t *VAR_2, void *VAR_3)
{
    ngx_http_dyups_ctx_t *VAR_4 = VAR_3;

    FUNC_0(VAR_0, VAR_1->log, 0,
                   "[dyups] dynamic upstream get handler count %i",
                   VAR_4->scf->ref);

    return VAR_4->get(VAR_2, VAR_4->data);
}
