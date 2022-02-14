
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
typedef int PyObject ;
typedef int PyInt ;
typedef TYPE_1__ BufferObject ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int *,int *) ;
 int * FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static PyObject *
FUNC_3(BufferObject *VAR_0, PyObject *VAR_1)
{
    PyInt VAR_2;
    PyInt VAR_3;

    if (FUNC_0(VAR_0))
 return ((void*)0);

    if (!FUNC_1(VAR_1, "nn", &VAR_2, &VAR_3))
 return ((void*)0);

    return FUNC_2(VAR_0->buf, VAR_2, VAR_3);
}
