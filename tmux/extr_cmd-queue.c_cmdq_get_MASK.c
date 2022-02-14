
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_list {int dummy; } ;
struct client {struct cmdq_list queue; } ;


 struct cmdq_list VAR_0 ;

__attribute__((used)) static struct cmdq_list *
FUNC_0(struct client *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return (&VAR_0);
 return (&VAR_1->queue);
}
