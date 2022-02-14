
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ freereg; scalar_t__ framesize; int ls; } ;
typedef TYPE_1__ FuncState ;
typedef scalar_t__ BCReg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(FuncState *VAR_2, BCReg VAR_3)
{
  BCReg VAR_4 = VAR_2->freereg + VAR_3;
  if (VAR_4 > VAR_2->framesize) {
    if (VAR_4 >= VAR_1)
      FUNC_0(VAR_2->ls, VAR_0);
    VAR_2->framesize = (uint8_t)VAR_4;
  }
}
