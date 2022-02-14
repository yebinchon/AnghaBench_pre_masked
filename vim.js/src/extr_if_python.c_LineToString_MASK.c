
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyInt ;


 char* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static PyObject *
FUNC_3(const char *VAR_0)
{
    PyObject *VAR_1;
    PyInt VAR_2 = FUNC_2(VAR_0);
    char *VAR_3;





    VAR_1 = FUNC_1(((void*)0), VAR_2);
    if (VAR_1 == ((void*)0))
 return ((void*)0);

    VAR_3 = FUNC_0(VAR_1);

    while (*VAR_0)
    {
 if (*VAR_0 == '\n')
     *VAR_3 = '\0';
 else
     *VAR_3 = *VAR_0;

 ++VAR_3;
 ++VAR_0;
    }

    return VAR_1;
}
