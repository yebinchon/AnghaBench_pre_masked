
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inout_port {int port; int size; int arg; int handler; scalar_t__ flags; int name; } ;
struct TYPE_2__ {int arg; int handler; scalar_t__ flags; int name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_1 ;

int
FUNC_1(struct inout_port *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2->port, VAR_2->size);





 if ((((unsigned) VAR_2->flags) & VAR_0) == 0) {
  for (VAR_3 = VAR_2->port; VAR_3 < VAR_2->port + VAR_2->size; VAR_3++) {
   if ((((unsigned) VAR_1[VAR_3].flags) & VAR_0) == 0)
    return (-1);
  }
 }

 for (VAR_3 = VAR_2->port; VAR_3 < VAR_2->port + VAR_2->size; VAR_3++) {
  VAR_1[VAR_3].name = VAR_2->name;
  VAR_1[VAR_3].flags = VAR_2->flags;
  VAR_1[VAR_3].handler = VAR_2->handler;
  VAR_1[VAR_3].arg = VAR_2->arg;
 }

 return (0);
}
