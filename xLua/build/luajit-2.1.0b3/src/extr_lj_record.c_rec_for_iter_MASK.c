
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lua_Number ;
typedef int cTValue ;
typedef int LoopEvent ;
typedef int IROp ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static LoopEvent FUNC_2(IROp *VAR_10, cTValue *VAR_11, int VAR_12)
{
  lua_Number VAR_13 = FUNC_0(&VAR_11[VAR_2]);
  lua_Number VAR_14 = FUNC_0(&VAR_11[VAR_0]);
  lua_Number VAR_15 = FUNC_0(&VAR_11[VAR_1]);
  if (VAR_12)
    VAR_14 += VAR_15;
  if (FUNC_1(&VAR_11[VAR_1])) {
    if (VAR_14 <= VAR_13) {
      *VAR_10 = VAR_5;
      return VAR_14 + 2*VAR_15 > VAR_13 ? VAR_8 : VAR_7;
    }
    *VAR_10 = VAR_4; return VAR_9;
  } else {
    if (VAR_13 <= VAR_14) {
      *VAR_10 = VAR_3;
      return VAR_14 + 2*VAR_15 < VAR_13 ? VAR_8 : VAR_7;
    }
    *VAR_10 = VAR_6; return VAR_9;
  }
}
