
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_5__ {int level; int src_init; TYPE_1__* capture; int L; } ;
struct TYPE_4__ {int len; char const* init; } ;
typedef TYPE_2__ MatchState ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_3(MatchState*VAR_0,int VAR_1,const char*VAR_2,
const char*VAR_3){
if(VAR_1>=VAR_0->level){
if(VAR_1==0)
FUNC_2(VAR_0->L,VAR_2,VAR_3-VAR_2);
else
FUNC_0(VAR_0->L,"invalid capture index");
}
else{
ptrdiff_t VAR_4=VAR_0->capture[VAR_1].len;
if(VAR_4==(-1))FUNC_0(VAR_0->L,"unfinished capture");
if(VAR_4==(-2))
FUNC_1(VAR_0->L,VAR_0->capture[VAR_1].init-VAR_0->src_init+1);
else
FUNC_2(VAR_0->L,VAR_0->capture[VAR_1].init,VAR_4);
}
}
