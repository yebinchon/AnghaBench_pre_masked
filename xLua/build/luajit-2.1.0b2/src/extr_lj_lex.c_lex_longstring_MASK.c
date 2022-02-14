
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int c; int L; int sb; } ;
typedef int TValue ;
typedef int MSize ;
typedef TYPE_1__ LexState ;
typedef int GCstr ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int * FUNC_7 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_11(LexState *VAR_3, TValue *VAR_4, int VAR_5)
{
  FUNC_3(VAR_3);
  if (FUNC_0(VAR_3))
    FUNC_1(VAR_3);
  for (;;) {
    switch (VAR_3->c) {
    case 128:
      FUNC_6(VAR_3, VAR_2, VAR_4 ? VAR_1 : VAR_0);
      break;
    case ']':
      if (FUNC_4(VAR_3) == VAR_5) {
 FUNC_3(VAR_3);
 goto endloop;
      }
      break;
    case '\n':
    case '\r':
      FUNC_2(VAR_3, '\n');
      FUNC_1(VAR_3);
      if (!VAR_4) FUNC_5(&VAR_3->sb);
      break;
    default:
      FUNC_3(VAR_3);
      break;
    }
  } endloop:
  if (VAR_4) {
    GCstr *VAR_6 = FUNC_7(VAR_3, FUNC_8(&VAR_3->sb) + (2 + (MSize)VAR_5),
          FUNC_9(&VAR_3->sb) - 2*(2 + (MSize)VAR_5));
    FUNC_10(VAR_3->L, VAR_4, VAR_6);
  }
}
