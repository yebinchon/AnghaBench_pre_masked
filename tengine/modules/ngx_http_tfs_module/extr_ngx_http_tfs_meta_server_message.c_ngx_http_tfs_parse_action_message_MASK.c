
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int log; scalar_t__ header; TYPE_2__* tfs_peer; } ;
typedef TYPE_1__ ngx_http_tfs_t ;
struct TYPE_6__ {int body_buffer; } ;
typedef TYPE_2__ ngx_http_tfs_peer_connection_t ;
struct TYPE_7__ {int type; } ;
typedef TYPE_3__ ngx_http_tfs_header_t ;


 int VAR_0 ;

 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_tfs_t *VAR_1)
{
    uint16_t VAR_2;
    ngx_str_t VAR_3;
    ngx_http_tfs_header_t *VAR_4;
    ngx_http_tfs_peer_connection_t *VAR_5;

    VAR_5 = VAR_1->tfs_peer;
    VAR_4 = (ngx_http_tfs_header_t *) VAR_1->header;
    VAR_2 = VAR_4->type;

    switch (VAR_2) {

    case 128:
        FUNC_1(&VAR_3, "action (meta server)");
        return FUNC_0(&VAR_5->body_buffer, &VAR_3, VAR_1->log);
    default:
        break;
    }

    return VAR_0;
}
