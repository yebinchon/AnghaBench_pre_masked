
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * spa_ddt; int spa_dedup_checksum; } ;
typedef TYPE_1__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(spa_t *VAR_2)
{
 VAR_2->spa_dedup_checksum = VAR_1;

 for (enum zio_checksum VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->spa_ddt[VAR_3] = FUNC_0(VAR_2, VAR_3);
}
