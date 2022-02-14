
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int PyTypeObject ;
typedef int PyObject ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*,int **) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PyObject *
FUNC_5(PyTypeObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
    PyObject *VAR_4;
    char_u *VAR_5;

    if (VAR_3)
    {
 FUNC_3(VAR_0,
  FUNC_1("function constructor does not accept keyword arguments"));
 return ((void*)0);
    }

    if (!FUNC_2(VAR_2, "et", "ascii", &VAR_5))
 return ((void*)0);

    VAR_4 = FUNC_0(VAR_1, VAR_5);

    FUNC_4(VAR_5);

    return VAR_4;
}
