
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct TYPE_3__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;

ngx_int_t
FUNC_1(u_char **VAR_2,
    ngx_str_t *VAR_3)
{
    if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_3->len == 0) {
        *((uint32_t *)*VAR_2) = 0;

    } else {
        *((uint32_t *)*VAR_2) = VAR_3->len + 1;
    }
    *VAR_2 += sizeof(uint32_t);

    if (VAR_3->len > 0) {
        FUNC_0(*VAR_2, VAR_3->data, VAR_3->len);
        *VAR_2 += VAR_3->len + 1;
    }

    return VAR_1;
}
