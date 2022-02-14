
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int log; } ;
typedef TYPE_2__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {scalar_t__ (* original_get_peer ) (TYPE_2__*,int ) ;TYPE_1__* conf; int data; } ;
typedef TYPE_3__ ngx_http_upstream_keepalive_peer_data_t ;
struct TYPE_9__ {int free; int cache; scalar_t__ index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_peer_connection_t *VAR_4, void *VAR_5)
{
    ngx_http_upstream_keepalive_peer_data_t *VAR_6 = VAR_5;

    ngx_int_t VAR_7;

    FUNC_2(VAR_0, VAR_4->log, 0,
                   "get keepalive peer");



    VAR_7 = VAR_6->original_get_peer(VAR_4, VAR_6->data);

    if (VAR_7 != VAR_1) {
        return VAR_7;
    }



    if (VAR_6->conf->index) {
        return FUNC_1(VAR_4, VAR_6);
    }

    return FUNC_0(
                        VAR_4,
                        &VAR_6->conf->cache,
                        &VAR_6->conf->free,
                        FUNC_3(VAR_2, VAR_3));
}
