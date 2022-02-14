
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ framesize; } ;
typedef TYPE_1__ GCproto ;
typedef scalar_t__ BCReg ;
typedef int BCIns ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BCReg FUNC_5(GCproto *VAR_2, const BCIns *VAR_3, uint32_t VAR_4)
{
  BCIns VAR_5 = VAR_3[-1];
  if (FUNC_4(VAR_5) == VAR_0)
    VAR_5 = VAR_3[FUNC_3(VAR_5)];
  switch (FUNC_4(VAR_5)) {
  case 131: case 130: return FUNC_0(VAR_5) + FUNC_1(VAR_5) + VAR_4-1+1+VAR_1;
  case 129: return FUNC_0(VAR_5) + FUNC_2(VAR_5) + VAR_4-1;
  case 128: return FUNC_0(VAR_5) + VAR_4-1;
  default: return VAR_2->framesize;
  }
}
