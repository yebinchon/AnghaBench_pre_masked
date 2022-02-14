
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* ci_tmpl_free ) (int *) ;} ;
typedef TYPE_1__ zio_checksum_info_t ;
struct TYPE_6__ {int ** spa_cksum_tmpls; } ;
typedef TYPE_2__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

void
FUNC_2(spa_t *VAR_2)
{
 for (enum zio_checksum VAR_3 = 0;
     VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->spa_cksum_tmpls[VAR_3] != ((void*)0)) {
   zio_checksum_info_t *VAR_4 = &VAR_1[VAR_3];

   FUNC_0(VAR_4->ci_tmpl_free != ((void*)0));
   VAR_4->ci_tmpl_free(VAR_2->spa_cksum_tmpls[VAR_3]);
   VAR_2->spa_cksum_tmpls[VAR_3] = ((void*)0);
  }
 }
}
