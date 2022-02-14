
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jit_State ;
typedef int int32_t ;
typedef int cTValue ;
struct TYPE_4__ {scalar_t__ ctypeid; } ;
typedef int TRef ;
typedef TYPE_1__ GCcdata ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static GCcdata *FUNC_7(jit_State *VAR_6, TRef VAR_7, cTValue *VAR_8)
{
  GCcdata *VAR_9;
  TRef VAR_10;
  if (!FUNC_6(VAR_7))
    FUNC_5(VAR_6, VAR_5);
  VAR_9 = FUNC_2(VAR_8);

  VAR_10 = FUNC_3(FUNC_0(VAR_4, VAR_2), VAR_7, VAR_0);
  FUNC_3(FUNC_1(VAR_3, VAR_1), VAR_10, FUNC_4(VAR_6, (int32_t)VAR_9->ctypeid));
  return VAR_9;
}
