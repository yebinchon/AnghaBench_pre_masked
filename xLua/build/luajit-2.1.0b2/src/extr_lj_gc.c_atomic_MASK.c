
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int lua_State ;
struct TYPE_15__ {scalar_t__ total; scalar_t__ estimate; int root; int sweep; scalar_t__ currentwhite; int weak; int grayagain; int gray; } ;
struct TYPE_14__ {scalar_t__ marked; } ;
struct TYPE_16__ {TYPE_2__ gc; TYPE_1__ strempty; int tmpbuf; } ;
typedef TYPE_3__ global_State ;
typedef scalar_t__ GCSize ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 size_t FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static void FUNC_18(global_State *VAR_0, lua_State *VAR_1)
{
  size_t VAR_2;

  FUNC_3(VAR_0);
  FUNC_5(VAR_0);

  FUNC_16(VAR_0->gc.gray, VAR_0->gc.weak);
  FUNC_15(VAR_0->gc.weak);
  FUNC_11(!FUNC_8(FUNC_13(FUNC_12(VAR_0))));
  FUNC_4(VAR_0, VAR_1);
  FUNC_6(VAR_0);
  FUNC_1(VAR_0);
  FUNC_5(VAR_0);

  FUNC_16(VAR_0->gc.gray, VAR_0->gc.grayagain);
  FUNC_15(VAR_0->gc.grayagain);
  FUNC_5(VAR_0);

  VAR_2 = FUNC_10(VAR_0, 0);
  FUNC_2(VAR_0);
  VAR_2 += FUNC_5(VAR_0);


  FUNC_0(FUNC_7(VAR_0->gc.weak));

  FUNC_9(VAR_1, &VAR_0->tmpbuf);


  VAR_0->gc.currentwhite = (uint8_t)FUNC_14(VAR_0);
  VAR_0->strempty.marked = VAR_0->gc.currentwhite;
  FUNC_17(VAR_0->gc.sweep, &VAR_0->gc.root);
  VAR_0->gc.estimate = VAR_0->gc.total - (GCSize)VAR_2;
}
