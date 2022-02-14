
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int total; int threshold; } ;
struct TYPE_16__ {scalar_t__ gcsteps; int J; } ;
typedef int Reg ;
typedef int MCLabel ;
typedef int IRRef ;
typedef int CCallInfo ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,int const*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 TYPE_4__ VAR_9 ;
 int * VAR_10 ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_14(ASMState *VAR_11)
{
  const CCallInfo *VAR_12 = &VAR_10[VAR_4];
  IRRef VAR_13[2];
  MCLabel VAR_14;
  Reg VAR_15;
  FUNC_12(VAR_11, VAR_6);
  VAR_14 = FUNC_6(VAR_11);

  FUNC_3(VAR_11, VAR_3);
  FUNC_10(VAR_11, VAR_7, VAR_5, VAR_5);
  VAR_13[0] = VAR_0;
  VAR_13[1] = VAR_1;
  FUNC_2(VAR_11, VAR_12, VAR_13);
  VAR_15 = FUNC_13(VAR_11, VAR_0);
  FUNC_7(VAR_11, VAR_15, FUNC_0(VAR_11->J));
  FUNC_8(VAR_11, FUNC_13(VAR_11, VAR_1), VAR_11->gcsteps);

  FUNC_11(VAR_11, VAR_2, VAR_14);
  FUNC_9(VAR_11, FUNC_1(VAR_8), VAR_15, VAR_9.threshold);
  FUNC_5(VAR_11, VAR_15, VAR_9.total);
  VAR_11->gcsteps = 0;
  FUNC_4(VAR_11);
}
