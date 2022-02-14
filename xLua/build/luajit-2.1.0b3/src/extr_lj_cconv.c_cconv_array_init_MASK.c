
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef int TValue ;
typedef scalar_t__ MSize ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef scalar_t__ CTSize ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int *,int ) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(CTState *VAR_0, CType *VAR_1, CTSize VAR_2, uint8_t *VAR_3,
        TValue *VAR_4, MSize VAR_5)
{
  CType *VAR_6 = FUNC_1(VAR_0, VAR_1);
  CTSize VAR_7, VAR_8 = VAR_6->size;
  MSize VAR_9;
  if (VAR_5*VAR_8 > VAR_2)
    FUNC_0(VAR_0, VAR_1);
  for (VAR_9 = 0, VAR_7 = 0; VAR_9 < VAR_5; VAR_9++, VAR_7 += VAR_8)
    FUNC_2(VAR_0, VAR_6, VAR_3 + VAR_7, VAR_4 + VAR_9, 0);
  if (VAR_7 == VAR_8) {
    for (; VAR_7 < VAR_2; VAR_7 += VAR_8) FUNC_3(VAR_3 + VAR_7, VAR_3, VAR_8);
  } else {
    FUNC_4(VAR_3 + VAR_7, 0, VAR_2 - VAR_7);
  }
}
