
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int level; TYPE_1__* capture; int L; } ;
struct TYPE_5__ {char const* init; int len; } ;
typedef TYPE_2__ MatchState ;


 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (TYPE_2__*,char const*,char const*) ;

__attribute__((used)) static const char*FUNC_2(MatchState*VAR_0,const char*VAR_1,
const char*VAR_2,int VAR_3){
const char*VAR_4;
int VAR_5=VAR_0->level;
if(VAR_5>=32)FUNC_0(VAR_0->L,"too many captures");
VAR_0->capture[VAR_5].init=VAR_1;
VAR_0->capture[VAR_5].len=VAR_3;
VAR_0->level=VAR_5+1;
if((VAR_4=FUNC_1(VAR_0,VAR_1,VAR_2))==((void*)0))
VAR_0->level--;
return VAR_4;
}
