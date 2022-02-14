
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_6__ {int * name; } ;
struct TYPE_5__ {scalar_t__ (* tp_alloc ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ PyTypeObject ;
typedef int PyObject ;
typedef TYPE_2__ FunctionObject ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static PyObject *
FUNC_9(PyTypeObject *VAR_2, char_u *VAR_3)
{
    FunctionObject *VAR_4;

    VAR_4 = (FunctionObject *) VAR_2->tp_alloc(VAR_2, 0);

    if (VAR_4 == ((void*)0))
 return ((void*)0);

    if (FUNC_4(*VAR_3))
    {
 if (!FUNC_6(VAR_3))
 {
     FUNC_1(VAR_1,
      FUNC_0("unnamed function %s does not exist"), VAR_3);
     return ((void*)0);
 }
 VAR_4->name = FUNC_8(VAR_3);
 FUNC_2(VAR_4->name);
    }
    else
 if ((VAR_4->name = FUNC_3(VAR_3,
        FUNC_7(VAR_3, VAR_0) == ((void*)0)))
  == ((void*)0))
 {
     FUNC_1(VAR_1,
      FUNC_0("function %s does not exist"), VAR_3);
     return ((void*)0);
 }

    return (PyObject *)(VAR_4);
}
