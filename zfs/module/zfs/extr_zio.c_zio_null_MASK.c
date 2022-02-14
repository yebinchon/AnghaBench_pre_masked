
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_t ;
typedef int zio_done_func_t ;
typedef int vdev_t ;
typedef int spa_t ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int *,int ,int *,int *,int ,int ,int *,void*,int ,int ,int,int *,int ,int *,int ,int ) ;

zio_t *
FUNC_1(zio_t *VAR_4, spa_t *VAR_5, vdev_t *VAR_6, zio_done_func_t *VAR_7,
    void *VAR_8, enum zio_flag VAR_9)
{
 zio_t *VAR_10;

 VAR_10 = FUNC_0(VAR_4, VAR_5, 0, ((void*)0), ((void*)0), 0, 0, VAR_7, VAR_8,
     VAR_3, VAR_1, VAR_9, VAR_6, 0, ((void*)0),
     VAR_2, VAR_0);

 return (VAR_10);
}
