
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int sval; } ;
struct TYPE_6__ {scalar_t__ k; TYPE_1__ u; } ;
typedef int TValue ;
typedef TYPE_2__ ExpDesc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(TValue *VAR_3, ExpDesc *VAR_4)
{
  if (VAR_4->k <= VAR_2) {
    FUNC_4(VAR_3, ~(uint32_t)VAR_4->k);
  } else if (VAR_4->k == VAR_1) {
    FUNC_3(VAR_3, FUNC_2(VAR_4->u.sval), VAR_0);
  } else {
    FUNC_1(FUNC_5(FUNC_0(VAR_4)));
    *VAR_3 = *FUNC_0(VAR_4);
  }
}
