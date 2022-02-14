
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {scalar_t__ nelem; int size; int elem; } ;
typedef int array_compare_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

void
FUNC_2(struct array *VAR_0, array_compare_t VAR_1)
{
    FUNC_0(VAR_0->nelem != 0);

    FUNC_1(VAR_0->elem, VAR_0->nelem, VAR_0->size, VAR_1);
}
