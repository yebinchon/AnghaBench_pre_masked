
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_item {struct cmdq_item* item; } ;
struct wait_channel {int waiters; int name; scalar_t__ woken; } ;
struct cmdq_item {struct client* client; } ;
struct client {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct wait_item*,int ) ;
 struct wait_channel* FUNC_1 (char const*) ;
 int FUNC_2 (struct wait_channel*) ;
 int FUNC_3 (struct cmdq_item*,char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ,struct client*) ;
 struct wait_item* FUNC_5 (int,int) ;

__attribute__((used)) static enum cmd_retval
FUNC_6(struct cmdq_item *VAR_4, const char *VAR_5,
    struct wait_channel *VAR_6)
{
 struct client *VAR_7 = VAR_4->client;
 struct wait_item *VAR_8;

 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_4, "not able to wait");
  return (VAR_0);
 }

 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_1(VAR_5);

 if (VAR_6->woken) {
  FUNC_4("wait channel %s already woken (%p)", VAR_6->name, VAR_7);
  FUNC_2(VAR_6);
  return (VAR_1);
 }
 FUNC_4("wait channel %s not woken (%p)", VAR_6->name, VAR_7);

 VAR_8 = FUNC_5(1, sizeof *VAR_8);
 VAR_8->item = VAR_4;
 FUNC_0(&VAR_6->waiters, VAR_8, VAR_3);

 return (VAR_2);
}
