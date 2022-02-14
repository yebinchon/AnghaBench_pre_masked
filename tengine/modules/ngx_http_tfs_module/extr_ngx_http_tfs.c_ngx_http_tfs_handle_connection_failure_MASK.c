
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct TYPE_23__ {TYPE_3__* name; TYPE_8__* connection; TYPE_7__* data; } ;
typedef TYPE_4__ ngx_peer_connection_t ;
struct TYPE_21__ {size_t segment_index; int * segment_data; } ;
struct TYPE_24__ {int log; TYPE_2__ file; TYPE_1__* loc_conf; int * tfs_peer_servers; int pool; int state; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
struct TYPE_25__ {TYPE_4__ peer; } ;
typedef TYPE_6__ ngx_http_tfs_peer_connection_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_26__ {int count; } ;
typedef TYPE_7__ ngx_http_connection_pool_t ;
struct TYPE_27__ {scalar_t__ pool; int fd; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_28__ {int data; } ;
struct TYPE_22__ {int len; int data; } ;
struct TYPE_20__ {int meta_root_server; } ;
struct TYPE_19__ {int data; } ;
struct TYPE_18__ {int data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_17__ VAR_6 ;
 TYPE_16__ VAR_7 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 TYPE_9__ VAR_8 ;

__attribute__((used)) static void
FUNC_10(ngx_http_tfs_t *VAR_9,
    ngx_http_tfs_peer_connection_t *VAR_10)
{
    ngx_connection_t *VAR_11;
    ngx_peer_connection_t *VAR_12;




    VAR_12 = &VAR_10->peer;
    VAR_11 = VAR_12->connection;
    if (VAR_11 != ((void*)0)) {
        FUNC_6(VAR_3, VAR_9->log, 0,
                       "close http upstream connection: %d",
                       VAR_11->fd);

        if (VAR_11->pool) {
            FUNC_1(VAR_11->pool);
        }

        FUNC_0(VAR_11);
    }
    VAR_12->connection = ((void*)0);


    if (FUNC_8(VAR_12->name->data, VAR_7.data) == 0) {
        VAR_9->state = VAR_2;
        FUNC_3(VAR_9->pool,
                         &VAR_9->tfs_peer_servers[VAR_1],
                         (ngx_http_tfs_inet_t *)&VAR_9->loc_conf->meta_root_server);
        FUNC_2(VAR_9, VAR_5);
        return;
    }


    if (FUNC_8(VAR_12->name->data, VAR_6.data) == 0) {
        FUNC_4(VAR_9,
                                  &VAR_9->file.segment_data[VAR_9->file.segment_index]);
    }


    if (FUNC_9(VAR_12->name->data, VAR_8.data, VAR_12->name->len) == 0) {
        FUNC_7(VAR_4, VAR_9->log, 0,
                "select a new rc server");
        FUNC_5(VAR_9);
    }

    FUNC_2(VAR_9, VAR_0);
}
