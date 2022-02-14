
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_8__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int int64_t ;
struct TYPE_10__ {int info; int size; } ;
struct TYPE_9__ {int * p; TYPE_5__** ct; } ;
typedef int MMS ;
typedef int GCcdata ;
typedef int CTypeID ;
typedef int CType ;
typedef int CTState ;
typedef TYPE_2__ CDArith ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,int *,TYPE_5__*,int *,int ,int ) ;
 int * FUNC_10 (int *,int ,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_15(lua_State *VAR_3, CTState *VAR_4, CDArith *VAR_5, MMS VAR_6)
{
  if (FUNC_2(VAR_5->ct[0]->info) && VAR_5->ct[0]->size <= 8 &&
      FUNC_2(VAR_5->ct[1]->info) && VAR_5->ct[1]->size <= 8) {
    CTypeID VAR_7 = (((VAR_5->ct[0]->info & VAR_0) && VAR_5->ct[0]->size == 8) ||
    ((VAR_5->ct[1]->info & VAR_0) && VAR_5->ct[1]->size == 8)) ?
   VAR_2 : VAR_1;
    CType *VAR_8 = FUNC_1(VAR_4, VAR_7);
    GCcdata *VAR_9;
    uint64_t VAR_10, VAR_11, *VAR_12;
    FUNC_9(VAR_4, VAR_8, VAR_5->ct[0], (uint8_t *)&VAR_10, VAR_5->p[0], 0);
    if (VAR_6 != 128)
      FUNC_9(VAR_4, VAR_8, VAR_5->ct[1], (uint8_t *)&VAR_11, VAR_5->p[1], 0);
    switch (VAR_6) {
    case 135:
      FUNC_13(VAR_3->top-1, (VAR_10 == VAR_11));
      return 1;
    case 133:
      FUNC_13(VAR_3->top-1,
        VAR_7 == VAR_1 ? ((int64_t)VAR_10 < (int64_t)VAR_11) : (VAR_10 < VAR_11));
      return 1;
    case 134:
      FUNC_13(VAR_3->top-1,
        VAR_7 == VAR_1 ? ((int64_t)VAR_10 <= (int64_t)VAR_11) : (VAR_10 <= VAR_11));
      return 1;
    default: break;
    }
    VAR_9 = FUNC_10(VAR_4, VAR_7, 8);
    VAR_12 = (uint64_t *)FUNC_0(VAR_9);
    FUNC_14(VAR_3, VAR_3->top-1, VAR_9);
    switch (VAR_6) {
    case 137: *VAR_12 = VAR_10 + VAR_11; break;
    case 129: *VAR_12 = VAR_10 - VAR_11; break;
    case 131: *VAR_12 = VAR_10 * VAR_11; break;
    case 136:
      if (VAR_7 == VAR_1)
 *VAR_12 = (uint64_t)FUNC_3((int64_t)VAR_10, (int64_t)VAR_11);
      else
 *VAR_12 = FUNC_4(VAR_10, VAR_11);
      break;
    case 132:
      if (VAR_7 == VAR_1)
 *VAR_12 = (uint64_t)FUNC_5((int64_t)VAR_10, (int64_t)VAR_11);
      else
 *VAR_12 = FUNC_6(VAR_10, VAR_11);
      break;
    case 130:
      if (VAR_7 == VAR_1)
 *VAR_12 = (uint64_t)FUNC_7((int64_t)VAR_10, (int64_t)VAR_11);
      else
 *VAR_12 = FUNC_8(VAR_10, VAR_11);
      break;
    case 128: *VAR_12 = (uint64_t)-(int64_t)VAR_10; break;
    default: FUNC_12(0); break;
    }
    FUNC_11(VAR_3);
    return 1;
  }
  return 0;
}
