
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int * ks32; } ;
struct TYPE_5__ {int nr; TYPE_1__ decr_ks; TYPE_3__* ops; } ;
typedef TYPE_2__ aes_key_t ;
struct TYPE_6__ {scalar_t__ needs_byteswap; int (* decrypt ) (int *,int ,int *,int *) ;} ;
typedef TYPE_3__ aes_impl_ops_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int * const*,int **,int) ;
 int FUNC_1 (int **,int **,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int *) ;
 int FUNC_4 (int *,int ,int *,int *) ;

int
FUNC_5(const void *VAR_2, const uint8_t *VAR_3, uint8_t *VAR_4)
{
 aes_key_t *VAR_5 = (aes_key_t *)VAR_2;
 const aes_impl_ops_t *VAR_6 = VAR_5->ops;

 if (FUNC_0(VAR_3, VAR_4, sizeof (uint32_t)) && !VAR_6->needs_byteswap) {

  VAR_6->decrypt(&VAR_5->decr_ks.ks32[0], VAR_5->nr,

      (uint32_t *)VAR_3, (uint32_t *)VAR_4);
 } else {
  uint32_t VAR_7[VAR_0 / sizeof (uint32_t)];


  if (VAR_6->needs_byteswap) {
   VAR_7[0] = FUNC_2(*(uint32_t *)(void *)&VAR_3[0]);
   VAR_7[1] = FUNC_2(*(uint32_t *)(void *)&VAR_3[4]);
   VAR_7[2] = FUNC_2(*(uint32_t *)(void *)&VAR_3[8]);
   VAR_7[3] = FUNC_2(*(uint32_t *)(void *)&VAR_3[12]);
  } else
   FUNC_1(VAR_3, &VAR_7, VAR_0);

  VAR_6->decrypt(&VAR_5->decr_ks.ks32[0], VAR_5->nr, VAR_7, VAR_7);


  if (VAR_6->needs_byteswap) {
   *(uint32_t *)(void *)&VAR_4[0] = FUNC_2(VAR_7[0]);
   *(uint32_t *)(void *)&VAR_4[4] = FUNC_2(VAR_7[1]);
   *(uint32_t *)(void *)&VAR_4[8] = FUNC_2(VAR_7[2]);
   *(uint32_t *)(void *)&VAR_4[12] = FUNC_2(VAR_7[3]);
  } else
   FUNC_1(&VAR_7, VAR_4, VAR_0);
 }
 return (VAR_1);
}
