
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
struct TYPE_3__ {size_t len; int* data; } ;
typedef TYPE_1__ ngx_str_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,size_t) ;

ssize_t
FUNC_1(ngx_str_t *VAR_2)
{
    u_char VAR_3;
    size_t VAR_4;
    ssize_t VAR_5, VAR_6, VAR_7;

    VAR_4 = VAR_2->len;

    if (VAR_4 == 0) {
        return VAR_0;
    }

    VAR_3 = VAR_2->data[VAR_4 - 1];

    switch (VAR_3) {
    case 'K':
    case 'k':
        VAR_4--;
        VAR_7 = VAR_1 / 1024;
        VAR_6 = 1024;
        break;

    case 'M':
    case 'm':
        VAR_4--;
        VAR_7 = VAR_1 / (1024 * 1024);
        VAR_6 = 1024 * 1024;
        break;
    default:
        VAR_7 = VAR_1;
        VAR_6 = 1;
    }

    VAR_5 = FUNC_0(VAR_2->data, VAR_4);
    if (VAR_5 == VAR_0 || VAR_5 > VAR_7) {
        return VAR_0;
    }

    VAR_5 *= VAR_6;

    return VAR_5;
}
