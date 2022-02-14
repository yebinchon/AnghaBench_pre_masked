
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * mctop; int * mcbot; int mcarea; } ;
typedef TYPE_1__ jit_State ;
typedef int MCode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

MCode *FUNC_2(jit_State *VAR_1, MCode **VAR_2)
{
  if (!VAR_1->mcarea)
    FUNC_0(VAR_1);
  else
    FUNC_1(VAR_1, VAR_0);
  *VAR_2 = VAR_1->mcbot;
  return VAR_1->mctop;
}
