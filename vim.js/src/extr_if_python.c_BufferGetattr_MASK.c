
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int BufferObject ;


 int * FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int * FUNC_4 (int ,int *,char*) ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_1, char *VAR_2)
{
    PyObject *VAR_3;

    if ((VAR_3 = FUNC_1((BufferObject *)(VAR_1), VAR_2)))
 return VAR_3;

    if (FUNC_2((BufferObject *)(VAR_1)))
 return ((void*)0);

    VAR_3 = FUNC_0((BufferObject *)(VAR_1), VAR_2);
    if (VAR_3 || FUNC_3())
 return VAR_3;
    else
 return FUNC_4(VAR_0, VAR_1, VAR_2);
}
