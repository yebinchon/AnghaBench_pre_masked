
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int event; char* what; scalar_t__ linedefined; int short_src; int name; } ;
typedef TYPE_1__ lua_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(lua_State *VAR_3, lua_Debug *VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_3, &VAR_1);
 FUNC_5(VAR_3, VAR_0);

 VAR_5 = VAR_4->event;
 FUNC_4(VAR_3, VAR_2[VAR_5]);

 FUNC_1(VAR_3, "nS", VAR_4);
 if (*(VAR_4->what) == 'C') {
  FUNC_2(VAR_3, "[?%s]", VAR_4->name);
 } else {
  FUNC_2(VAR_3, "%s:%d", VAR_4->short_src, VAR_4->linedefined > 0 ? VAR_4->linedefined : 0);
 }

 FUNC_0(VAR_3, 2, 0);
}
