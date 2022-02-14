
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int cTValue ;
struct TYPE_5__ {int ctypeid; } ;
struct TYPE_4__ {int info; } ;
typedef int MMS ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int ) ;
 TYPE_2__* FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_1, MMS VAR_2)
{
  CTState *VAR_3 = FUNC_2(VAR_1);
  CTypeID VAR_4 = FUNC_5(VAR_1, 1)->ctypeid;
  CType *VAR_5 = FUNC_4(VAR_3, VAR_4);
  cTValue *VAR_6;
  if (FUNC_3(VAR_5->info)) VAR_4 = FUNC_1(VAR_5->info);
  VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_2);
  if (!VAR_6)
    FUNC_8(VAR_1, VAR_0, FUNC_11(FUNC_7(VAR_1, VAR_4, ((void*)0))),
     FUNC_11(FUNC_10(FUNC_0(VAR_1), VAR_2)));
  return FUNC_9(VAR_1, VAR_6);
}
