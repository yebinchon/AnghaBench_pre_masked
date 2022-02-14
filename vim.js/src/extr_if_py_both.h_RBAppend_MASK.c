
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ml_line_count; } ;
struct TYPE_8__ {TYPE_1__ b_ml; } ;
struct TYPE_7__ {TYPE_4__* buf; } ;
typedef int PyObject ;
typedef int PyInt ;
typedef TYPE_2__ BufferObject ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int,int *,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int **,int*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static PyObject *
FUNC_6(
 BufferObject *VAR_3,
 PyObject *VAR_4,
 PyInt VAR_5,
 PyInt VAR_6,
 PyInt *VAR_7)
{
    PyObject *VAR_8;
    PyInt VAR_9;
    PyInt VAR_10;
    PyInt VAR_11;

    if (FUNC_0(VAR_3))
 return ((void*)0);

    if (VAR_6 == -1)
 VAR_6 = VAR_3->buf->b_ml.ml_line_count;

    VAR_10 = VAR_11 = VAR_6 - VAR_5 + 1;

    if (!FUNC_3(VAR_4, "O|n", &VAR_8, &VAR_11))
 return ((void*)0);

    if (VAR_11 < 0 || VAR_11 > VAR_10)
    {
 FUNC_4(VAR_1, FUNC_2("line number out of range"));
 return ((void*)0);
    }

    if (FUNC_1(VAR_3->buf, VAR_11 + VAR_5 - 1, VAR_8, &VAR_9) == VAR_0)
 return ((void*)0);

    if (VAR_7)
 *VAR_7 = VAR_6 + VAR_9;

    FUNC_5(VAR_2);
    return VAR_2;
}
