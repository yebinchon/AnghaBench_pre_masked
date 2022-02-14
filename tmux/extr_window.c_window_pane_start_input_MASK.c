
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane_input_data {int wp; struct cmdq_item* item; } ;
struct window_pane {int flags; int id; } ;
struct cmdq_item {struct client* client; } ;
struct client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct client*,int ,struct window_pane_input_data*,char**) ;
 int VAR_1 ;
 struct window_pane_input_data* FUNC_1 (int) ;
 char* FUNC_2 (char*) ;

int
FUNC_3(struct window_pane *VAR_2, struct cmdq_item *VAR_3,
    char **VAR_4)
{
 struct client *VAR_5 = VAR_3->client;
 struct window_pane_input_data *VAR_6;

 if (~VAR_2->flags & VAR_0) {
  *VAR_4 = FUNC_2("pane is not empty");
  return (-1);
 }

 VAR_6 = FUNC_1(sizeof *VAR_6);
 VAR_6->item = VAR_3;
 VAR_6->wp = VAR_2->id;

 return (FUNC_0(VAR_5, VAR_1, VAR_6,
     VAR_4));
}
