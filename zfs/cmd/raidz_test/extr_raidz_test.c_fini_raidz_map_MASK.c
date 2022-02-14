
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_size; int io_abd; } ;
typedef TYPE_1__ zio_t ;
typedef int raidz_map_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(zio_t **VAR_0, raidz_map_t **VAR_1)
{
 FUNC_2(*VAR_1);
 FUNC_0((*VAR_0)->io_abd, (*VAR_0)->io_size);
 FUNC_1(*VAR_0, sizeof (zio_t));

 *VAR_0 = ((void*)0);
 *VAR_1 = ((void*)0);
}
