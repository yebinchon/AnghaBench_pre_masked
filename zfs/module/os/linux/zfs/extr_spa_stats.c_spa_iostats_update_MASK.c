
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spa_iostats_t ;
struct TYPE_3__ {int ks_data; } ;
typedef TYPE_1__ kstat_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_1 ;

int
FUNC_1(kstat_t *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  FUNC_0(VAR_2->ks_data, &VAR_1,
      sizeof (spa_iostats_t));
 }

 return (0);
}
