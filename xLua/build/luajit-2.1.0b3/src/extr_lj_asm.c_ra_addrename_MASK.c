
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {TYPE_1__* ir; } ;
struct TYPE_10__ {TYPE_2__ cur; } ;
struct TYPE_9__ {TYPE_5__* J; } ;
struct TYPE_7__ {int s; scalar_t__ r; } ;
typedef int SnapNo ;
typedef scalar_t__ Reg ;
typedef size_t IRRef ;
typedef TYPE_3__ ASMState ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,size_t,int ) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_3, Reg VAR_4, IRRef VAR_5, SnapNo VAR_6)
{
  IRRef VAR_7;
  FUNC_2(VAR_3->J, FUNC_0(VAR_1, VAR_0), VAR_5, VAR_6);
  VAR_7 = FUNC_3(FUNC_1(VAR_3->J));
  VAR_3->J->cur.ir[VAR_7].r = (uint8_t)VAR_4;
  VAR_3->J->cur.ir[VAR_7].s = VAR_2;
}
