
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int dummy; } ;
struct window_pane {int dummy; } ;
struct session {int dummy; } ;
struct format_tree {int dummy; } ;
struct cmdq_item {int * client; } ;
struct client {int dummy; } ;


 int VAR_0 ;
 struct format_tree* FUNC_0 (int *,struct cmdq_item*,int ,int ) ;
 int FUNC_1 (struct format_tree*,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 char* FUNC_2 (struct format_tree*,char const*) ;
 int FUNC_3 (struct format_tree*) ;

char *
FUNC_4(struct cmdq_item *VAR_1, const char *VAR_2, struct client *VAR_3,
    struct session *VAR_4, struct winlink *VAR_5, struct window_pane *VAR_6)
{
 struct format_tree *VAR_7;
 char *VAR_8;

 if (VAR_1 != ((void*)0))
  VAR_7 = FUNC_0(VAR_1->client, VAR_1, VAR_0, 0);
 else
  VAR_7 = FUNC_0(((void*)0), VAR_1, VAR_0, 0);
 FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_8 = FUNC_2(VAR_7, VAR_2);
 FUNC_3(VAR_7);
 return (VAR_8);
}
