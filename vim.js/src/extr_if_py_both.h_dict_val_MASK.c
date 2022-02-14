
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hashitem_T ;
struct TYPE_3__ {int di_tv; } ;
typedef TYPE_1__ dictitem_T ;
typedef int PyObject ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static PyObject *
FUNC_2(hashitem_T *VAR_0)
{
    dictitem_T *VAR_1;

    VAR_1 = FUNC_1(VAR_0);
    return FUNC_0(&VAR_1->di_tv);
}
