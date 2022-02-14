
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int OutputObject ;


 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_0 ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_6(OutputObject *VAR_1, PyObject *VAR_2)
{
    PyObject *VAR_3;
    PyObject *VAR_4;

    if (!(VAR_3 = FUNC_2(VAR_2)))
 return ((void*)0);

    while ((VAR_4 = FUNC_1(VAR_3)))
    {
 if (FUNC_5(VAR_1, VAR_4))
 {
     FUNC_3(VAR_3);
     FUNC_3(VAR_4);
     return ((void*)0);
 }
 FUNC_3(VAR_4);
    }

    FUNC_3(VAR_3);


    if (FUNC_0())
 return ((void*)0);

    FUNC_4(VAR_0);
    return VAR_0;
}
