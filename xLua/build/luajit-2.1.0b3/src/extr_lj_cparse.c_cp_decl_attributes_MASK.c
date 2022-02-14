
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int attr; int fattr; } ;
struct TYPE_14__ {int tok; TYPE_1__* ct; } ;
struct TYPE_13__ {int size; } ;
typedef TYPE_2__ CPState ;
typedef TYPE_3__ CPDecl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(CPState *VAR_5, CPDecl *VAR_6)
{
  for (;;) {
    switch (VAR_5->tok) {
    case 133: VAR_6->attr |= VAR_2; break;
    case 128: VAR_6->attr |= VAR_3; break;
    case 129: break;
    case 131: break;
    case 135: FUNC_2(VAR_5, VAR_6); continue;
    case 136: FUNC_1(VAR_5, VAR_6); continue;
    case 132: FUNC_3(VAR_5, VAR_6); continue;
    case 134:




      break;
    case 130:



      break;
    default: return;
    }
    FUNC_4(VAR_5);
  }
}
