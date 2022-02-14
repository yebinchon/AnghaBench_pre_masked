
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zio_cksum_t ;
struct TYPE_3__ {int * acd_ctx; int * acd_zcp; int acd_byteorder; } ;
typedef TYPE_1__ zio_abd_checksum_data_t ;
typedef int uint64_t ;
typedef int fletcher_4_ctx_t ;
typedef int abd_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;

void
FUNC_1(abd_t *VAR_1, uint64_t VAR_2,
    const void *VAR_3, zio_cksum_t *VAR_4)
{
 fletcher_4_ctx_t VAR_5;

 zio_abd_checksum_data_t VAR_6 = {
  .acd_byteorder = VAR_0,
  .acd_zcp = VAR_4,
  .acd_ctx = &VAR_5
 };

 FUNC_0(VAR_1, VAR_2, &VAR_6);
}
