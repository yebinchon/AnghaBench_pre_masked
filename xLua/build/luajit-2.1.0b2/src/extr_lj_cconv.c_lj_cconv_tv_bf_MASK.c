
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int lua_Number ;
typedef int int32_t ;
struct TYPE_6__ {int L; } ;
struct TYPE_5__ {int info; } ;
typedef int TValue ;
typedef TYPE_1__ CType ;
typedef TYPE_2__ CTState ;
typedef int CTSize ;
typedef int CTInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(CTState *VAR_4, CType *VAR_5, TValue *VAR_6, uint8_t *VAR_7)
{
  CTInfo VAR_8 = VAR_5->info;
  CTSize VAR_9, VAR_10;
  uint32_t VAR_11;
  FUNC_5(FUNC_3(VAR_8));

  switch (FUNC_1(VAR_8)) {
  case 4: VAR_11 = *(uint32_t *)VAR_7; break;
  case 2: VAR_11 = *(uint16_t *)VAR_7; break;
  case 1: VAR_11 = *(uint8_t *)VAR_7; break;
  default: FUNC_5(0); VAR_11 = 0; break;
  }

  VAR_9 = FUNC_2(VAR_8);
  VAR_10 = FUNC_0(VAR_8);
  FUNC_5(VAR_9 < 8*FUNC_1(VAR_8));
  FUNC_5(VAR_10 > 0 && VAR_10 <= 8*FUNC_1(VAR_8));
  if (VAR_9 + VAR_10 > 8*FUNC_1(VAR_8))
    FUNC_4(VAR_4->L, VAR_3);
  if (!(VAR_8 & VAR_0)) {
    CTSize VAR_12 = 32 - VAR_10;
    if (!(VAR_8 & VAR_1)) {
      FUNC_7(VAR_6, (int32_t)(VAR_11 << (VAR_12-VAR_9)) >> VAR_12);
    } else {
      VAR_11 = (VAR_11 << (VAR_12-VAR_9)) >> VAR_12;
      if (!VAR_2 || (int32_t)VAR_11 < 0)
 FUNC_8(VAR_6, (lua_Number)(uint32_t)VAR_11);
      else
 FUNC_7(VAR_6, (int32_t)VAR_11);
    }
  } else {
    FUNC_5(VAR_10 == 1);
    FUNC_6(VAR_6, (VAR_11 >> VAR_9) & 1);
  }
  return 0;
}
