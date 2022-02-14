
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jit_State ;
typedef int IRIns ;
typedef int AliasRet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int *) ;

__attribute__((used)) static AliasRet FUNC_2(jit_State *VAR_2, IRIns *VAR_3, IRIns *VAR_4)
{
  IRIns *VAR_5 = FUNC_1(VAR_2, VAR_3);
  IRIns *VAR_6 = FUNC_1(VAR_2, VAR_4);
  if (VAR_5 == VAR_6)
    return VAR_0;
  if (VAR_5 && VAR_6)
    return VAR_1;
  if (VAR_6) { VAR_5 = VAR_6; VAR_4 = VAR_3; }
  return FUNC_0(VAR_2, VAR_5, VAR_4);
}
