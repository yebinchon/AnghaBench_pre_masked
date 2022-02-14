
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_5__ {scalar_t__ o; int t; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef int AliasRet ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static AliasRet FUNC_4(jit_State *VAR_4, IRRef VAR_5, IRRef VAR_6)
{
  IRIns *VAR_7 = FUNC_0(VAR_5), *VAR_8 = FUNC_0(VAR_6);
  int VAR_9, VAR_10;
  FUNC_3(VAR_5 != VAR_6);
  FUNC_3(FUNC_2(VAR_7->t) && FUNC_2(VAR_8->t));

  VAR_9 = (VAR_7->o == VAR_3 || VAR_7->o == VAR_2);
  VAR_10 = (VAR_8->o == VAR_3 || VAR_8->o == VAR_2);
  if (VAR_9 && VAR_10)
    return VAR_1;
  if (VAR_10) {
    IRIns *VAR_11 = VAR_7; VAR_7 = VAR_8; VAR_8 = VAR_11;
  } else if (!VAR_9) {
    return VAR_0;
  }
  return FUNC_1(VAR_4, VAR_7, VAR_8);
}
