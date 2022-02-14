
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
struct TYPE_6__ {int log; TYPE_1__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_2__ ngx_http_tfs_t ;
struct TYPE_7__ {int type; } ;
typedef TYPE_3__ ngx_http_tfs_header_t ;
struct TYPE_5__ {int body_buffer; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_tfs_t *VAR_2)
{
    uint16_t VAR_3;
    ngx_str_t VAR_4;
    ngx_http_tfs_header_t *VAR_5;

    VAR_5 = (ngx_http_tfs_header_t *) VAR_2->header;
    VAR_3 = VAR_5->type;

    switch (VAR_3) {

    case 128:
        FUNC_2(&VAR_4, "write data(data server)");
        return FUNC_0(&VAR_2->tfs_peer->body_buffer, &VAR_4,
                                           VAR_2->log);
    default:
        FUNC_1(VAR_1, VAR_2->log, 0,
                      "write file(ds) response msg type is invalid %d ", VAR_3);
    }

    return VAR_0;
}
