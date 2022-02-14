
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
struct TYPE_5__ {int log; TYPE_2__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_1__ ngx_http_tfs_t ;
struct TYPE_6__ {int body_buffer; } ;
typedef TYPE_2__ ngx_http_tfs_peer_connection_t ;
struct TYPE_7__ {int type; } ;
typedef TYPE_3__ ngx_http_tfs_header_t ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_tfs_t *VAR_3)
{
    uint16_t VAR_4;
    ngx_str_t VAR_5;
    ngx_http_tfs_header_t *VAR_6;
    ngx_http_tfs_peer_connection_t *VAR_7;

    VAR_6 = (ngx_http_tfs_header_t *) VAR_3->header;
    VAR_7 = VAR_3->tfs_peer;
    VAR_4 = VAR_6->type;

    switch (VAR_4) {

    case 128:
        FUNC_2(&VAR_5, "write message (meta server)");
        return FUNC_0(&VAR_7->body_buffer, &VAR_5, VAR_3->log);
    default:
        FUNC_1(VAR_1, VAR_3->log, 0,
                      " file type is %d ", VAR_4);
        return VAR_0;
    }

    return VAR_2;
}
