
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {scalar_t__ nelem; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct array*,scalar_t__) ;

void *
FUNC_2(struct array *VAR_0)
{
    FUNC_0(VAR_0->nelem != 0);

    return FUNC_1(VAR_0, VAR_0->nelem - 1);
}
