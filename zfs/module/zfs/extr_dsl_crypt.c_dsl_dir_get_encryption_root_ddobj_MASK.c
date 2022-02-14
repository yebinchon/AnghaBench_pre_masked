
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ dd_crypto_obj; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_4__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int,int,int *) ;

__attribute__((used)) static int
FUNC_2(dsl_dir_t *VAR_2, uint64_t *VAR_3)
{
 if (VAR_2->dd_crypto_obj == 0)
  return (FUNC_0(VAR_1));

 return (FUNC_1(VAR_2->dd_pool->dp_meta_objset, VAR_2->dd_crypto_obj,
     VAR_0, 8, 1, VAR_3));
}
