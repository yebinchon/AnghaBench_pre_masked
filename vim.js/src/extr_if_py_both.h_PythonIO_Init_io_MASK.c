
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(void)
{
    if (FUNC_2("stdout", (PyObject *)(void *)&VAR_1))
 return -1;
    if (FUNC_2("stderr", (PyObject *)(void *)&VAR_0))
 return -1;

    if (FUNC_1())
    {
 FUNC_0(FUNC_3("E264: Python: Error initialising I/O objects"));
 return -1;
    }

    return 0;
}
