
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {int mutex; } ;
typedef TYPE_2__ ngx_slab_pool_t ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {int len; int data; } ;
struct TYPE_16__ {TYPE_1__ send; int default_down; } ;
typedef TYPE_3__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_17__ {size_t number; size_t max_number; TYPE_5__* peers; } ;
typedef TYPE_4__ ngx_http_upstream_check_peers_shm_t ;
struct TYPE_18__ {scalar_t__ delete; scalar_t__ socklen; scalar_t__ checksum; int * sockaddr; } ;
typedef TYPE_5__ ngx_http_upstream_check_peer_shm_t ;
struct TYPE_19__ {scalar_t__ socklen; int name; int sockaddr; } ;
typedef TYPE_6__ ngx_addr_t ;
struct TYPE_13__ {TYPE_4__* peers_shm; TYPE_2__* shpool; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_12__* VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static ngx_uint_t
FUNC_8(ngx_pool_t *VAR_5,
    ngx_http_upstream_check_srv_conf_t *VAR_6, ngx_addr_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_uint_t VAR_9, VAR_10;
    ngx_slab_pool_t *VAR_11;
    ngx_http_upstream_check_peer_shm_t *VAR_12;
    ngx_http_upstream_check_peers_shm_t *VAR_13;

    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11 = VAR_4->shpool;
    VAR_13 = VAR_4->peers_shm;
    VAR_12 = VAR_13->peers;
    VAR_10 = VAR_0;

    FUNC_5(&VAR_11->mutex);

    for (VAR_9 = 0; VAR_9 < VAR_13->number; VAR_9++) {


        if (VAR_12[VAR_9].delete == VAR_2) {
            continue;
        }




        if (VAR_7->socklen == VAR_12[VAR_9].socklen
            && FUNC_1(VAR_7->sockaddr, VAR_12[VAR_9].sockaddr,
                          VAR_7->socklen) == 0
            && VAR_12[VAR_9].checksum
               == FUNC_4(VAR_6->send.data, VAR_6->send.len))
        {
                FUNC_6(&VAR_11->mutex);
                return VAR_9;
        }
    }

    for (VAR_9 = 0; VAR_9 < VAR_13->number; VAR_9++) {

        if (VAR_12[VAR_9].delete == VAR_2) {
            VAR_12[VAR_9].delete = VAR_3;
            VAR_10 = VAR_9;
            break;
        }
    }

    if (VAR_10 == (ngx_uint_t) VAR_0) {
        if (VAR_13->number >= VAR_13->max_number) {
            goto fail;
        }

        VAR_10 = VAR_13->number++;
    }

    FUNC_3(&VAR_12[VAR_10], sizeof(ngx_http_upstream_check_peer_shm_t));

    VAR_12[VAR_10].socklen = VAR_7->socklen;
    VAR_12[VAR_10].sockaddr = FUNC_7(VAR_11,
                                                     VAR_12->socklen);
    if (VAR_12[VAR_10].sockaddr == ((void*)0)) {
        goto fail;
    }

    FUNC_2(VAR_12[VAR_10].sockaddr, VAR_7->sockaddr,
               VAR_7->socklen);

    VAR_8 = FUNC_0(&VAR_12[VAR_10], ((void*)0),
                                               VAR_6->default_down, VAR_5,
                                               &VAR_7->name);
    if (VAR_8 != VAR_1) {
        goto fail;
    }


    VAR_12[VAR_10].checksum = FUNC_4(VAR_6->send.data, VAR_6->send.len);

    FUNC_6(&VAR_11->mutex);
    return VAR_10;

fail:

    FUNC_6(&VAR_11->mutex);
    return VAR_0;
}
