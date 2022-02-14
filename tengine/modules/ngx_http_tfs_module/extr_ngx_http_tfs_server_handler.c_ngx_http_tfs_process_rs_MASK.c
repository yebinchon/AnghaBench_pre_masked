
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int state; int * tfs_peer_servers; int pool; TYPE_2__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_1__ ngx_http_tfs_t ;
struct TYPE_9__ {int body_buffer; } ;
typedef TYPE_2__ ngx_http_tfs_peer_connection_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_10__ {scalar_t__ len; } ;
typedef TYPE_3__ ngx_http_tfs_header_t ;
typedef int ngx_buf_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

ngx_int_t
FUNC_5(ngx_http_tfs_t *VAR_3)
{
    ngx_int_t VAR_4;
    ngx_buf_t *VAR_5;
    ngx_http_tfs_inet_t *VAR_6;
    ngx_http_tfs_header_t *VAR_7;
    ngx_http_tfs_peer_connection_t *VAR_8;

    VAR_7 = (ngx_http_tfs_header_t *) VAR_3->header;
    VAR_8 = VAR_3->tfs_peer;
    VAR_5 = &VAR_8->body_buffer;

    if (FUNC_0(VAR_5) < VAR_7->len) {
        return VAR_0;
    }

    VAR_4 = FUNC_2(VAR_3);
    if (VAR_4 != VAR_2) {
        return VAR_4;
    }

    VAR_3->state += 1;

    FUNC_4(VAR_3);

    VAR_6 = FUNC_3(VAR_3);
    FUNC_1(VAR_3->pool,
                               &VAR_3->tfs_peer_servers[VAR_1],
                               VAR_6);

    return VAR_2;
}
