
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ bsize; int * box; } ;
typedef TYPE_1__ UBox ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,int,size_t) ;

__attribute__((used)) static void *FUNC_6 (lua_State *VAR_1, size_t VAR_2) {
  UBox *VAR_3 = (UBox *)FUNC_1(VAR_1, sizeof(UBox));
  VAR_3->box = ((void*)0);
  VAR_3->bsize = 0;
  if (FUNC_0(VAR_1, "LUABOX")) {
    FUNC_2(VAR_1, VAR_0);
    FUNC_3(VAR_1, -2, "__gc");
  }
  FUNC_4(VAR_1, -2);
  return FUNC_5(VAR_1, -1, VAR_2);
}
