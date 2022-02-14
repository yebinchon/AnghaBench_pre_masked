
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int len; int data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_19__ {TYPE_2__* values; TYPE_1__* lengths; } ;
typedef TYPE_6__ ngx_http_upstream_chash_srv_conf_t ;
struct TYPE_20__ {int hash; TYPE_6__* ucscf; } ;
typedef TYPE_7__ ngx_http_upstream_chash_peer_data_t ;
struct TYPE_21__ {TYPE_4__* upstream; int pool; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_16__ {int save_session; int set_session; TYPE_7__* data; int free; int get; } ;
struct TYPE_17__ {TYPE_3__ peer; } ;
struct TYPE_15__ {int elts; } ;
struct TYPE_14__ {int elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (int *,int ) ;
 int * FUNC_1 (TYPE_8__*,TYPE_5__*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 TYPE_7__* FUNC_3 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_7,
    ngx_http_upstream_srv_conf_t *VAR_8)
{
    ngx_str_t VAR_9;
    ngx_http_upstream_chash_srv_conf_t *VAR_10;
    ngx_http_upstream_chash_peer_data_t *VAR_11;

    VAR_10 = FUNC_0(VAR_8,
                                     VAR_4);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11 = FUNC_3(VAR_7->pool, sizeof(ngx_http_upstream_chash_peer_data_t));
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->ucscf = VAR_10;
    if (FUNC_1(VAR_7, &VAR_9,
                VAR_10->lengths->elts, 0, VAR_10->values->elts) == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->hash = FUNC_2(VAR_9.data, VAR_9.len);

    VAR_7->upstream->peer.get = VAR_6;
    VAR_7->upstream->peer.free = VAR_5;
    VAR_7->upstream->peer.data = VAR_11;






    return VAR_1;
}
