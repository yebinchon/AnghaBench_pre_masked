
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gray; } ;
struct TYPE_6__ {TYPE_1__ gc; } ;
typedef TYPE_2__ global_State ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static size_t FUNC_2(global_State *VAR_0)
{
  size_t VAR_1 = 0;
  while (FUNC_0(VAR_0->gc.gray) != ((void*)0))
    VAR_1 += FUNC_1(VAR_0);
  return VAR_1;
}
