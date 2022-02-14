
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int number; scalar_t__ time; struct client* client; } ;
struct client {int flags; int stdout_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,long,int ,int) ;
 int FUNC_1 (struct client*) ;

void
FUNC_2(struct cmdq_item *VAR_1, const char *VAR_2, int VAR_3)
{
 struct client *VAR_4 = VAR_1->client;

 if (VAR_4 == ((void*)0) || !(VAR_4->flags & VAR_0))
  return;

 FUNC_0(VAR_4->stdout_data, "%%%s %ld %u %d\n", VAR_2,
     (long)VAR_1->time, VAR_1->number, VAR_3);
 FUNC_1(VAR_4);
}
