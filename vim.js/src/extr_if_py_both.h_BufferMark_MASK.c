
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lnum; scalar_t__ col; } ;
typedef TYPE_1__ pos_T ;
typedef char char_u ;
typedef int buf_T ;
struct TYPE_7__ {int buf; } ;
typedef int PyObject ;
typedef TYPE_2__ BufferObject ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int * FUNC_4 (char*,long,long) ;
 int FUNC_5 (int *) ;
 int * VAR_2 ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__* FUNC_10 (char,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ) ;

__attribute__((used)) static PyObject *
FUNC_13(BufferObject *VAR_3, PyObject *VAR_4)
{
    pos_T *VAR_5;
    char_u *VAR_6;
    char_u VAR_7;
    buf_T *VAR_8;
    PyObject *VAR_9;

    if (FUNC_0(VAR_3))
 return ((void*)0);

    if (!(VAR_6 = FUNC_7(VAR_4, &VAR_9)))
 return ((void*)0);

    if (VAR_6[0] == '\0' || VAR_6[1] != '\0')
    {
 FUNC_2(VAR_1,
  FUNC_1("mark name must be a single character"));
 FUNC_6(VAR_9);
 return ((void*)0);
    }

    VAR_7 = *VAR_6;

    FUNC_6(VAR_9);

    FUNC_9();
    FUNC_12(&VAR_8, VAR_3->buf);
    VAR_5 = FUNC_10(VAR_7, VAR_0);
    FUNC_11(VAR_8);
    if (FUNC_8())
 return ((void*)0);

    if (VAR_5 == ((void*)0))
    {
 FUNC_3(FUNC_1("invalid mark name"));
 return ((void*)0);
    }

    if (VAR_5->lnum <= 0)
    {

 FUNC_5(VAR_2);
 return VAR_2;
    }

    return FUNC_4("(ll)", (long)(VAR_5->lnum), (long)(VAR_5->col));
}
