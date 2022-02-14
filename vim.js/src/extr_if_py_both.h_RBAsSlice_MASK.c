
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ml_line_count; } ;
struct TYPE_8__ {TYPE_1__ b_ml; } ;
struct TYPE_7__ {TYPE_3__* buf; } ;
typedef int PyObject ;
typedef int PyInt ;
typedef TYPE_2__ BufferObject ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int,int *,int*) ;

__attribute__((used)) static PyInt
FUNC_2(
 BufferObject *VAR_1,
 PyInt VAR_2,
 PyInt VAR_3,
 PyObject *VAR_4,
 PyInt VAR_5,
 PyInt VAR_6,
 PyInt *VAR_7)
{
    PyInt VAR_8;
    PyInt VAR_9;


    if (FUNC_0(VAR_1))
 return -1;

    if (VAR_6 == -1)
 VAR_6 = VAR_1->buf->b_ml.ml_line_count;


    VAR_8 = VAR_6 - VAR_5 + 1;

    if (VAR_2 < 0)
 VAR_2 = 0;
    else if (VAR_2 > VAR_8)
 VAR_2 = VAR_8;
    if (VAR_3 < 0)
 VAR_3 = 0;
    if (VAR_3 < VAR_2)
 VAR_3 = VAR_2;
    else if (VAR_3 > VAR_8)
 VAR_3 = VAR_8;

    if (FUNC_1(VAR_1->buf, VAR_2 + VAR_5, VAR_3 + VAR_5,
      VAR_4, &VAR_9) == VAR_0)
 return -1;

    if (VAR_7)
 *VAR_7 = VAR_6 + VAR_9;

    return 0;
}
