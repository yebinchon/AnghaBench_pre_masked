
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_11__ {int * vdev_aux; scalar_t__ vdev_islog; int vdev_ishole; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_12__ {int spa_config_dirty_list; } ;
typedef TYPE_2__ spa_t ;
typedef int list_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *,TYPE_1__*,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,TYPE_2__*,int *,int ,int *,int) ;
 int * FUNC_8 (TYPE_2__*,int *,int *,int) ;
 int FUNC_9 (int *) ;

int
FUNC_10(spa_t *VAR_3, int VAR_4, uint64_t VAR_5, int VAR_6)
{
 list_t *VAR_7 = &VAR_3->spa_config_dirty_list;
 vdev_t *VAR_8;
 zio_t *VAR_9;
 int VAR_10;




 VAR_9 = FUNC_8(VAR_3, ((void*)0), ((void*)0), VAR_6);

 for (VAR_8 = FUNC_2(VAR_7); VAR_8 != ((void*)0); VAR_8 = FUNC_3(VAR_7, VAR_8)) {
  uint64_t *VAR_11;

  FUNC_0(!VAR_8->vdev_ishole);

  VAR_11 = FUNC_1(sizeof (uint64_t), VAR_0);
  zio_t *VAR_12 = FUNC_7(VAR_9, VAR_3, ((void*)0),
      (VAR_8->vdev_islog || VAR_8->vdev_aux != ((void*)0)) ?
      VAR_1 : VAR_2,
      VAR_11, VAR_6);
  FUNC_4(VAR_12, VAR_11, VAR_8, VAR_4, VAR_5, VAR_6);
  FUNC_6(VAR_12);
 }

 VAR_10 = FUNC_9(VAR_9);




 VAR_9 = FUNC_8(VAR_3, ((void*)0), ((void*)0), VAR_6);

 for (VAR_8 = FUNC_2(VAR_7); VAR_8 != ((void*)0); VAR_8 = FUNC_3(VAR_7, VAR_8))
  FUNC_5(VAR_9, VAR_8);

 (void) FUNC_9(VAR_9);

 return (VAR_10);
}
