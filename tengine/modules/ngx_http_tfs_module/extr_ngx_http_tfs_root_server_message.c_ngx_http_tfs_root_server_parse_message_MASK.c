
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uLongf ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {TYPE_2__* loc_conf; int log; TYPE_6__* tfs_peer; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_12__ {int version; int length; int table; } ;
typedef TYPE_5__ ngx_http_tfs_rs_response_t ;
struct TYPE_10__ {scalar_t__ pos; } ;
struct TYPE_13__ {TYPE_3__ body_buffer; } ;
typedef TYPE_6__ ngx_http_tfs_peer_connection_t ;
struct TYPE_8__ {int version; scalar_t__ table; } ;
struct TYPE_9__ {TYPE_1__ meta_server_table; } ;
typedef int Bytef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int*,int ,int ) ;

ngx_int_t
FUNC_2(ngx_http_tfs_t *VAR_6)
{
    uLongf VAR_7;
    ngx_int_t VAR_8;
    ngx_http_tfs_rs_response_t *VAR_9;
    ngx_http_tfs_peer_connection_t *VAR_10;

    VAR_10 = VAR_6->tfs_peer;
    VAR_9 = (ngx_http_tfs_rs_response_t *) (VAR_10->body_buffer.pos);
    VAR_7 = VAR_1 * sizeof(uint64_t);

    VAR_8 = FUNC_1((Bytef *) (VAR_6->loc_conf->meta_server_table.table),
                    &VAR_7, VAR_9->table, VAR_9->length);
    if (VAR_8 != VAR_4) {
        FUNC_0(VAR_2, VAR_6->log, VAR_5, "uncompress error");
        return VAR_0;
    }

    VAR_6->loc_conf->meta_server_table.version = VAR_9->version;

    return VAR_3;
}
