
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef enum zio_stage { ____Placeholder_zio_stage } zio_stage ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int *,int const*) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *,scalar_t__,int const*,int *,int ,int ,int *,int *,int ,int ,int,int *,int ,int *,int ,int) ;
 int * FUNC_11 (int *,int *,int *,int *,int *,int ) ;

zio_t *
FUNC_12(zio_t *VAR_5, spa_t *VAR_6, uint64_t VAR_7, const blkptr_t *VAR_8,
    enum zio_flag VAR_9)
{
 zio_t *VAR_10;
 enum zio_stage VAR_11 = VAR_0;

 FUNC_0(!FUNC_5(VAR_8));
 FUNC_0(FUNC_9(VAR_6) == VAR_7);

 if (FUNC_3(VAR_8))
  return (FUNC_11(VAR_5, VAR_6, ((void*)0), ((void*)0), ((void*)0), 0));

 FUNC_8(VAR_6, VAR_8);
 FUNC_6(VAR_6, VAR_8);
 FUNC_7(VAR_6, VAR_8);






 if (FUNC_4(VAR_8) || FUNC_1(VAR_8))
  VAR_11 |= VAR_2;

 VAR_10 = FUNC_10(VAR_5, VAR_6, VAR_7, VAR_8, ((void*)0), FUNC_2(VAR_8),
     FUNC_2(VAR_8), ((void*)0), ((void*)0), VAR_4, VAR_1,
     VAR_9, ((void*)0), 0, ((void*)0), VAR_3, VAR_11);

 return (VAR_10);
}
