
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_6__ {int sizeid; int cbid; } ;
struct TYPE_7__ {TYPE_1__ cb; int sizetab; int tab; } ;
typedef TYPE_2__ CTState ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ,int ) ;

void FUNC_4(global_State *VAR_2)
{
  CTState *VAR_3 = FUNC_0(VAR_2);
  if (VAR_3) {
    FUNC_1(VAR_3);
    FUNC_3(VAR_2, VAR_3->tab, VAR_3->sizetab, VAR_0);
    FUNC_3(VAR_2, VAR_3->cb.cbid, VAR_3->cb.sizeid, VAR_1);
    FUNC_2(VAR_2, VAR_3);
  }
}
