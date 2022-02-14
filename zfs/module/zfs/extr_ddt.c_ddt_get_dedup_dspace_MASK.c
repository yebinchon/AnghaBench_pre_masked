
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_7__ {unsigned long long spa_dedup_dspace; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_8__ {unsigned long long dds_ref_dsize; unsigned long long dds_dsize; } ;
typedef TYPE_2__ ddt_stat_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

uint64_t
FUNC_2(spa_t *VAR_0)
{
 ddt_stat_t VAR_1;

 if (VAR_0->spa_dedup_dspace != ~0ULL)
  return (VAR_0->spa_dedup_dspace);

 FUNC_0(&VAR_1, sizeof (ddt_stat_t));


 FUNC_1(VAR_0, &VAR_1);
 VAR_0->spa_dedup_dspace = VAR_1.dds_ref_dsize - VAR_1.dds_dsize;
 return (VAR_0->spa_dedup_dspace);
}
