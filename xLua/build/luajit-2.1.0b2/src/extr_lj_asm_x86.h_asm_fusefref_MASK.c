
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_11__ {scalar_t__ i; } ;
struct TYPE_8__ {void* base; int ofs; void* idx; } ;
struct TYPE_10__ {TYPE_1__ mrm; } ;
struct TYPE_9__ {scalar_t__ o; size_t op2; int op1; } ;
typedef int RegSet ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_7__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_4, IRIns *VAR_5, RegSet VAR_6)
{
  FUNC_2(VAR_5->o == VAR_0 || VAR_5->o == VAR_1);
  VAR_4->mrm.ofs = VAR_3[VAR_5->op2];
  VAR_4->mrm.idx = VAR_2;
  if (FUNC_1(VAR_5->op1)) {
    VAR_4->mrm.ofs += FUNC_0(VAR_5->op1)->i;
    VAR_4->mrm.base = VAR_2;
  } else {
    VAR_4->mrm.base = (uint8_t)FUNC_3(VAR_4, VAR_5->op1, VAR_6);
  }
}
