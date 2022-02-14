
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int footer_last; int header_first; int footer; int header; int end; int begin; } ;
typedef TYPE_1__ ngx_http_slice_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_http_slice_loc_conf_t *VAR_4 = VAR_2;
    ngx_http_slice_loc_conf_t *VAR_5 = VAR_3;

    FUNC_0(VAR_5->begin, VAR_4->begin, "begin");
    FUNC_0(VAR_5->end, VAR_4->end, "end");
    FUNC_0(VAR_5->header, VAR_4->header, "");
    FUNC_0(VAR_5->footer, VAR_4->footer, "");
    FUNC_1(VAR_5->header_first, VAR_4->header_first, 1);
    FUNC_1(VAR_5->footer_last, VAR_4->footer_last, 1);

    return VAR_0;
}
