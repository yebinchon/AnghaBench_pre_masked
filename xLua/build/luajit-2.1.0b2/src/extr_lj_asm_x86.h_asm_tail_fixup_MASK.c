
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ TraceNo ;
struct TYPE_7__ {int* mcode; } ;
struct TYPE_6__ {int* mctop; int flags; int J; TYPE_1__* T; } ;
struct TYPE_5__ {scalar_t__ spadjust; } ;
typedef int MCode ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int*,int*) ;
 scalar_t__ VAR_13 ;
 TYPE_3__* FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_14, TraceNo VAR_15)
{

  MCode *VAR_16 = VAR_14->mctop;
  MCode *VAR_17, *VAR_18;
  int32_t VAR_19 = VAR_14->T->spadjust;
  if (VAR_19 == 0) {
    VAR_16 -= ((VAR_14->flags & VAR_0) ? 7 : 6) + (VAR_1 ? 1 : 0);
  } else {
    MCode *VAR_20;

    if (FUNC_1(VAR_19)) {
      VAR_16 -= 3;
      VAR_20 = VAR_16-6;
      *VAR_20 = (MCode)VAR_19;
    } else {
      VAR_20 = VAR_16-9;
      *(int32_t *)VAR_20 = VAR_19;
    }
    if ((VAR_14->flags & VAR_0)) {



      VAR_20[-3] = (MCode)VAR_6;
      VAR_20[-2] = FUNC_0(FUNC_1(VAR_19) ? VAR_9 : VAR_8, VAR_2, VAR_2);
      VAR_20[-1] = FUNC_0(VAR_11, VAR_2, VAR_2);
    } else {



      VAR_20[-2] = (MCode)(FUNC_1(VAR_19) ? VAR_4 : VAR_3);
      VAR_20[-1] = FUNC_0(VAR_10, VAR_12, VAR_2);
    }
  }

  VAR_17 = VAR_15 ? FUNC_3(VAR_14->J, VAR_15)->mcode : (MCode *)VAR_13;
  *(int32_t *)(VAR_16-4) = FUNC_2(VAR_16, VAR_17);
  VAR_16[-5] = VAR_5;

  for (VAR_18 = VAR_14->mctop-1; VAR_18 >= VAR_16; VAR_18--)
    *VAR_18 = VAR_7;
  VAR_14->mctop = VAR_16;
}
