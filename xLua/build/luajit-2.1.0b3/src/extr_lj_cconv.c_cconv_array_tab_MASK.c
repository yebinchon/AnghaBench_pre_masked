
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef int TValue ;
typedef int GCtab ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef scalar_t__ CTSize ;
typedef int CTInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(CTState *VAR_1, CType *VAR_2,
       uint8_t *VAR_3, GCtab *VAR_4, CTInfo VAR_5)
{
  int32_t VAR_6;
  CType *VAR_7 = FUNC_1(VAR_1, VAR_2);
  CTSize VAR_8 = VAR_2->size, VAR_9 = VAR_7->size, VAR_10 = 0;
  for (VAR_6 = 0; ; VAR_6++) {
    TValue *VAR_11 = (TValue *)FUNC_3(VAR_4, VAR_6);
    if (!VAR_11 || FUNC_6(VAR_11)) {
      if (VAR_6 == 0) continue;
      break;
    }
    if (VAR_10 >= VAR_8)
      FUNC_0(VAR_1, VAR_2);
    FUNC_2(VAR_1, VAR_7, VAR_3 + VAR_10, VAR_11, VAR_5);
    VAR_10 += VAR_9;
  }
  if (VAR_8 != VAR_0) {
    if (VAR_10 == VAR_9) {
      for (; VAR_10 < VAR_8; VAR_10 += VAR_9) FUNC_4(VAR_3 + VAR_10, VAR_3, VAR_9);
    } else {
      FUNC_5(VAR_3 + VAR_10, 0, VAR_8 - VAR_10);
    }
  }
}
