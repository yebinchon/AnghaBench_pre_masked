
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int value; } ;
struct TYPE_6__ {int * v; TYPE_1__ u; } ;
typedef TYPE_2__ UpVal ;
struct TYPE_7__ {TYPE_2__ uv; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int ,int,int *,int ) ;
 int FUNC_1 (int *) ;

UpVal *FUNC_2 (lua_State *VAR_1) {
  UpVal *VAR_2 = &FUNC_0(VAR_1, VAR_0, sizeof(UpVal), ((void*)0), 0)->uv;
  VAR_2->v = &VAR_2->u.value;
  FUNC_1(VAR_2->v);
  return VAR_2;
}
