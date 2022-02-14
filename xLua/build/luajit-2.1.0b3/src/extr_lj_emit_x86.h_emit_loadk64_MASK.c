
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int x86Op ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_16__ {scalar_t__ u64; } ;
struct TYPE_15__ {scalar_t__ curins; scalar_t__ stopins; int mcbot; int mclim; scalar_t__ mctop; int J; } ;
struct TYPE_14__ {scalar_t__ i; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (intptr_t) ;
 intptr_t FUNC_2 (TYPE_2__*,scalar_t__ const*) ;
 int FUNC_3 (TYPE_2__*,int,scalar_t__ const) ;
 int FUNC_4 (TYPE_2__*,int ,int,scalar_t__ const*) ;
 int FUNC_5 (TYPE_2__*,int ,int,int ,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ,int,int) ;
 TYPE_5__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;
 intptr_t FUNC_10 (TYPE_2__*,...) ;
 intptr_t FUNC_11 (TYPE_2__*,scalar_t__ const*) ;
 scalar_t__ FUNC_12 (int ,int) ;

__attribute__((used)) static void FUNC_13(ASMState *VAR_10, Reg VAR_11, IRIns *VAR_12)
{
  Reg VAR_13;
  x86Op VAR_14;
  const uint64_t *VAR_15 = &FUNC_7(VAR_12)->u64;
  if (FUNC_12(VAR_3, VAR_11)) {
    VAR_13 = VAR_11;
    VAR_14 = VAR_7;
  } else {
    VAR_13 = VAR_11 | VAR_1;
    VAR_14 = VAR_6;
  }
  if (*VAR_15 == 0) {
    FUNC_6(VAR_10, FUNC_12(VAR_3, VAR_11) ? VAR_8 : FUNC_0(VAR_9), VAR_11, VAR_11);
  } else {
    FUNC_4(VAR_10, VAR_14, VAR_13, VAR_15);

  }
}
