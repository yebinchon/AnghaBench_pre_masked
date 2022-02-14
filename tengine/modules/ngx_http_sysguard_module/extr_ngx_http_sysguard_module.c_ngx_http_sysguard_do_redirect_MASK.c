
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int args; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2, ngx_str_t *VAR_3)
{
    if (VAR_3->len == 0) {
        return VAR_1;
    } else if (VAR_3->data[0] == '@') {
        (void) FUNC_2(VAR_2, VAR_3);
    } else {
        (void) FUNC_1(VAR_2, VAR_3, &VAR_2->args);
    }

    FUNC_0(VAR_2, VAR_0);

    return VAR_0;
}
