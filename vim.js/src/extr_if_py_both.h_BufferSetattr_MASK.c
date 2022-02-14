
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int char_u ;
typedef int aco_save_T ;
struct TYPE_4__ {int buf; } ;
typedef int PyObject ;
typedef TYPE_1__ BufferObject ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(BufferObject *VAR_2, char *VAR_3, PyObject *VAR_4)
{
    if (FUNC_0(VAR_2))
 return -1;

    if (FUNC_11(VAR_3, "name") == 0)
    {
 char_u *VAR_5;
 aco_save_T VAR_6;
 int VAR_7;
 PyObject *VAR_8;

 if (!(VAR_5 = FUNC_5(VAR_4, &VAR_8)))
     return -1;

 FUNC_7();

 FUNC_8(&VAR_6, VAR_2->buf);
 VAR_7 = FUNC_10(VAR_5);
 FUNC_9(&VAR_6);
 FUNC_4(VAR_8);
 if (FUNC_6())
     return -1;

 if (VAR_7 == VAR_0)
 {
     FUNC_2(FUNC_1("failed to rename buffer"));
     return -1;
 }
 return 0;
    }
    else
    {
 FUNC_3(VAR_1, VAR_3);
 return -1;
    }
}
