
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TabPageObject ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_6(PyObject *VAR_1, PyObject *VAR_2)
{
    PyObject *VAR_3;

    FUNC_1(VAR_0, VAR_2);

    if ((VAR_3 = FUNC_5((TabPageObject *)(VAR_1), VAR_0)))
 return VAR_3;

    if (FUNC_0((TabPageObject *)(VAR_1)))
 return ((void*)0);

    VAR_3 = FUNC_4((TabPageObject *)(VAR_1), VAR_0);
    if (VAR_3 || FUNC_2())
 return VAR_3;
    else
 return FUNC_3(VAR_1, VAR_2);
}
