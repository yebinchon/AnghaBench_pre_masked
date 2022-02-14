
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {struct client* client; } ;
struct client {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int FUNC_0 (struct cmdq_item*,char*,int) ;
 int FUNC_1 (struct client*,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_3(struct cmdq_item *VAR_1, void *VAR_2)
{
 struct client *VAR_3 = VAR_1->client;
 char *VAR_4 = VAR_2;

 FUNC_0(VAR_1, "begin", 1);
 FUNC_1(VAR_3, "parse error: %s", VAR_4);
 FUNC_0(VAR_1, "error", 1);

 FUNC_2(VAR_4);
 return (VAR_0);
}
