
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int runner ;
typedef int rangeinitializer ;
struct TYPE_4__ {scalar_t__ arg; int skip; } ;
typedef TYPE_1__ exarg_T ;
typedef int char_u ;


 int FUNC_0 (char*,int ,int ,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *) ;

void
FUNC_3(exarg_T *VAR_2)
{
    char_u *VAR_3;

    VAR_3 = FUNC_1(VAR_2, VAR_2->arg);
    if (!VAR_2->skip)
    {
 FUNC_0(VAR_3 == ((void*)0) ? (char *) VAR_2->arg : (char *) VAR_3,
  (rangeinitializer) VAR_0,
  (runner) VAR_1,
  (void *) VAR_2);
    }
    FUNC_2(VAR_3);
}
