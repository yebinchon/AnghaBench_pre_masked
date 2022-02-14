
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int lua_Number ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int info; int size; } ;
typedef int TValue ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(CTState *VAR_1, TValue *VAR_2, CType *VAR_3)
{
  CType *VAR_4 = FUNC_0(VAR_1, VAR_3);
  FUNC_2(FUNC_1(VAR_4->info) && VAR_4->size <= 4);

  if ((VAR_4->info & VAR_0) && (int32_t)VAR_3->size < 0)
    FUNC_4(VAR_2, (lua_Number)(uint32_t)VAR_3->size);
  else
    FUNC_3(VAR_2, (int32_t)VAR_3->size);
}
