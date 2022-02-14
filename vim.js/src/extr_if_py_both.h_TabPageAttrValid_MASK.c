
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tab; } ;
typedef TYPE_1__ TabPageObject ;
typedef int PyObject ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static PyObject *
FUNC_2(TabPageObject *VAR_3, char *VAR_4)
{
    PyObject *VAR_5;

    if (FUNC_1(VAR_4, "valid") != 0)
 return ((void*)0);

    VAR_5 = ((VAR_3->tab == VAR_0) ? VAR_1 : VAR_2);
    FUNC_0(VAR_5);
    return VAR_5;
}
