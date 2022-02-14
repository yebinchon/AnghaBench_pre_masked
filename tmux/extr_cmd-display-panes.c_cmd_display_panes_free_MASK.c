
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_display_panes_data {struct cmd_display_panes_data* command; int * item; } ;
struct client {struct cmd_display_panes_data* overlay_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cmd_display_panes_data*) ;

__attribute__((used)) static void
FUNC_2(struct client *VAR_0)
{
 struct cmd_display_panes_data *VAR_1 = VAR_0->overlay_data;

 if (VAR_1->item != ((void*)0))
  FUNC_0(VAR_1->item);
 FUNC_1(VAR_1->command);
 FUNC_1(VAR_1);
}
