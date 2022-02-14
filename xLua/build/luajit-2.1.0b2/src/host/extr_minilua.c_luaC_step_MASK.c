
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
typedef int l_mem ;
struct TYPE_4__ {unsigned int gcstepmul; unsigned int gcdept; scalar_t__ gcstate; scalar_t__ totalbytes; scalar_t__ GCthreshold; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(lua_State*VAR_0){
global_State*VAR_1=FUNC_0(VAR_0);
l_mem VAR_2=(1024u/100)*VAR_1->gcstepmul;
if(VAR_2==0)
VAR_2=(((lu_mem)(~(lu_mem)0)-2)-1)/2;
VAR_1->gcdept+=VAR_1->totalbytes-VAR_1->GCthreshold;
do{
VAR_2-=FUNC_2(VAR_0);
if(VAR_1->gcstate==0)
break;
}while(VAR_2>0);
if(VAR_1->gcstate!=0){
if(VAR_1->gcdept<1024u)
VAR_1->GCthreshold=VAR_1->totalbytes+1024u;
else{
VAR_1->gcdept-=1024u;
VAR_1->GCthreshold=VAR_1->totalbytes;
}
}
else{
FUNC_1(VAR_1);
}
}
