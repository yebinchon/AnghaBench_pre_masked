
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_t ;
typedef int zio_priority_t ;
typedef int zio_done_func_t ;
typedef int zbookmark_phys_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;
typedef int blkptr_t ;
typedef int abd_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int const*,int) ;
 int * FUNC_2 (int *,int *,int ,int const*,int *,int ,int ,int *,void*,int ,int ,int,int *,int ,int const*,int ,int ) ;

zio_t *
FUNC_3(zio_t *VAR_6, spa_t *VAR_7, const blkptr_t *VAR_8,
    abd_t *VAR_9, uint64_t VAR_10, zio_done_func_t *VAR_11, void *VAR_12,
    zio_priority_t VAR_13, enum zio_flag VAR_14, const zbookmark_phys_t *VAR_15)
{
 zio_t *VAR_16;

 FUNC_1(VAR_7, VAR_8, VAR_14 & VAR_1);

 VAR_16 = FUNC_2(VAR_6, VAR_7, FUNC_0(VAR_8), VAR_8,
     VAR_9, VAR_10, VAR_10, VAR_11, VAR_12,
     VAR_5, VAR_13, VAR_14, ((void*)0), 0, VAR_15,
     VAR_4, (VAR_14 & VAR_2) ?
     VAR_0 : VAR_3);

 return (VAR_16);
}
