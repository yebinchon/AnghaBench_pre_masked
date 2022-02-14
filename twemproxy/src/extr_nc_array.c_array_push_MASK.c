
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct array {size_t nelem; size_t nalloc; size_t size; void* elem; } ;


 void* FUNC_0 (void*,int) ;

void *
FUNC_1(struct array *VAR_0)
{
    void *VAR_1, *VAR_2;
    size_t VAR_3;

    if (VAR_0->nelem == VAR_0->nalloc) {


        VAR_3 = VAR_0->size * VAR_0->nalloc;
        VAR_2 = FUNC_0(VAR_0->elem, 2 * VAR_3);
        if (VAR_2 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_0->elem = VAR_2;
        VAR_0->nalloc *= 2;
    }

    VAR_1 = (uint8_t *)VAR_0->elem + VAR_0->size * VAR_0->nelem;
    VAR_0->nelem++;

    return VAR_1;
}
