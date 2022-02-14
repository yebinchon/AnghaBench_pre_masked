
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zio_cksum_t ;
typedef int uint64_t ;
struct TYPE_3__ {int (* fini_byteswap ) (int *,int *) ;int (* compute_byteswap ) (int *,void const*,int ) ;int (* init_byteswap ) (int *) ;} ;
typedef TYPE_1__ fletcher_4_ops_t ;
typedef int fletcher_4_ctx_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void const*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_4(const void *VAR_0, uint64_t VAR_1, zio_cksum_t *VAR_2)
{
 fletcher_4_ctx_t VAR_3;
 const fletcher_4_ops_t *VAR_4 = FUNC_0();

 VAR_4->init_byteswap(&VAR_3);
 VAR_4->compute_byteswap(&VAR_3, VAR_0, VAR_1);
 VAR_4->fini_byteswap(&VAR_3, VAR_2);
}
