
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int io_flags; } ;
typedef TYPE_1__ zio_t ;
typedef int uint64_t ;
struct TYPE_8__ {int dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int blkptr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int const*,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(zio_t *VAR_0, dsl_pool_t *VAR_1, uint64_t VAR_2, const blkptr_t *VAR_3)
{
 FUNC_0(FUNC_1(VAR_1));
 FUNC_3(FUNC_2(VAR_0, VAR_1->dp_spa, VAR_2, VAR_3, VAR_0->io_flags));
}
