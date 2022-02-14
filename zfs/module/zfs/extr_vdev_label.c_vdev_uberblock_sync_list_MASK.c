
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_6__ {int * vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int uberblock_t ;
typedef int spa_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int * FUNC_3 (int *,int *,int *,int) ;
 int FUNC_4 (int *) ;

int
FUNC_5(vdev_t **VAR_1, int VAR_2, uberblock_t *VAR_3, int VAR_4)
{
 spa_t *VAR_5 = VAR_1[0]->vdev_spa;
 zio_t *VAR_6;
 uint64_t VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_5, ((void*)0), ((void*)0), VAR_4);

 for (int VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_0(VAR_6, &VAR_7, VAR_3, VAR_1[VAR_8], VAR_4);

 (void) FUNC_4(VAR_6);






 VAR_6 = FUNC_3(VAR_5, ((void*)0), ((void*)0), VAR_4);

 for (int VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (FUNC_1(VAR_1[VAR_9])) {
   FUNC_2(VAR_6, VAR_1[VAR_9]);
  }
 }

 (void) FUNC_4(VAR_6);

 return (VAR_7 >= 1 ? 0 : VAR_0);
}
