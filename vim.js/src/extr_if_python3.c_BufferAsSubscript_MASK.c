
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
typedef int PyInt ;
typedef TYPE_3__ BufferObject ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int*,int*,int*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,long,int *,int,int,int *) ;
 int FUNC_7 (TYPE_3__*,int,int,int *,int,int ,int *) ;

__attribute__((used)) static Py_ssize_t
FUNC_8(PyObject *VAR_0, PyObject* VAR_1, PyObject* VAR_2)
{
    if (FUNC_2(VAR_1))
    {
 long VAR_3 = FUNC_1(VAR_1);
 return FUNC_6((BufferObject *)(VAR_0), VAR_3, VAR_2, 1,
      (Py_ssize_t)((BufferObject *)(VAR_0))->buf->b_ml.ml_line_count,
      ((void*)0));
    } else if (FUNC_3(VAR_1))
    {
 Py_ssize_t VAR_4, VAR_5, VAR_6, VAR_7;

 if (FUNC_0((BufferObject *) VAR_0))
     return -1;

 if (FUNC_4((PyObject *)VAR_1,
       (Py_ssize_t)((BufferObject *)(VAR_0))->buf->b_ml.ml_line_count,
       &VAR_4, &VAR_5,
       &VAR_6, &VAR_7) < 0)
 {
     return -1;
 }
 return FUNC_7((BufferObject *)(VAR_0), VAR_4, VAR_5, VAR_2, 1,
     (PyInt)((BufferObject *)(VAR_0))->buf->b_ml.ml_line_count,
     ((void*)0));
    }
    else
    {
 FUNC_5(VAR_1);
 return -1;
    }
}
