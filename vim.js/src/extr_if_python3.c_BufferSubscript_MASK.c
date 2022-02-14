
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* buf; } ;
struct TYPE_7__ {scalar_t__ ml_line_count; } ;
struct TYPE_8__ {TYPE_1__ b_ml; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_3__ BufferObject ;


 int * FUNC_0 (TYPE_3__*,long) ;
 int * FUNC_1 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 long FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int *,int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static PyObject *
FUNC_8(PyObject *VAR_0, PyObject* VAR_1)
{
    if (FUNC_4(VAR_1))
    {
 long VAR_2 = FUNC_3(VAR_1);
 return FUNC_0((BufferObject *)(VAR_0), VAR_2);
    } else if (FUNC_5(VAR_1))
    {
 Py_ssize_t VAR_3, VAR_4, VAR_5, VAR_6;

 if (FUNC_2((BufferObject *) VAR_0))
     return ((void*)0);

 if (FUNC_6((PyObject *)VAR_1,
       (Py_ssize_t)((BufferObject *)(VAR_0))->buf->b_ml.ml_line_count,
       &VAR_3, &VAR_4,
       &VAR_5, &VAR_6) < 0)
 {
     return ((void*)0);
 }
 return FUNC_1((BufferObject *)(VAR_0), VAR_3, VAR_4);
    }
    else
    {
 FUNC_7(VAR_1);
 return ((void*)0);
    }
}
