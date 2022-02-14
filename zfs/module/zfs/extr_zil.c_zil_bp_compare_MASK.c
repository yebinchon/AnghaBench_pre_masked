
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zn_dva; } ;
typedef TYPE_1__ zil_bp_node_t ;
typedef int dva_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(const void *VAR_0, const void *VAR_1)
{
 const dva_t *VAR_2 = &((zil_bp_node_t *)VAR_0)->zn_dva;
 const dva_t *VAR_3 = &((zil_bp_node_t *)VAR_1)->zn_dva;

 int VAR_4 = FUNC_2(FUNC_1(VAR_2), FUNC_1(VAR_3));
 if (FUNC_3(VAR_4))
  return (VAR_4);

 return (FUNC_2(FUNC_0(VAR_2), FUNC_0(VAR_3)));
}
