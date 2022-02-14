
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int (* cb ) (struct cmdq_item*,int ) ;int data; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int FUNC_0 (struct cmdq_item*,int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_1(struct cmdq_item *VAR_0)
{
 return (VAR_0->cb(VAR_0, VAR_0->data));
}
