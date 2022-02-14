
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct LexState {int * buff; } ;
struct FuncState {TYPE_1__* f; } ;
typedef int lua_State ;
typedef int ZIO ;
struct TYPE_3__ {int is_vararg; } ;
typedef TYPE_1__ Proto ;
typedef int Mbuffer ;


 int VAR_0 ;
 int FUNC_0 (struct LexState*,int ) ;
 int FUNC_1 (struct LexState*) ;
 int FUNC_2 (struct LexState*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (struct LexState*) ;
 int FUNC_5 (int *,struct LexState*,int *,int ) ;
 int FUNC_6 (struct LexState*,struct FuncState*) ;

__attribute__((used)) static Proto*FUNC_7(lua_State*VAR_1,ZIO*VAR_2,Mbuffer*VAR_3,const char*VAR_4){
struct LexState VAR_5;
struct FuncState VAR_6;
VAR_5.buff=VAR_3;
FUNC_5(VAR_1,&VAR_5,VAR_2,FUNC_3(VAR_1,VAR_4));
FUNC_6(&VAR_5,&VAR_6);
VAR_6.f->is_vararg=2;
FUNC_4(&VAR_5);
FUNC_1(&VAR_5);
FUNC_0(&VAR_5,VAR_0);
FUNC_2(&VAR_5);
return VAR_6.f;
}
