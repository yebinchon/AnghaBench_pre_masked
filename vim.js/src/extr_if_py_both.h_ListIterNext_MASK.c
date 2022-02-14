
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* lw_item; } ;
struct TYPE_7__ {TYPE_2__ lw; } ;
typedef TYPE_3__ listiterinfo_T ;
struct TYPE_5__ {struct TYPE_5__* li_next; int li_tv; } ;
typedef int PyObject ;


 int * FUNC_0 (int *) ;

__attribute__((used)) static PyObject *
FUNC_1(listiterinfo_T **VAR_0)
{
    PyObject *VAR_1;

    if (!((*VAR_0)->lw.lw_item))
 return ((void*)0);

    if (!(VAR_1 = FUNC_0(&((*VAR_0)->lw.lw_item->li_tv))))
 return ((void*)0);

    (*VAR_0)->lw.lw_item = (*VAR_0)->lw.lw_item->li_next;

    return VAR_1;
}
