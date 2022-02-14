
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t szmcarea; size_t szallmcarea; int * mcarea; int * mcbot; int * mctop; int mcprot; scalar_t__* param; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_6__ {size_t size; int * next; } ;
typedef int MCode ;
typedef TYPE_2__ MCLink ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_1(jit_State *VAR_3)
{
  MCode *VAR_4 = VAR_3->mcarea;
  size_t VAR_5 = (size_t)VAR_3->param[VAR_0] << 10;
  VAR_5 = (VAR_5 + VAR_1-1) & ~(size_t)(VAR_1 - 1);
  VAR_3->mcarea = (MCode *)FUNC_0(VAR_3, VAR_5);
  VAR_3->szmcarea = VAR_5;
  VAR_3->mcprot = VAR_2;
  VAR_3->mctop = (MCode *)((char *)VAR_3->mcarea + VAR_3->szmcarea);
  VAR_3->mcbot = (MCode *)((char *)VAR_3->mcarea + sizeof(MCLink));
  ((MCLink *)VAR_3->mcarea)->next = VAR_4;
  ((MCLink *)VAR_3->mcarea)->size = VAR_5;
  VAR_3->szallmcarea += VAR_5;
}
