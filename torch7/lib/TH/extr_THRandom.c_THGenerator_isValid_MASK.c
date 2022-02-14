
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seeded; scalar_t__ left; scalar_t__ next; } ;
typedef TYPE_1__ THGenerator ;


 scalar_t__ VAR_0 ;

int FUNC_0(THGenerator *VAR_1)
{
  if ((VAR_1->seeded == 1) &&
    (VAR_1->left > 0 && VAR_1->left <= VAR_0) && (VAR_1->next <= VAR_0))
    return 1;

  return 0;
}
