
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_id; } ;
typedef TYPE_1__ znode_t ;
typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ z_version; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint64_t
FUNC_2(znode_t *VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3 = VAR_1->z_id;

 if (FUNC_1(VAR_1)->z_version >= VAR_0)
  VAR_3 |= FUNC_0(VAR_2) << 60;
 return (VAR_3);
}
