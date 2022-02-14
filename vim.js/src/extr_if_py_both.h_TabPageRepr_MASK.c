
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tab; } ;
typedef TYPE_1__ TabPageObject ;
typedef int PyObject ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static PyObject *
FUNC_2(TabPageObject *VAR_1)
{
    if (VAR_1->tab == VAR_0)
 return FUNC_0("<tabpage object (deleted) at %p>", (VAR_1));
    else
    {
 int VAR_2 = FUNC_1(VAR_1->tab);

 if (VAR_2 == 0)
     return FUNC_0("<tabpage object (unknown) at %p>",
     (VAR_1));
 else
     return FUNC_0("<tabpage %d>", VAR_2 - 1);
    }
}
