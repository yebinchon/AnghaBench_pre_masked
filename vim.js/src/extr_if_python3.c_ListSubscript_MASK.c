
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int ListObject ;


 int * FUNC_0 (int *,long) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int ) ;
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
 return FUNC_0((ListObject *)(VAR_0), VAR_2);
    }
    else if (FUNC_5(VAR_1))
    {
 Py_ssize_t VAR_3, VAR_4, VAR_5, VAR_6;

 if (FUNC_6(VAR_1, FUNC_1((ListObject *)(VAR_0)),
     &VAR_3, &VAR_4, &VAR_5, &VAR_6) < 0)
     return ((void*)0);
 return FUNC_2((ListObject *)(VAR_0), VAR_3, VAR_4);
    }
    else
    {
 FUNC_7(VAR_1);
 return ((void*)0);
    }
}
