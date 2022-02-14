
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** spa_ddt; } ;
typedef TYPE_1__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(spa_t *VAR_1)
{
 for (enum zio_checksum VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->spa_ddt[VAR_2]) {
   FUNC_0(VAR_1->spa_ddt[VAR_2]);
   VAR_1->spa_ddt[VAR_2] = ((void*)0);
  }
 }
}
