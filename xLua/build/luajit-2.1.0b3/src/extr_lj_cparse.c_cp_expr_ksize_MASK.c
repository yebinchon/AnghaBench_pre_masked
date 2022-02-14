
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u32; } ;
typedef int CTSize ;
typedef TYPE_1__ CPValue ;
typedef int CPState ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static CTSize FUNC_2(CPState *VAR_1)
{
  CPValue VAR_2;
  FUNC_1(VAR_1, &VAR_2);
  if (VAR_2.u32 >= 0x80000000u) FUNC_0(VAR_1, VAR_0);
  return VAR_2.u32;
}
