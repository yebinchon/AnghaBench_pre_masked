
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int info; int size; } ;
typedef scalar_t__ IRType ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static IRType FUNC_7(CTState *VAR_9, CType *VAR_10)
{
  if (FUNC_3(VAR_10->info)) VAR_10 = FUNC_1(VAR_9, VAR_10);
  if (FUNC_0(FUNC_4(VAR_10->info))) {
    if ((VAR_10->info & VAR_0)) {
      if (VAR_10->size == sizeof(double))
 return VAR_5;
      else if (VAR_10->size == sizeof(float))
 return VAR_3;
    } else {
      uint32_t VAR_11 = FUNC_6(VAR_10->size);
      if (VAR_11 <= 3)
 return VAR_4 + 2*VAR_11 + ((VAR_10->info & VAR_1) ? 1 : 0);
    }
  } else if (FUNC_5(VAR_10->info)) {
    return (VAR_8 && VAR_10->size == 8) ? VAR_7 : VAR_6;
  } else if (FUNC_2(VAR_10->info)) {
    if (VAR_10->size == 2*sizeof(double))
      return VAR_5;
    else if (VAR_10->size == 2*sizeof(float))
      return VAR_3;
  }
  return VAR_2;
}
