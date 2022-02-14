
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int total; int threshold; } ;
struct TYPE_17__ {scalar_t__ gcsteps; int J; } ;
typedef int Reg ;
typedef int MCLabel ;
typedef int IRRef ;
typedef int CCallInfo ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__*,int const*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int ,int,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int,int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int ,int ) ;
 TYPE_4__ VAR_14 ;
 int * VAR_15 ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_15(ASMState *VAR_16)
{
  const CCallInfo *VAR_17 = &VAR_15[VAR_5];
  IRRef VAR_18[2];
  MCLabel VAR_19;
  Reg VAR_20;
  FUNC_13(VAR_16, VAR_10);
  VAR_19 = FUNC_6(VAR_16);

  FUNC_3(VAR_16, VAR_3);
  FUNC_11(VAR_16, VAR_12, VAR_9, VAR_9);
  VAR_18[0] = VAR_0;
  VAR_18[1] = VAR_1;
  FUNC_2(VAR_16, VAR_17, VAR_18);
  VAR_20 = FUNC_14(VAR_16, VAR_0);



  FUNC_7(VAR_16, VAR_20, FUNC_0(VAR_16->J));

  FUNC_8(VAR_16, FUNC_14(VAR_16, VAR_1), VAR_16->gcsteps);

  FUNC_12(VAR_16, VAR_2, VAR_19);
  FUNC_9(VAR_16, FUNC_1(VAR_13), VAR_20|VAR_7, VAR_14.threshold);
  FUNC_5(VAR_16, VAR_20, VAR_14.total);
  VAR_16->gcsteps = 0;
  FUNC_4(VAR_16);
}
