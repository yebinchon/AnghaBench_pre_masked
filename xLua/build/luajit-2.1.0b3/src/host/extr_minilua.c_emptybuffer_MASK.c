
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lvl; int buffer; int p; int L; } ;
typedef TYPE_1__ luaL_Buffer ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,size_t) ;

__attribute__((used)) static int FUNC_2(luaL_Buffer*VAR_0){
size_t VAR_1=FUNC_0(VAR_0);
if(VAR_1==0)return 0;
else{
FUNC_1(VAR_0->L,VAR_0->buffer,VAR_1);
VAR_0->p=VAR_0->buffer;
VAR_0->lvl++;
return 1;
}
}
