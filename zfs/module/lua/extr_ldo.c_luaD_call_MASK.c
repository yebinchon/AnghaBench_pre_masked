
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nCcalls; int nny; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4 (lua_State *VAR_2, StkId VAR_3, int VAR_4, int VAR_5) {
  if (++VAR_2->nCcalls >= VAR_0) {
    if (VAR_2->nCcalls == VAR_0)
      FUNC_2(VAR_2, "C stack overflow");
    else if (VAR_2->nCcalls >= (VAR_0 + (VAR_0>>3)))
      FUNC_1(VAR_2, VAR_1);
  }
  if (!VAR_5) VAR_2->nny++;
  if (!FUNC_0(VAR_2, VAR_3, VAR_4))
    FUNC_3(VAR_2);
  if (!VAR_5) VAR_2->nny--;
  VAR_2->nCcalls--;
}
