
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int linenumber; int* packstack; int tmask; scalar_t__ tok; int * p; int sb; int L; scalar_t__ curpack; scalar_t__ depth; } ;
typedef TYPE_1__ CPState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(CPState *VAR_1)
{
  VAR_1->linenumber = 1;
  VAR_1->depth = 0;
  VAR_1->curpack = 0;
  VAR_1->packstack[0] = 255;
  FUNC_2(VAR_1->L, &VAR_1->sb);
  FUNC_3(VAR_1->p != ((void*)0));
  FUNC_0(VAR_1);
  VAR_1->tok = 0;
  VAR_1->tmask = VAR_0;
  FUNC_1(VAR_1);
}
