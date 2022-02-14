
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int * last; int * end; } ;
struct TYPE_7__ {TYPE_1__ d; } ;
typedef TYPE_2__ ngx_pool_t ;


 int FUNC_0 (void*,void*,size_t) ;
 void* FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,void*) ;

void *
FUNC_3(ngx_pool_t *VAR_0, void *VAR_1,
    size_t VAR_2, size_t VAR_3)
{
    void *VAR_4;

    if (VAR_1 == ((void*)0)) {
        return FUNC_1(VAR_0, VAR_3);
    }

    if (VAR_3 == 0) {
        if ((u_char *) VAR_1 + VAR_2 == VAR_0->d.last) {
           VAR_0->d.last = VAR_1;
        } else {
           FUNC_2(VAR_0, VAR_1);
        }

        return ((void*)0);
    }

    if ((u_char *) VAR_1 + VAR_2 == VAR_0->d.last
        && (u_char *) VAR_1 + VAR_3 <= VAR_0->d.end)
    {
        VAR_0->d.last = (u_char *) VAR_1 + VAR_3;
        return VAR_1;
    }

    VAR_4 = FUNC_1(VAR_0, VAR_3);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0(VAR_4, VAR_1, VAR_2);

    FUNC_2(VAR_0, VAR_1);

    return VAR_4;
}
