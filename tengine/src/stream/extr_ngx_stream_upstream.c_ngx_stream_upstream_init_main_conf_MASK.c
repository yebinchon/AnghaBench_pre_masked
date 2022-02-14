
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {scalar_t__ (* init_upstream ) (int *,TYPE_3__*) ;} ;
struct TYPE_9__ {TYPE_2__ peer; } ;
typedef TYPE_3__ ngx_stream_upstream_srv_conf_t ;
struct TYPE_7__ {size_t nelts; TYPE_3__** elts; } ;
struct TYPE_10__ {TYPE_1__ upstreams; } ;
typedef TYPE_4__ ngx_stream_upstream_main_conf_t ;
typedef scalar_t__ (* ngx_stream_upstream_init_pt ) (int *,TYPE_3__*) ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_3, void *VAR_4)
{
    ngx_stream_upstream_main_conf_t *VAR_5 = VAR_4;

    ngx_uint_t VAR_6;
    ngx_stream_upstream_init_pt VAR_7;
    ngx_stream_upstream_srv_conf_t **VAR_8;

    VAR_8 = VAR_5->upstreams.elts;

    for (VAR_6 = 0; VAR_6 < VAR_5->upstreams.nelts; VAR_6++) {

        VAR_7 = VAR_8[VAR_6]->peer.init_upstream
                                         ? VAR_8[VAR_6]->peer.init_upstream
                                         : FUNC_0;

        if (VAR_7(VAR_3, VAR_8[VAR_6]) != VAR_2) {
            return VAR_0;
        }
    }

    return VAR_1;
}
