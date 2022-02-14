
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ sizearray; int * array; int flags; int * metatable; } ;
typedef TYPE_1__ Table ;
typedef int GCObject ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;

Table *FUNC_4 (lua_State *VAR_1) {
  GCObject *VAR_2 = FUNC_2(VAR_1, VAR_0, sizeof(Table));
  Table *VAR_3 = FUNC_1(VAR_2);
  VAR_3->metatable = ((void*)0);
  VAR_3->flags = FUNC_0(~0);
  VAR_3->array = ((void*)0);
  VAR_3->sizearray = 0;
  FUNC_3(VAR_1, VAR_3, 0);
  return VAR_3;
}
