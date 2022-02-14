
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int das_nunlinked; } ;
struct TYPE_5__ {TYPE_1__ dk_aggsums; int * dk_kstats; } ;
typedef TYPE_2__ dataset_kstats_t ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(dataset_kstats_t *VAR_0, int64_t VAR_1)
{
 if (VAR_0->dk_kstats == ((void*)0))
  return;

 FUNC_0(&VAR_0->dk_aggsums.das_nunlinked, VAR_1);
}
