
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zio_abd_checksum_data_t ;
typedef int uint64_t ;
typedef int abd_t ;
struct TYPE_2__ {int (* acf_fini ) (int *) ;int acf_iter; int (* acf_init ) (int *) ;} ;


 int FUNC_0 (int *,int ,int ,int ,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(abd_t *VAR_1, uint64_t VAR_2, zio_abd_checksum_data_t *VAR_3)
{
 VAR_0.acf_init(VAR_3);
 FUNC_0(VAR_1, 0, VAR_2, VAR_0.acf_iter, VAR_3);
 VAR_0.acf_fini(VAR_3);
}
