
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct array {size_t size; size_t nalloc; scalar_t__ nelem; int * elem; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct array*) ;

struct array *
FUNC_3(uint32_t VAR_0, size_t VAR_1)
{
    struct array *VAR_2;

    FUNC_0(VAR_0 != 0 && VAR_1 != 0);

    VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->elem = FUNC_1(VAR_0 * VAR_1);
    if (VAR_2->elem == ((void*)0)) {
        FUNC_2(VAR_2);
        return ((void*)0);
    }

    VAR_2->nelem = 0;
    VAR_2->size = VAR_1;
    VAR_2->nalloc = VAR_0;

    return VAR_2;
}
