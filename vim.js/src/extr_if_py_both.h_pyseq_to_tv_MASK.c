
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* v_list; } ;
struct TYPE_9__ {TYPE_1__ vval; int v_type; } ;
typedef TYPE_2__ typval_T ;
struct TYPE_10__ {int lv_refcount; } ;
typedef TYPE_3__ list_T ;
typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(PyObject *VAR_1, typval_T *VAR_2, PyObject *VAR_3)
{
    list_T *VAR_4;

    if (!(VAR_4 = FUNC_2()))
 return -1;

    VAR_2->v_type = VAR_0;
    VAR_2->vval.v_list = VAR_4;

    if (FUNC_0(VAR_4, VAR_1, VAR_3) == -1)
    {
 FUNC_1(VAR_4);
 return -1;
    }

    --VAR_4->lv_refcount;
    return 0;
}
