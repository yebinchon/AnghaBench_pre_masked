
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {int port; int ip; } ;
typedef TYPE_2__ ngx_http_tfs_inet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,size_t) ;
 int * FUNC_2 (int *,int *,char) ;

ngx_int_t
FUNC_3(ngx_str_t *VAR_3, ngx_http_tfs_inet_t *VAR_4)
{
    u_char *VAR_5, *VAR_6;
    size_t VAR_7;
    ngx_int_t VAR_8;

    VAR_6 = VAR_3->data + VAR_3->len;

    VAR_5 = FUNC_2(VAR_3->data, VAR_6, ':');

    if (VAR_5) {
        VAR_5++;

        VAR_7 = VAR_6 - VAR_5;

        if (VAR_7 == 0) {
            return VAR_1;
        }

        VAR_8 = FUNC_0(VAR_5, VAR_7);

        if (VAR_8 < 1 || VAR_8 > 65535) {
            return VAR_1;
        }

        VAR_4->port = VAR_8;

        VAR_4->ip = FUNC_1(VAR_3->data, VAR_3->len - VAR_7 - 1);
        if (VAR_4->ip == VAR_0) {
            return VAR_1;
        }

    } else {
        return VAR_1;
    }

    return VAR_2;
}
