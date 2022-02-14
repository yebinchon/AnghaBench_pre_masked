
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_8__ {scalar_t__ o; } ;
struct TYPE_7__ {scalar_t__ curins; scalar_t__* mcp; TYPE_1__* T; } ;
struct TYPE_6__ {scalar_t__ nins; } ;
typedef int Reg ;
typedef scalar_t__ MCode ;
typedef TYPE_2__ ASMState ;


 TYPE_5__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_4, Reg VAR_5, int32_t VAR_6)
{

  if (VAR_6 == 0 && !(VAR_1 && (FUNC_0(VAR_4->curins)->o == VAR_0 ||
       (VAR_4->curins+1 < VAR_4->T->nins &&
        FUNC_0(VAR_4->curins+1)->o == VAR_0)))) {
    FUNC_3(VAR_4, FUNC_2(VAR_3), VAR_5, VAR_5);
  } else {
    MCode *VAR_7 = VAR_4->mcp;
    *(int32_t *)(VAR_7-4) = VAR_6;
    VAR_7[-5] = (MCode)(VAR_2+(VAR_5&7));
    VAR_7 -= 5;
    FUNC_1(VAR_7, 0, VAR_5);
    VAR_4->mcp = VAR_7;
  }
}
