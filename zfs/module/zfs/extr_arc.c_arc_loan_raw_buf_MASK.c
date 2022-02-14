
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef enum zio_compress { ____Placeholder_zio_compress } zio_compress ;
typedef int dmu_object_type_t ;
typedef int boolean_t ;
typedef int arc_buf_t ;


 int * FUNC_0 (int *,int ,int ,int ,int const*,int const*,int const*,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

arc_buf_t *
FUNC_2(spa_t *VAR_2, uint64_t VAR_3, boolean_t VAR_4,
    const uint8_t *VAR_5, const uint8_t *VAR_6, const uint8_t *VAR_7,
    dmu_object_type_t VAR_8, uint64_t VAR_9, uint64_t VAR_10,
    enum zio_compress VAR_11)
{
 arc_buf_t *VAR_12 = FUNC_0(VAR_2, VAR_1, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 FUNC_1(&VAR_0, VAR_9);
 return (VAR_12);
}
