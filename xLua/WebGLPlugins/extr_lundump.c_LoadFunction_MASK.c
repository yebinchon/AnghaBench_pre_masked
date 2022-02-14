
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* maxstacksize; void* is_vararg; void* numparams; void* lastlinedefined; void* linedefined; int * source; } ;
typedef int TString ;
typedef TYPE_1__ Proto ;
typedef int LoadState ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8 (LoadState *VAR_0, Proto *VAR_1, TString *VAR_2) {
  VAR_1->source = FUNC_6(VAR_0);
  if (VAR_1->source == ((void*)0))
    VAR_1->source = VAR_2;
  VAR_1->linedefined = FUNC_4(VAR_0);
  VAR_1->lastlinedefined = FUNC_4(VAR_0);
  VAR_1->numparams = FUNC_0(VAR_0);
  VAR_1->is_vararg = FUNC_0(VAR_0);
  VAR_1->maxstacksize = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_1);
  FUNC_2(VAR_0, VAR_1);
  FUNC_7(VAR_0, VAR_1);
  FUNC_5(VAR_0, VAR_1);
  FUNC_3(VAR_0, VAR_1);
}
