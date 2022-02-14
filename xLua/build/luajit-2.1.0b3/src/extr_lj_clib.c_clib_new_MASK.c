
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_14__ {int * cache; } ;
struct TYPE_13__ {int metatable; int udtype; } ;
typedef TYPE_2__ GCudata ;
typedef int GCtab ;
typedef TYPE_3__ CLibrary ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static CLibrary *FUNC_6(lua_State *VAR_1, GCtab *VAR_2)
{
  GCtab *VAR_3 = FUNC_0(VAR_1, 0, 0);
  GCudata *VAR_4 = FUNC_1(VAR_1, sizeof(CLibrary), VAR_3);
  CLibrary *VAR_5 = (CLibrary *)FUNC_5(VAR_4);
  VAR_5->cache = VAR_3;
  VAR_4->udtype = VAR_0;

  FUNC_3(VAR_4->metatable, FUNC_2(VAR_2));
  FUNC_4(VAR_1, VAR_1->top++, VAR_4);
  return VAR_5;
}
