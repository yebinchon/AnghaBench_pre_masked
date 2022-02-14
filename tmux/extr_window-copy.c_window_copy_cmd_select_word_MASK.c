
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ rectflag; int lineflag; } ;
struct window_copy_cmd_state {struct session* s; struct window_mode_entry* wme; } ;
struct session {int options; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct window_mode_entry*,char const*) ;
 int FUNC_2 (struct window_mode_entry*,char const*,int ) ;
 int FUNC_3 (struct window_mode_entry*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_4(struct window_copy_cmd_state *VAR_2)
{
 struct window_mode_entry *VAR_3 = VAR_2->wme;
 struct session *VAR_4 = VAR_2->s;
 struct window_copy_mode_data *VAR_5 = VAR_3->data;
 const char *VAR_6;

 VAR_5->lineflag = VAR_0;
 VAR_5->rectflag = 0;

 VAR_6 = FUNC_0(VAR_4->options, "word-separators");
 FUNC_2(VAR_3, VAR_6, 0);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3, VAR_6);

 return (VAR_1);
}
