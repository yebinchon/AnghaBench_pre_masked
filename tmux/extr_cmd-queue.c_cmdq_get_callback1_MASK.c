
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {void* data; int cb; scalar_t__ flags; scalar_t__ group; int type; int name; } ;
typedef int cmdq_cb ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,struct cmdq_item*) ;
 struct cmdq_item* FUNC_1 (int,int) ;

struct cmdq_item *
FUNC_2(const char *VAR_1, cmdq_cb VAR_2, void *VAR_3)
{
 struct cmdq_item *VAR_4;

 VAR_4 = FUNC_1(1, sizeof *VAR_4);
 FUNC_0(&VAR_4->name, "[%s/%p]", VAR_1, VAR_4);
 VAR_4->type = VAR_0;

 VAR_4->group = 0;
 VAR_4->flags = 0;

 VAR_4->cb = VAR_2;
 VAR_4->data = VAR_3;

 return (VAR_4);
}
