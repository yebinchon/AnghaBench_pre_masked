
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pc; int lasttarget; int flags; TYPE_2__* bcbase; int ls; TYPE_1__* bl; } ;
struct TYPE_10__ {int ins; int line; } ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_3__ FuncState ;
typedef int BCPos ;
typedef int BCIns ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int,int ,int) ;
 int FUNC_3 (TYPE_3__*,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(FuncState *VAR_6)
{
  BCPos VAR_7 = VAR_6->pc;
  if (VAR_7 <= VAR_6->lasttarget || !FUNC_5(FUNC_1(VAR_6->bcbase[VAR_7-1].ins))) {
    if ((VAR_6->bl->flags & VAR_3))
      FUNC_3(VAR_6, 128, 0, 0);
    FUNC_2(VAR_6, 131, 0, 1);
  }
  VAR_6->bl->flags |= VAR_2;
  FUNC_7(VAR_6);
  FUNC_8(VAR_6->bl == ((void*)0));

  if (VAR_6->flags & VAR_5) {
    BCPos VAR_8;
    for (VAR_8 = 1; VAR_8 < VAR_7; VAR_8++) {
      BCIns VAR_9 = VAR_6->bcbase[VAR_8].ins;
      BCPos VAR_10;
      switch (FUNC_1(VAR_9)) {
      case 134: case 133:
      case 129: case 132: case 131: case 130:
 VAR_10 = FUNC_4(VAR_6, VAR_9);
 VAR_6->bcbase[VAR_10].line = VAR_6->bcbase[VAR_8].line;
 VAR_10 = VAR_10-(VAR_8+1)+VAR_0;
 if (VAR_10 > VAR_1)
   FUNC_6(VAR_6->ls, VAR_4);

 VAR_6->bcbase[VAR_8].ins = FUNC_0(128, 0, VAR_10);
 break;
      case 128:
 return;
      default:
 break;
      }
    }
  }
}
