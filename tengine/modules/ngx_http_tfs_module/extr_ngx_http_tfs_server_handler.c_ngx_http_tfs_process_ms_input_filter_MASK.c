
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_4__ {int length; int log; scalar_t__ header; } ;
typedef TYPE_1__ ngx_http_tfs_t ;
struct TYPE_5__ {int len; } ;
typedef TYPE_2__ ngx_http_tfs_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;

ngx_int_t
FUNC_1(ngx_http_tfs_t *VAR_2)
{
    ngx_http_tfs_header_t *VAR_3;

    VAR_3 = (ngx_http_tfs_header_t *) VAR_2->header;
    VAR_2->length = VAR_3->len;

    FUNC_0(VAR_0, VAR_2->log, 0,
                   "ls dir len is %O",
                   VAR_2->length);

    return VAR_1;
}
