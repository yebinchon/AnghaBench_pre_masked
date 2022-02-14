
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uqn_id; } ;
typedef TYPE_1__ userquota_node_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const userquota_node_t *VAR_2 = VAR_0;
 const userquota_node_t *VAR_3 = VAR_1;
 int VAR_4;





 VAR_4 = FUNC_1(VAR_2->uqn_id, VAR_3->uqn_id);

 return (FUNC_0(VAR_4));
}
