
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int IROp ;
 int FUNC_0 (int ) ;

int FUNC_1(lua_Number VAR_0, lua_Number VAR_1, IROp VAR_2)
{
  switch (VAR_2) {
  case 137: return (VAR_0 == VAR_1);
  case 132: return (VAR_0 != VAR_1);
  case 133: return (VAR_0 < VAR_1);
  case 136: return (VAR_0 >= VAR_1);
  case 134: return (VAR_0 <= VAR_1);
  case 135: return (VAR_0 > VAR_1);
  case 128: return !(VAR_0 >= VAR_1);
  case 131: return !(VAR_0 < VAR_1);
  case 129: return !(VAR_0 > VAR_1);
  case 130: return !(VAR_0 <= VAR_1);
  default: FUNC_0(0); return 0;
  }
}
