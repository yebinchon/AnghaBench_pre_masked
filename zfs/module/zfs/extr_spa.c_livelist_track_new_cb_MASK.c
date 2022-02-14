
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int allocs; int frees; } ;
typedef TYPE_1__ livelist_new_arg_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;
typedef int blkptr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, const blkptr_t *VAR_2, boolean_t VAR_3,
    dmu_tx_t *VAR_4)
{
 FUNC_0(VAR_4 == ((void*)0));
 livelist_new_arg_t *VAR_5 = VAR_1;
 if (VAR_3) {
  FUNC_1(VAR_5->frees, VAR_2);
 } else {
  FUNC_1(VAR_5->allocs, VAR_2);
  VAR_0++;
 }
 return (0);
}
