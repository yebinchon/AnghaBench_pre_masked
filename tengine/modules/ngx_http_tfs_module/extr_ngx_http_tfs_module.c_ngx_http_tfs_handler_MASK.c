
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_37__ {int code; } ;
struct TYPE_31__ {int version; TYPE_6__ action; } ;
struct TYPE_33__ {int * tair_instance; TYPE_9__* data; } ;
struct TYPE_34__ {int curr_lookup_cache; TYPE_2__ remote_ctx; int use_cache; int * local_ctx; } ;
struct TYPE_32__ {scalar_t__ tag; } ;
struct TYPE_40__ {TYPE_19__ r_ctx; TYPE_11__* loc_conf; int header_only; TYPE_3__ block_cache_ctx; TYPE_1__ output; TYPE_10__* main_conf; int * srv_conf; int log; TYPE_12__* data; int pool; } ;
typedef TYPE_9__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_srv_conf_t ;
struct TYPE_28__ {scalar_t__ enable_remote_block_cache; int remote_block_cache_instance; int * local_block_cache_ctx; } ;
typedef TYPE_10__ ngx_http_tfs_main_conf_t ;
struct TYPE_29__ {TYPE_4__* upstream; } ;
typedef TYPE_11__ ngx_http_tfs_loc_conf_t ;
struct TYPE_39__ {int content_length_n; } ;
struct TYPE_30__ {TYPE_8__ headers_out; TYPE_7__* main; TYPE_5__* connection; int header_only; int pool; } ;
typedef TYPE_12__ ngx_http_request_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_38__ {int count; } ;
struct TYPE_36__ {int log; } ;
struct TYPE_35__ {int enable_rcs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_12__*) ;
 TYPE_11__* FUNC_1 (TYPE_12__*,int ) ;
 TYPE_10__* FUNC_2 (TYPE_12__*,int ) ;
 int * FUNC_3 (TYPE_12__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_12__*,int (*) (TYPE_12__*)) ;
 scalar_t__ FUNC_5 (TYPE_12__*,TYPE_19__*) ;
 int FUNC_6 (TYPE_12__*,TYPE_9__*,int ) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_12__*) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 TYPE_9__* FUNC_9 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_http_tfs_t *VAR_12;
    ngx_http_tfs_loc_conf_t *VAR_13;
    ngx_http_tfs_srv_conf_t *VAR_14;
    ngx_http_tfs_main_conf_t *VAR_15;

    VAR_13 = FUNC_1(VAR_10, VAR_9);
    VAR_14 = FUNC_3(VAR_10, VAR_9);
    VAR_15 = FUNC_2(VAR_10, VAR_9);

    VAR_12 = FUNC_9(VAR_10->pool, sizeof(ngx_http_tfs_t));

    if (VAR_12 == ((void*)0)) {
        FUNC_8(VAR_7, VAR_10->connection->log, 0,
                      "alloc ngx_http_tfs_t failed");
        return VAR_2;
    }

    VAR_12->pool = VAR_10->pool;
    VAR_12->data = VAR_10;
    VAR_12->log = VAR_10->connection->log;
    VAR_12->loc_conf = VAR_13;
    VAR_12->srv_conf = VAR_14;
    VAR_12->main_conf = VAR_15;
    VAR_12->output.tag = (ngx_buf_tag_t) &VAR_9;
    if (VAR_15->local_block_cache_ctx != ((void*)0)) {
        VAR_12->block_cache_ctx.use_cache |= VAR_4;
        VAR_12->block_cache_ctx.local_ctx = VAR_15->local_block_cache_ctx;
    }
    if (VAR_15->enable_remote_block_cache == VAR_6) {
        VAR_12->block_cache_ctx.use_cache |= VAR_5;
    }
    VAR_12->block_cache_ctx.remote_ctx.data = VAR_12;
    VAR_12->block_cache_ctx.remote_ctx.tair_instance =
                                             &VAR_15->remote_block_cache_instance;
    VAR_12->block_cache_ctx.curr_lookup_cache = VAR_4;

    VAR_11 = FUNC_5(VAR_10, &VAR_12->r_ctx);
    if (VAR_11 != VAR_8) {
        return VAR_11;
    }

    VAR_12->header_only = VAR_10->header_only;

    if (!VAR_12->loc_conf->upstream->enable_rcs && VAR_12->r_ctx.version == 2) {
        FUNC_8(VAR_7, VAR_10->connection->log, 0,
                      "custom file requires tfs_enable_rcs on,"
                      " and make sure you have MetaServer and RootServer!");
        return VAR_1;
    }

    switch (VAR_12->r_ctx.action.code) {
    case 140:
    case 139:
    case 131:
    case 130:
    case 134:
    case 133:
    case 136:
    case 135:
    case 129:
    case 137:
    case 132:
    case 138:
        VAR_11 = FUNC_0(VAR_10);

        if (VAR_11 != VAR_8) {
            return VAR_11;
        }

        VAR_10->headers_out.content_length_n = -1;
        FUNC_6(VAR_10, VAR_12, VAR_9);
        VAR_10->main->count++;
        FUNC_7(VAR_10);
        break;
    case 128:
        VAR_10->headers_out.content_length_n = -1;
        FUNC_6(VAR_10, VAR_12, VAR_9);
        VAR_11 = FUNC_4(VAR_10,
                                               FUNC_7);
        if (VAR_11 >= VAR_3) {
            return VAR_11;
        }
        break;
    }

    return VAR_0;
}
