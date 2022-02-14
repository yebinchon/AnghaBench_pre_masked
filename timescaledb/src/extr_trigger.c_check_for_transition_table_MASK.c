
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tgoldtable; int tgnewtable; } ;
typedef TYPE_1__ Trigger ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(Trigger *VAR_0, void *VAR_1)
{
 bool *VAR_2 = VAR_1;

 if (FUNC_0(VAR_0->tgnewtable) ||
  FUNC_0(VAR_0->tgoldtable))
 {
  *VAR_2 = 1;
  return 0;
 }

 return 1;
}
