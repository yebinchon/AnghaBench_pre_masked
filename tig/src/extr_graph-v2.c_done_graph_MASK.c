
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id_map; } ;
struct graph_v2 {TYPE_1__ colors; } ;
struct graph {struct graph_v2* private; } ;


 int FUNC_0 (struct graph_v2*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct graph *VAR_1)
{
 struct graph_v2 *VAR_2 = VAR_1->private;

 FUNC_1(VAR_2->colors.id_map);

 FUNC_0(VAR_2);

 if (VAR_0)
  FUNC_2(VAR_0);
}
