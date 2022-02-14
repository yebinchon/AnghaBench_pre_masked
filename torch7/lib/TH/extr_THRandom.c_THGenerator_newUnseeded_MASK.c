
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int left; scalar_t__ normal_is_valid; scalar_t__ seeded; } ;
typedef TYPE_1__ THGenerator ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static THGenerator* FUNC_2()
{
  THGenerator *VAR_0 = FUNC_0(sizeof(THGenerator));
  FUNC_1(VAR_0, 0, sizeof(THGenerator));
  VAR_0->left = 1;
  VAR_0->seeded = 0;
  VAR_0->normal_is_valid = 0;
  return VAR_0;
}
