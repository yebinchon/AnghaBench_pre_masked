
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char* (* reader ) (int *,int ,size_t*) ;size_t n; char const* p; int data; int * L; } ;
typedef TYPE_1__ ZIO ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,int ,size_t*) ;

__attribute__((used)) static int FUNC_2(ZIO*VAR_0){
size_t VAR_1;
lua_State*VAR_2=VAR_0->L;
const char*VAR_3;
VAR_3=VAR_0->reader(VAR_2,VAR_0->data,&VAR_1);
if(VAR_3==((void*)0)||VAR_1==0)return(-1);
VAR_0->n=VAR_1-1;
VAR_0->p=VAR_3;
return FUNC_0(*(VAR_0->p++));
}
