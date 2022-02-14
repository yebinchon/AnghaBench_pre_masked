
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_4__ {int * gcroot; } ;
typedef TYPE_1__ global_State ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(global_State *VAR_1)
{
  ptrdiff_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    if (FUNC_1(VAR_1->gcroot[VAR_2]) != ((void*)0))
      FUNC_0(VAR_1, FUNC_1(VAR_1->gcroot[VAR_2]));
}
