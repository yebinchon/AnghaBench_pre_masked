
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ lua_Number ;
typedef scalar_t__ int32_t ;
struct TYPE_7__ {int nval; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef int TValue ;
typedef TYPE_2__ ExpDesc ;
typedef scalar_t__ BinOpr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(BinOpr VAR_2, ExpDesc *VAR_3, ExpDesc *VAR_4)
{
  TValue VAR_5;
  lua_Number VAR_6;
  if (!FUNC_0(VAR_3) || !FUNC_0(VAR_4)) return 0;
  VAR_6 = FUNC_3(FUNC_1(VAR_3), FUNC_1(VAR_4), (int)VAR_2-VAR_1);
  FUNC_5(&VAR_5, VAR_6);
  if (FUNC_7(&VAR_5) || FUNC_6(&VAR_5)) return 0;
  if (VAR_0) {
    int32_t VAR_7 = FUNC_2(VAR_6);
    if ((lua_Number)VAR_7 == VAR_6) {
      FUNC_4(&VAR_3->u.nval, VAR_7);
      return 1;
    }
  }
  FUNC_5(&VAR_3->u.nval, VAR_6);
  return 1;
}
