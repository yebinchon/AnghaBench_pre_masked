
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int stack; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_15__ {int size; int hash; } ;
struct TYPE_17__ {int ud; int (* frealloc ) (int ,int ,int,int ) ;int buff; TYPE_1__ strt; scalar_t__ version; } ;
typedef TYPE_3__ global_State ;
typedef int LG ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_11 (lua_State *VAR_0) {
  global_State *VAR_1 = FUNC_0(VAR_0);
  FUNC_5(VAR_0, VAR_0->stack);
  FUNC_4(VAR_0);
  if (VAR_1->version)
    FUNC_9(VAR_0);
  FUNC_6(VAR_0, FUNC_0(VAR_0)->strt.hash, FUNC_0(VAR_0)->strt.size);
  FUNC_7(VAR_0, &VAR_1->buff);
  FUNC_1(VAR_0);
  FUNC_8(FUNC_3(VAR_1) == sizeof(LG));
  (*VAR_1->frealloc)(VAR_1->ud, FUNC_2(VAR_0), sizeof(LG), 0);
}
