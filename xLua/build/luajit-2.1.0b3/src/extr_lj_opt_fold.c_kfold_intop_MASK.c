
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int IROp ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int32_t FUNC_4(int32_t VAR_0, int32_t VAR_1, IROp VAR_2)
{
  switch (VAR_2) {
  case 142: VAR_0 += VAR_1; break;
  case 128: VAR_0 -= VAR_1; break;
  case 130: VAR_0 *= VAR_1; break;
  case 131: VAR_0 = FUNC_2(VAR_0, VAR_1); break;
  case 129: VAR_0 = -VAR_0; break;
  case 141: VAR_0 &= VAR_1; break;
  case 140: VAR_0 |= VAR_1; break;
  case 134: VAR_0 ^= VAR_1; break;
  case 136: VAR_0 <<= (VAR_1 & 31); break;
  case 135: VAR_0 = (int32_t)((uint32_t)VAR_0 >> (VAR_1 & 31)); break;
  case 137: VAR_0 >>= (VAR_1 & 31); break;
  case 139: VAR_0 = (int32_t)FUNC_0((uint32_t)VAR_0, (VAR_1 & 31)); break;
  case 138: VAR_0 = (int32_t)FUNC_1((uint32_t)VAR_0, (VAR_1 & 31)); break;
  case 132: VAR_0 = VAR_0 < VAR_1 ? VAR_0 : VAR_1; break;
  case 133: VAR_0 = VAR_0 > VAR_1 ? VAR_0 : VAR_1; break;
  default: FUNC_3(0); break;
  }
  return VAR_0;
}
