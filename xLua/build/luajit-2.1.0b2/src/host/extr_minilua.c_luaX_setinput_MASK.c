
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int ZIO ;
struct TYPE_5__ {int token; } ;
struct TYPE_6__ {char decpoint; int linenumber; int lastline; int buff; int * L; int * source; int * fs; int * z; TYPE_1__ lookahead; } ;
typedef int TString ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(lua_State*VAR_1,LexState*VAR_2,ZIO*VAR_3,TString*VAR_4){
VAR_2->decpoint='.';
VAR_2->L=VAR_1;
VAR_2->lookahead.token=VAR_0;
VAR_2->z=VAR_3;
VAR_2->fs=((void*)0);
VAR_2->linenumber=1;
VAR_2->lastline=1;
VAR_2->source=VAR_4;
FUNC_0(VAR_2->L,VAR_2->buff,32);
FUNC_1(VAR_2);
}
