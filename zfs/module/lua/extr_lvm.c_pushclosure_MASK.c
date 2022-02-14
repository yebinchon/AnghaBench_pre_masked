
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_11__ {size_t idx; scalar_t__ instack; } ;
typedef TYPE_2__ Upvaldesc ;
typedef int UpVal ;
struct TYPE_10__ {int ** upvals; TYPE_3__* p; } ;
struct TYPE_13__ {TYPE_1__ l; } ;
struct TYPE_12__ {int sizeupvalues; TYPE_4__* cache; TYPE_2__* upvalues; } ;
typedef scalar_t__ StkId ;
typedef TYPE_3__ Proto ;
typedef TYPE_4__ Closure ;


 int FUNC_0 (int *,TYPE_3__*,TYPE_4__*) ;
 int * FUNC_1 (int *,scalar_t__) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__,TYPE_4__*) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_0, Proto *VAR_1, UpVal **VAR_2, StkId VAR_3,
                         StkId VAR_4) {
  int VAR_5 = VAR_1->sizeupvalues;
  Upvaldesc *VAR_6 = VAR_1->upvalues;
  int VAR_7;
  Closure *VAR_8 = FUNC_2(VAR_0, VAR_5);
  VAR_8->l.p = VAR_1;
  FUNC_3(VAR_0, VAR_4, VAR_8);
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
    if (VAR_6[VAR_7].instack)
      VAR_8->l.upvals[VAR_7] = FUNC_1(VAR_0, VAR_3 + VAR_6[VAR_7].idx);
    else
      VAR_8->l.upvals[VAR_7] = VAR_2[VAR_6[VAR_7].idx];
  }
  FUNC_0(VAR_0, VAR_1, VAR_8);
  VAR_1->cache = VAR_8;
}
