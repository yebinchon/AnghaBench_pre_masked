
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {int mutex; } ;
typedef TYPE_2__ ngx_slab_pool_t ;
struct TYPE_12__ {scalar_t__ deleted; int dynamic; } ;
typedef TYPE_3__ ngx_http_dyups_srv_conf_t ;
struct TYPE_10__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_13__ {int read_msg_log; int read_msg_timeout; TYPE_1__ dy_upstreams; } ;
typedef TYPE_4__ ngx_http_dyups_main_conf_t ;
struct TYPE_14__ {int log; TYPE_4__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_15__ {TYPE_2__* shpool; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 TYPE_8__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ,char*,size_t,size_t,size_t,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_2)
{
    ngx_uint_t VAR_3, VAR_4, VAR_5, VAR_6;
    ngx_slab_pool_t *VAR_7;
    ngx_http_dyups_srv_conf_t *VAR_8, *VAR_9;
    ngx_http_dyups_main_conf_t *VAR_10;

    VAR_10 = VAR_2->data;
    VAR_7 = VAR_1.shpool;

    VAR_4 = 0;
    VAR_5 = 0;
    VAR_6 = 0;

    VAR_8 = VAR_10->dy_upstreams.elts;
    for (VAR_3 = 0; VAR_3 < VAR_10->dy_upstreams.nelts; VAR_3++) {

        VAR_9 = &VAR_8[VAR_3];

        if (!VAR_9->dynamic) {
            VAR_5++;
            continue;
        }

        if (VAR_9->deleted) {
            VAR_6++;
            continue;
        }

        VAR_4++;
    }

    if (VAR_10->read_msg_log == 1) {
        FUNC_2(VAR_0, VAR_2->log, 0,
                      "[dyups] has %ui upstreams, %ui static, %ui deleted, all %ui",
                      VAR_4, VAR_5, VAR_6, VAR_10->dy_upstreams.nelts);
    }

    FUNC_3(&VAR_7->mutex);

    FUNC_1(VAR_2);

    FUNC_4(&VAR_7->mutex);

    FUNC_0(VAR_2, VAR_10->read_msg_timeout);
}
