
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {unsigned long long spa_dedup_dspace; TYPE_2__** spa_ddt; int spa_ddt_stat_object; int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
struct TYPE_7__ {int ddt_histogram_cache; int ddt_histogram; } ;
typedef TYPE_2__ ddt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int *) ;

int
FUNC_4(spa_t *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_6);

 VAR_7 = FUNC_3(VAR_6->spa_meta_objset, VAR_3,
     VAR_2, sizeof (uint64_t), 1,
     &VAR_6->spa_ddt_stat_object);

 if (VAR_7)
  return (VAR_7 == VAR_4 ? 0 : VAR_7);

 for (enum zio_checksum VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  ddt_t *VAR_9 = VAR_6->spa_ddt[VAR_8];
  for (enum ddt_type VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   for (enum ddt_class VAR_11 = 0; VAR_11 < VAR_0;
       VAR_11++) {
    VAR_7 = FUNC_2(VAR_9, VAR_10, VAR_11);
    if (VAR_7 != 0 && VAR_7 != VAR_4)
     return (VAR_7);
   }
  }




  FUNC_0(VAR_9->ddt_histogram, &VAR_9->ddt_histogram_cache,
      sizeof (VAR_9->ddt_histogram));
  VAR_6->spa_dedup_dspace = ~0ULL;
 }

 return (0);
}
