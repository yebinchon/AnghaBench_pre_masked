
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nins; TYPE_1__* ir; } ;
struct TYPE_4__ {scalar_t__ o; scalar_t__ op2; int op1; } ;
typedef scalar_t__ SnapNo ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ GCtrace ;
typedef int BloomFilter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static BloomFilter FUNC_1(GCtrace *VAR_1, SnapNo VAR_2)
{
  BloomFilter VAR_3 = 0;
  IRIns *VAR_4;
  for (VAR_4 = &VAR_1->ir[VAR_1->nins-1]; VAR_4->o == VAR_0; VAR_4--)
    if (VAR_4->op2 <= VAR_2)
      FUNC_0(VAR_3, VAR_4->op1);
  return VAR_3;
}
