
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int L; } ;
struct TYPE_7__ {int info; } ;
typedef int TValue ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef TYPE_2__ CTState ;
typedef int CTSize ;
typedef int CTInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ,int*,int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;

void FUNC_8(CTState *VAR_6, CType *VAR_7, uint8_t *VAR_8, TValue *VAR_9)
{
  CTInfo VAR_10 = VAR_7->info;
  CTSize VAR_11, VAR_12;
  uint32_t VAR_13, VAR_14;
  FUNC_7(FUNC_4(VAR_10));
  if ((VAR_10 & VAR_0)) {
    uint8_t VAR_15;
    FUNC_7(FUNC_0(VAR_10) == 1);
    FUNC_5(VAR_6, FUNC_3(VAR_6, VAR_2), &VAR_15, VAR_9, 0);
    VAR_13 = VAR_15;
  } else {
    CTypeID VAR_16 = (VAR_10 & VAR_1) ? VAR_4 : VAR_3;
    FUNC_5(VAR_6, FUNC_3(VAR_6, VAR_16), (uint8_t *)&VAR_13, VAR_9, 0);
  }
  VAR_11 = FUNC_2(VAR_10);
  VAR_12 = FUNC_0(VAR_10);
  FUNC_7(VAR_11 < 8*FUNC_1(VAR_10));
  FUNC_7(VAR_12 > 0 && VAR_12 <= 8*FUNC_1(VAR_10));

  if (VAR_11 + VAR_12 > 8*FUNC_1(VAR_10))
    FUNC_6(VAR_6->L, VAR_5);
  VAR_14 = ((1u << VAR_12) - 1u) << VAR_11;
  VAR_13 = (VAR_13 << VAR_11) & VAR_14;

  switch (FUNC_1(VAR_10)) {
  case 4: *(uint32_t *)VAR_8 = (*(uint32_t *)VAR_8 & ~VAR_14) | (uint32_t)VAR_13; break;
  case 2: *(uint16_t *)VAR_8 = (*(uint16_t *)VAR_8 & ~VAR_14) | (uint16_t)VAR_13; break;
  case 1: *(uint8_t *)VAR_8 = (*(uint8_t *)VAR_8 & ~VAR_14) | (uint8_t)VAR_13; break;
  default: FUNC_7(0); break;
  }
}
