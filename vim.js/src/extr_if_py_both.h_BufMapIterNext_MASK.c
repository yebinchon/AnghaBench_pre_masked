
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* buf; } ;
struct TYPE_4__ {int b_next; } ;
typedef int PyObject ;
typedef TYPE_2__ BufferObject ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static PyObject *
FUNC_2(PyObject **VAR_0)
{
    PyObject *VAR_1;
    PyObject *VAR_2;

    if (!*VAR_0)
 return ((void*)0);

    VAR_2 = *VAR_0;

    if (FUNC_1((BufferObject *)(VAR_2)))
    {
 *VAR_0 = ((void*)0);
 return ((void*)0);
    }

    if (!((BufferObject *)(VAR_2))->buf->b_next)
 VAR_1 = ((void*)0);
    else if (!(VAR_1 = FUNC_0(((BufferObject *)(VAR_2))->buf->b_next)))
 return ((void*)0);
    *VAR_0 = VAR_1;


    return VAR_2;
}
