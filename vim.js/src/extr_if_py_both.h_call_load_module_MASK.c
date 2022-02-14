
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int ,char*,char*,int,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

__attribute__((used)) static PyObject *
FUNC_8(char *VAR_3, int VAR_4, PyObject *VAR_5)
{
    PyObject *VAR_6, *VAR_7, *VAR_8;

    if (!FUNC_4(VAR_5))
    {
 FUNC_1(VAR_1,
  FUNC_0("expected 3-tuple as imp.find_module() result, but got %s"),
  FUNC_7(VAR_5));
 return ((void*)0);
    }
    if (FUNC_6(VAR_5) != 3)
    {
 FUNC_1(VAR_1,
  FUNC_0("expected 3-tuple as imp.find_module() result, but got "
     "tuple of size %d"),
  (int) FUNC_6(VAR_5));
 return ((void*)0);
    }

    if (!(VAR_6 = FUNC_5(VAR_5, 0))
     || !(VAR_7 = FUNC_5(VAR_5, 1))
     || !(VAR_8 = FUNC_5(VAR_5, 2)))
    {
 FUNC_2(VAR_0,
  FUNC_0("internal error: imp.find_module returned tuple with NULL"));
 return ((void*)0);
    }

    return FUNC_3(VAR_2,
     "s#OOO", VAR_3, VAR_4, VAR_6, VAR_7, VAR_8);
}
