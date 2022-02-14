
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inout_port {size_t port; scalar_t__ name; int size; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (size_t,int ) ;

int
FUNC_3(struct inout_port *VAR_1)
{

 FUNC_0(VAR_1->port, VAR_1->size);
 FUNC_1(VAR_0[VAR_1->port].name == VAR_1->name);

 FUNC_2(VAR_1->port, VAR_1->size);

 return (0);
}
