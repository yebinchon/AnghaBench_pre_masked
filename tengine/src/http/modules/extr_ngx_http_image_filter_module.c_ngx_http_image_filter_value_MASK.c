
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_3__ {int len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ngx_uint_t
FUNC_2(ngx_str_t *VAR_5)
{
    ngx_int_t VAR_6;

    if (VAR_5->len == 1 && VAR_5->data[0] == '-') {
        return (ngx_uint_t) -1;
    }

    VAR_6 = FUNC_0(VAR_5->data, VAR_5->len);

    if (VAR_6 > 0) {
        return (ngx_uint_t) VAR_6;
    }
    return 0;
}
