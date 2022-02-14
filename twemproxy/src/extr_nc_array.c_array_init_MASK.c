
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct array {size_t size; size_t nalloc; scalar_t__ nelem; int * elem; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (size_t) ;

rstatus_t
FUNC_2(struct array *VAR_2, uint32_t VAR_3, size_t VAR_4)
{
    FUNC_0(VAR_3 != 0 && VAR_4 != 0);

    VAR_2->elem = FUNC_1(VAR_3 * VAR_4);
    if (VAR_2->elem == ((void*)0)) {
        return VAR_0;
    }

    VAR_2->nelem = 0;
    VAR_2->size = VAR_4;
    VAR_2->nalloc = VAR_3;

    return VAR_1;
}
