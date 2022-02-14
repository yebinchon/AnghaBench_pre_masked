
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ k; } ;
typedef TYPE_1__ expdesc ;
struct TYPE_14__ {int freereg; } ;
struct TYPE_13__ {TYPE_3__* fs; } ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5 (LexState *VAR_1, int VAR_2, int VAR_3, expdesc *VAR_4) {
  FuncState *VAR_5 = VAR_1->fs;
  int VAR_6 = VAR_2 - VAR_3;
  if (FUNC_0(VAR_4->k)) {
    VAR_6++;
    if (VAR_6 < 0) VAR_6 = 0;
    FUNC_4(VAR_5, VAR_4, VAR_6);
    if (VAR_6 > 1) FUNC_3(VAR_5, VAR_6-1);
  }
  else {
    if (VAR_4->k != VAR_0) FUNC_1(VAR_5, VAR_4);
    if (VAR_6 > 0) {
      int VAR_7 = VAR_5->freereg;
      FUNC_3(VAR_5, VAR_6);
      FUNC_2(VAR_5, VAR_7, VAR_6);
    }
  }
}
