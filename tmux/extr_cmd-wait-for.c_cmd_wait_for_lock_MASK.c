
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_item {struct cmdq_item* item; } ;
struct wait_channel {int locked; int lockers; } ;
struct cmdq_item {int * client; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct wait_item*,int ) ;
 struct wait_channel* FUNC_1 (char const*) ;
 int FUNC_2 (struct cmdq_item*,char*) ;
 int VAR_3 ;
 struct wait_item* FUNC_3 (int,int) ;

__attribute__((used)) static enum cmd_retval
FUNC_4(struct cmdq_item *VAR_4, const char *VAR_5,
    struct wait_channel *VAR_6)
{
 struct wait_item *VAR_7;

 if (VAR_4->client == ((void*)0)) {
  FUNC_2(VAR_4, "not able to lock");
  return (VAR_0);
 }

 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_1(VAR_5);

 if (VAR_6->locked) {
  VAR_7 = FUNC_3(1, sizeof *VAR_7);
  VAR_7->item = VAR_4;
  FUNC_0(&VAR_6->lockers, VAR_7, VAR_3);
  return (VAR_2);
 }
 VAR_6->locked = 1;

 return (VAR_1);
}
