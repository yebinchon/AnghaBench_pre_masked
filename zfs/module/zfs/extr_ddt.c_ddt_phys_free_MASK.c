
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ddt_spa; int ddt_checksum; } ;
typedef TYPE_1__ ddt_t ;
typedef int ddt_phys_t ;
typedef int ddt_key_t ;
typedef int blkptr_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *) ;

void
FUNC_4(ddt_t *VAR_0, ddt_key_t *VAR_1, ddt_phys_t *VAR_2, uint64_t VAR_3)
{
 blkptr_t VAR_4;

 FUNC_1(VAR_0->ddt_checksum, VAR_1, VAR_2, &VAR_4);





 FUNC_0(&VAR_4, 0);

 FUNC_2(VAR_2);
 FUNC_3(VAR_0->ddt_spa, VAR_3, &VAR_4);
}
