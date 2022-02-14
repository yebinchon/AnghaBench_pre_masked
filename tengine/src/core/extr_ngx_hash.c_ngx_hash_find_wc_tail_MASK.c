
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_4__ {void* value; int hash; } ;
typedef TYPE_1__ ngx_hash_wildcard_t ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 size_t FUNC_0 (size_t,char) ;
 void* FUNC_1 (int *,size_t,char*,size_t) ;
 int FUNC_2 (int ,int ,int ,char*,void*,...) ;

void *
FUNC_3(ngx_hash_wildcard_t *VAR_2, u_char *VAR_3, size_t VAR_4)
{
    void *VAR_5;
    ngx_uint_t VAR_6, VAR_7;





    VAR_7 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        if (VAR_3[VAR_6] == '.') {
            break;
        }

        VAR_7 = FUNC_0(VAR_7, VAR_3[VAR_6]);
    }

    if (VAR_6 == VAR_4) {
        return ((void*)0);
    }





    VAR_5 = FUNC_1(&VAR_2->hash, VAR_7, VAR_3, VAR_6);





    if (VAR_5) {







        if ((uintptr_t) VAR_5 & 2) {

            VAR_6++;

            VAR_2 = (ngx_hash_wildcard_t *) ((uintptr_t) VAR_5 & (uintptr_t) ~3);

            VAR_5 = FUNC_3(VAR_2, &VAR_3[VAR_6], VAR_4 - VAR_6);

            if (VAR_5) {
                return VAR_5;
            }

            return VAR_2->value;
        }

        return VAR_5;
    }

    return VAR_2->value;
}
