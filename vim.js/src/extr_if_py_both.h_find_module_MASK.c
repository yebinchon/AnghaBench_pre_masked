
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int PyObject ;


 int * FUNC_0 (int ,char*,char*,int,...) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*) ;
 int * FUNC_4 (char*,int,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,char) ;

__attribute__((used)) static PyObject *
FUNC_6(char *VAR_1, char *VAR_2, PyObject *VAR_3)
{
    PyObject *VAR_4;
    PyObject *VAR_5;
    char *VAR_6;

    if ((VAR_6 = (char *)FUNC_5((char_u *) VAR_2, '.')))
    {




 PyObject *VAR_7;
 int VAR_8 = (int) (VAR_6 - 1 - VAR_2);

 if (!(VAR_4 = FUNC_0(VAR_0,
   "s#O", VAR_2, VAR_8, VAR_3)))
     return ((void*)0);

 if (!(VAR_5 = FUNC_4(
   VAR_1,
   ((int) (VAR_2 - VAR_1)) + VAR_8,
   VAR_4)))
 {
     FUNC_2(VAR_4);
     return ((void*)0);
 }

 FUNC_2(VAR_4);

 if (!(VAR_7 = FUNC_1(VAR_5, "__path__")))
 {
     FUNC_2(VAR_5);
     return ((void*)0);
 }

 FUNC_2(VAR_5);

 VAR_5 = FUNC_6(VAR_1, VAR_6 + 1, VAR_7);

 FUNC_2(VAR_7);

 return VAR_5;
    }
    else
    {
 if (!(VAR_4 = FUNC_0(VAR_0,
   "sO", VAR_2, *VAR_3)))
     return ((void*)0);

 if (!(VAR_5 = FUNC_4(
   VAR_1,
   (int)FUNC_3(VAR_1),
   VAR_4)))
 {
     FUNC_2(VAR_4);
     return ((void*)0);
 }

 FUNC_2(VAR_4);

 return VAR_5;
    }
}
