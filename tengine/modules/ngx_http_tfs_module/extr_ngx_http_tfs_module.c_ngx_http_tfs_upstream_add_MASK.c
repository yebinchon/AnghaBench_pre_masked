
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_16__ {int len; int data; } ;
struct TYPE_18__ {TYPE_13__ host; TYPE_13__ url; scalar_t__ err; } ;
typedef TYPE_1__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_19__ {TYPE_13__ host; } ;
typedef TYPE_2__ ngx_http_tfs_upstream_t ;
struct TYPE_17__ {size_t nelts; TYPE_2__** elts; } ;
struct TYPE_20__ {TYPE_15__ upstreams; } ;
typedef TYPE_3__ ngx_http_tfs_main_conf_t ;
struct TYPE_21__ {int pool; } ;
typedef TYPE_4__ ngx_conf_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__** FUNC_0 (TYPE_15__*) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*,TYPE_13__*,...) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 TYPE_2__* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

ngx_http_tfs_upstream_t *
FUNC_6(ngx_conf_t *VAR_5, ngx_url_t *VAR_6, ngx_uint_t VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_http_tfs_upstream_t *VAR_9, **VAR_10;
    ngx_http_tfs_main_conf_t *VAR_11;

    if (!(VAR_7 & VAR_0)) {

        if (FUNC_3(VAR_5->pool, VAR_6) != VAR_3) {
            if (VAR_6->err) {
                FUNC_1(VAR_2, VAR_5, 0,
                                   "%s in tfs upstream \"%V\"",
                                   VAR_6->err, &VAR_6->url);
            }

            return ((void*)0);
        }
    }

    VAR_11 = FUNC_2(VAR_5, VAR_4);

    VAR_10 = VAR_11->upstreams.elts;

    for (VAR_8 = 0; VAR_8 < VAR_11->upstreams.nelts; VAR_8++) {

        if (VAR_10[VAR_8]->host.len != VAR_6->host.len
            || FUNC_5(VAR_10[VAR_8]->host.data, VAR_6->host.data, VAR_6->host.len)
               != 0)
        {
            continue;
        }

        if (VAR_7 & VAR_0)
        {
            FUNC_1(VAR_2, VAR_5, 0,
                               "duplicate tfs upstream \"%V\"", &VAR_6->host);
            return ((void*)0);
        }

        return VAR_10[VAR_8];
    }

    if (VAR_7 & VAR_1) {
        FUNC_1(VAR_2, VAR_5, 0,
                           " host not found in tfs upstream \"%V\"", &VAR_6->url);
        return ((void*)0);
    }



    VAR_9 = FUNC_4(VAR_5->pool, sizeof(ngx_http_tfs_upstream_t));
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_9->host = VAR_6->host;

    VAR_10 = FUNC_0(&VAR_11->upstreams);
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }

    *VAR_10 = VAR_9;

    return VAR_9;
}
