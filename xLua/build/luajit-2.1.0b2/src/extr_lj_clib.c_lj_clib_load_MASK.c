
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {void* handle; } ;
typedef int GCtab ;
typedef int GCstr ;
typedef TYPE_1__ CLibrary ;


 void* FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(lua_State *VAR_0, GCtab *VAR_1, GCstr *VAR_2, int VAR_3)
{
  void *VAR_4 = FUNC_0(VAR_0, FUNC_2(VAR_2), VAR_3);
  CLibrary *VAR_5 = FUNC_1(VAR_0, VAR_1);
  VAR_5->handle = VAR_4;
}
