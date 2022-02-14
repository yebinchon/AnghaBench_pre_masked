
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
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,int *,int*) ;

__attribute__((used)) static PyInt
FUNC_4(
 BufferObject *VAR_2,
 PyInt VAR_3,
 PyObject *VAR_4,
 PyInt VAR_5,
 PyInt VAR_6,
 PyInt *VAR_7)
{
    PyInt VAR_8;

    if (FUNC_0(VAR_2))
 return -1;

    if (VAR_6 == -1)
 VAR_6 = VAR_2->buf->b_ml.ml_line_count;

    if (VAR_3 < 0)
 VAR_3 += VAR_6 - VAR_5 + 1;

    if (VAR_3 < 0 || VAR_3 > VAR_6 - VAR_5)
    {
 FUNC_2(VAR_1, FUNC_1("line number out of range"));
 return -1;
    }

    if (FUNC_3(VAR_2->buf, VAR_3+VAR_5, VAR_4, &VAR_8) == VAR_0)
 return -1;

    if (VAR_7)
 *VAR_7 = VAR_6 + VAR_8;

    return 0;
}
