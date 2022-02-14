
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pc; } ;
typedef TYPE_1__ FuncState ;
typedef int BCLine ;



__attribute__((used)) static size_t FUNC_0(FuncState *VAR_0, BCLine VAR_1)
{
  return (VAR_0->pc-1) << (VAR_1 < 256 ? 0 : VAR_1 < 65536 ? 1 : 2);
}
