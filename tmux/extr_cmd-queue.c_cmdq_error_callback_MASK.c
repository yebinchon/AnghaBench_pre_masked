
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int FUNC_0 (struct cmdq_item*,char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_2(struct cmdq_item *VAR_1, void *VAR_2)
{
 char *VAR_3 = VAR_2;

 FUNC_0(VAR_1, "%s", VAR_3);
 FUNC_1(VAR_3);

 return (VAR_0);
}
