
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct prime_ent {int shift; int inv_m2; scalar_t__ prime; } ;
typedef TYPE_1__* htab_t ;
typedef scalar_t__ hashval_t ;
struct TYPE_3__ {size_t size_prime_index; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 struct prime_ent* VAR_0 ;

__attribute__((used)) static inline hashval_t
FUNC_1 (hashval_t VAR_1, htab_t VAR_2)
{
  const struct prime_ent *VAR_3 = &VAR_0[VAR_2->size_prime_index];
  return 1 + FUNC_0 (VAR_1, VAR_3->prime - 2, VAR_3->inv_m2, VAR_3->shift);
}
