
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


struct TYPE_19__ {int segment_count; } ;
struct TYPE_18__ {int * filter_ctx; } ;
struct TYPE_16__ {scalar_t__ code; } ;
struct TYPE_17__ {TYPE_3__ action; } ;
struct TYPE_21__ {int temporary; int * start; int * end; int * last; int * pos; } ;
struct TYPE_15__ {int * connection; } ;
struct TYPE_14__ {int * start; } ;
struct TYPE_20__ {TYPE_6__ file; int is_large_file; int writer; TYPE_5__ output; int pool; TYPE_4__ r_ctx; TYPE_8__ body_buffer; struct TYPE_20__* tfs_peer_servers; TYPE_2__ peer; TYPE_1__ header_buffer; int * recv_chain; struct TYPE_20__* parent; struct TYPE_20__* next; struct TYPE_20__* free_sts; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_peer_connection_t ;
typedef TYPE_8__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_7__*,TYPE_7__*,int) ;
 void* FUNC_2 (int ,int) ;
 TYPE_7__* FUNC_3 (int ,int) ;

ngx_http_tfs_t *
FUNC_4(ngx_http_tfs_t *VAR_7)
{
    ngx_buf_t *VAR_8;
    ngx_http_tfs_t *VAR_9;

    VAR_9 = VAR_7->free_sts;

    if (VAR_9) {
        VAR_7->free_sts = VAR_9->next;
        return VAR_9;
    }

    VAR_9 = FUNC_2(VAR_7->pool, sizeof(ngx_http_tfs_t));
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_1(VAR_9, VAR_7, sizeof(ngx_http_tfs_t));
    VAR_9->parent = VAR_7;






    VAR_9->recv_chain = FUNC_0(VAR_7->pool, 2);
    if (VAR_9->recv_chain == ((void*)0)) {
        return ((void*)0);
    }
    VAR_9->header_buffer.start = ((void*)0);


    VAR_9->tfs_peer_servers = FUNC_3(VAR_7->pool,
        sizeof(ngx_http_tfs_peer_connection_t) * VAR_6);
    if (VAR_9->tfs_peer_servers == ((void*)0)) {
        return ((void*)0);
    }


    FUNC_1(&VAR_9->tfs_peer_servers[VAR_4],
               &VAR_7->tfs_peer_servers[VAR_4],
               sizeof(ngx_http_tfs_peer_connection_t));
    VAR_9->tfs_peer_servers[VAR_4].body_buffer.start = ((void*)0);
    VAR_9->tfs_peer_servers[VAR_4].peer.connection = ((void*)0);


    FUNC_1(&VAR_9->tfs_peer_servers[VAR_2],
               &VAR_7->tfs_peer_servers[VAR_2],
               sizeof(ngx_http_tfs_peer_connection_t));
    VAR_8 = &VAR_9->tfs_peer_servers[VAR_2].body_buffer;
    if (VAR_7->r_ctx.action.code == VAR_1) {
        VAR_8->start = ((void*)0);

    } else if (VAR_7->r_ctx.action.code == VAR_0){



        VAR_8->start = FUNC_2(VAR_7->pool, VAR_3);
        if (VAR_8->start == ((void*)0)) {
            return ((void*)0);
        }

        VAR_8->pos = VAR_8->start;
        VAR_8->last = VAR_8->start;
        VAR_8->end = VAR_8->start + VAR_3;
        VAR_8->temporary = 1;
    }

    VAR_9->output.filter_ctx = &VAR_9->writer;

    VAR_9->is_large_file = VAR_5;
    VAR_9->file.segment_count = 1;

    return VAR_9;
}
