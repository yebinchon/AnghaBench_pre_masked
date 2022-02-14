
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct array {int nelem; int size; scalar_t__ elem; } ;


 int FUNC_0 (int) ;

void *
FUNC_1(struct array *VAR_0)
{
    void *VAR_1;

    FUNC_0(VAR_0->nelem != 0);

    VAR_0->nelem--;
    VAR_1 = (uint8_t *)VAR_0->elem + VAR_0->size * VAR_0->nelem;

    return VAR_1;
}
