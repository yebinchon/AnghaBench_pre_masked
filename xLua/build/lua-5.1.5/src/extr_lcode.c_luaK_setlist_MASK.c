
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int freereg; TYPE_1__* ls; } ;
struct TYPE_6__ {int lastline; } ;
typedef TYPE_2__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int,int) ;
 int FUNC_3 (int) ;

void FUNC_4 (FuncState *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  int VAR_9 = (VAR_7 - 1)/VAR_1 + 1;
  int VAR_10 = (VAR_8 == VAR_2) ? 0 : VAR_8;
  FUNC_3(VAR_8 != 0);
  if (VAR_9 <= VAR_3)
    FUNC_2(VAR_5, VAR_4, VAR_6, VAR_10, VAR_9);
  else {
    FUNC_2(VAR_5, VAR_4, VAR_6, VAR_10, 0);
    FUNC_1(VAR_5, FUNC_0(VAR_0, VAR_9), VAR_5->ls->lastline);
  }
  VAR_5->freereg = VAR_6 + 1;
}
