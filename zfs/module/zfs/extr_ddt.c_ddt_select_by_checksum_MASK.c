
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** spa_ddt; } ;
typedef TYPE_1__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
typedef int ddt_t ;



ddt_t *
FUNC_0(spa_t *VAR_0, enum zio_checksum VAR_1)
{
 return (VAR_0->spa_ddt[VAR_1]);
}
