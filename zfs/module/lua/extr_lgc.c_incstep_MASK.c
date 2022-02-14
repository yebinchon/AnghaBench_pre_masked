
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ lu_mem ;
typedef int l_mem ;
struct TYPE_5__ {int GCdebt; int gcstepmul; scalar_t__ gcstate; int GCestimate; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_4) {
  global_State *VAR_5 = FUNC_0(VAR_4);
  l_mem VAR_6 = VAR_5->GCdebt;
  int VAR_7 = VAR_5->gcstepmul;
  if (VAR_7 < 40) VAR_7 = 40;

  VAR_6 = (VAR_6 / VAR_3) + 1;
  VAR_6 = (VAR_6 < VAR_2 / VAR_7) ? VAR_6 * VAR_7 : VAR_2;
  do {
    lu_mem VAR_8 = FUNC_3(VAR_4);
    VAR_6 -= VAR_8;
  } while (VAR_6 > -VAR_0 && VAR_5->gcstate != VAR_1);
  if (VAR_5->gcstate == VAR_1)
    FUNC_2(VAR_5, VAR_5->GCestimate);
  else {
    VAR_6 = (VAR_6 / VAR_7) * VAR_3;
    FUNC_1(VAR_5, VAR_6);
  }
}
