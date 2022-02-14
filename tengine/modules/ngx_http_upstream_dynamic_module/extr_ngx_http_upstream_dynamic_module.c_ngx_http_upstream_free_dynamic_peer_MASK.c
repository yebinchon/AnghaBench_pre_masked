
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_5__ {int log; } ;
typedef TYPE_1__ ngx_peer_connection_t ;
struct TYPE_6__ {int data; int (* original_free_peer ) (TYPE_1__*,int ,int ) ;} ;
typedef TYPE_2__ ngx_http_upstream_dynamic_peer_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(ngx_peer_connection_t *VAR_1, void *VAR_2,
    ngx_uint_t VAR_3)
{
    ngx_http_upstream_dynamic_peer_data_t *VAR_4 = VAR_2;

    FUNC_0(VAR_0, VAR_1->log, 0,
                   "free dynamic peer");

    VAR_4->original_free_peer(VAR_1, VAR_4->data, VAR_3);
}
