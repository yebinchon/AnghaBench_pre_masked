
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;


struct TYPE_22__ {int len; int data; } ;
struct TYPE_27__ {int naddrs; scalar_t__ family; int addrs; int * port; scalar_t__ no_port; TYPE_17__ host; int url; TYPE_17__* err; } ;
typedef TYPE_4__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_28__ {size_t flags; TYPE_20__* servers; scalar_t__ no_port; int * port; int line; int file_name; TYPE_17__ host; } ;
typedef TYPE_5__ ngx_stream_upstream_srv_conf_t ;
struct TYPE_29__ {int naddrs; int addrs; } ;
typedef TYPE_6__ ngx_stream_upstream_server_t ;
struct TYPE_24__ {size_t nelts; TYPE_5__** elts; } ;
struct TYPE_30__ {TYPE_20__ upstreams; } ;
typedef TYPE_7__ ngx_stream_upstream_main_conf_t ;
struct TYPE_31__ {int pool; TYPE_3__* conf_file; int log; } ;
typedef TYPE_8__ ngx_conf_t ;
struct TYPE_23__ {int data; } ;
struct TYPE_25__ {TYPE_1__ name; } ;
struct TYPE_26__ {int line; TYPE_2__ file; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 TYPE_20__* FUNC_0 (int ,int,int) ;
 void* FUNC_1 (TYPE_20__*) ;
 int FUNC_2 (int ,TYPE_8__*,int ,char*,TYPE_17__*,...) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_17__*,int *,int ,int ) ;
 int FUNC_4 (TYPE_6__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*) ;
 TYPE_5__* FUNC_6 (int ,int) ;
 TYPE_7__* FUNC_7 (TYPE_8__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

ngx_stream_upstream_srv_conf_t *
FUNC_9(ngx_conf_t *VAR_5, ngx_url_t *VAR_6, ngx_uint_t VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_stream_upstream_server_t *VAR_9;
    ngx_stream_upstream_srv_conf_t *VAR_10, **VAR_11;
    ngx_stream_upstream_main_conf_t *VAR_12;

    if (!(VAR_7 & VAR_3)) {

        if (FUNC_5(VAR_5->pool, VAR_6) != VAR_2) {
            if (VAR_6->err) {
                FUNC_2(VAR_1, VAR_5, 0,
                                   "%s in upstream \"%V\"", VAR_6->err, &VAR_6->url);
            }

            return ((void*)0);
        }
    }

    VAR_12 = FUNC_7(VAR_5, VAR_4);

    VAR_11 = VAR_12->upstreams.elts;

    for (VAR_8 = 0; VAR_8 < VAR_12->upstreams.nelts; VAR_8++) {

        if (VAR_11[VAR_8]->host.len != VAR_6->host.len
            || FUNC_8(VAR_11[VAR_8]->host.data, VAR_6->host.data, VAR_6->host.len)
               != 0)
        {
            continue;
        }

        if ((VAR_7 & VAR_3)
             && (VAR_11[VAR_8]->flags & VAR_3))
        {
            FUNC_2(VAR_1, VAR_5, 0,
                               "duplicate upstream \"%V\"", &VAR_6->host);
            return ((void*)0);
        }

        if ((VAR_11[VAR_8]->flags & VAR_3) && !VAR_6->no_port) {
            FUNC_2(VAR_1, VAR_5, 0,
                               "upstream \"%V\" may not have port %d",
                               &VAR_6->host, VAR_6->port);
            return ((void*)0);
        }

        if ((VAR_7 & VAR_3) && !VAR_11[VAR_8]->no_port) {
            FUNC_3(VAR_1, VAR_5->log, 0,
                          "upstream \"%V\" may not have port %d in %s:%ui",
                          &VAR_6->host, VAR_11[VAR_8]->port,
                          VAR_11[VAR_8]->file_name, VAR_11[VAR_8]->line);
            return ((void*)0);
        }

        if (VAR_11[VAR_8]->port != VAR_6->port) {
            continue;
        }

        if (VAR_7 & VAR_3) {
            VAR_11[VAR_8]->flags = VAR_7;
        }

        return VAR_11[VAR_8];
    }

    VAR_10 = FUNC_6(VAR_5->pool, sizeof(ngx_stream_upstream_srv_conf_t));
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_10->flags = VAR_7;
    VAR_10->host = VAR_6->host;
    VAR_10->file_name = VAR_5->conf_file->file.name.data;
    VAR_10->line = VAR_5->conf_file->line;
    VAR_10->port = VAR_6->port;
    VAR_10->no_port = VAR_6->no_port;

    if (VAR_6->naddrs == 1 && (VAR_6->port || VAR_6->family == VAR_0)) {
        VAR_10->servers = FUNC_0(VAR_5->pool, 1,
                                         sizeof(ngx_stream_upstream_server_t));
        if (VAR_10->servers == ((void*)0)) {
            return ((void*)0);
        }

        VAR_9 = FUNC_1(VAR_10->servers);
        if (VAR_9 == ((void*)0)) {
            return ((void*)0);
        }

        FUNC_4(VAR_9, sizeof(ngx_stream_upstream_server_t));

        VAR_9->addrs = VAR_6->addrs;
        VAR_9->naddrs = 1;
    }

    VAR_11 = FUNC_1(&VAR_12->upstreams);
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }

    *VAR_11 = VAR_10;

    return VAR_10;
}
