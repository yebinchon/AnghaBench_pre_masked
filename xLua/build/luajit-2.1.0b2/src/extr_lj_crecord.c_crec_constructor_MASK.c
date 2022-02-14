
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jit_State ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ ctypeid; } ;
typedef int TRef ;
typedef TYPE_1__ GCcdata ;
typedef scalar_t__ CTypeID ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static CTypeID FUNC_7(jit_State *VAR_5, GCcdata *VAR_6, TRef VAR_7)
{
  CTypeID VAR_8;
  FUNC_5(FUNC_6(VAR_7) && VAR_6->ctypeid == VAR_0);
  VAR_8 = *(CTypeID *)FUNC_2(VAR_6);
  VAR_7 = FUNC_3(FUNC_0(VAR_4, VAR_2), VAR_7, VAR_1);
  FUNC_3(FUNC_1(VAR_3, VAR_2), VAR_7, FUNC_4(VAR_5, (int32_t)VAR_8));
  return VAR_8;
}
