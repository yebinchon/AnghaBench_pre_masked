
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int size; int * hash; } ;
struct TYPE_5__ {int currentwhite; TYPE_1__ strt; int rootgc; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(lua_State*VAR_0){
global_State*VAR_1=FUNC_0(VAR_0);
int VAR_2;
VAR_1->currentwhite=FUNC_1(0,1)|FUNC_2(6);
FUNC_3(VAR_0,&VAR_1->rootgc);
for(VAR_2=0;VAR_2<VAR_1->strt.size;VAR_2++)
FUNC_3(VAR_0,&VAR_1->strt.hash[VAR_2]);
}
