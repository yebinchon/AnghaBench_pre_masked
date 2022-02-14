
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; scalar_t__ lineflag; scalar_t__ endsely; int cx; int screen; int backing; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_3 (struct window_mode_entry*) ;
 int FUNC_4 (struct window_mode_entry*,int) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_5(struct window_copy_cmd_state *VAR_2)
{
 struct window_mode_entry *VAR_3 = VAR_2->wme;
 struct window_copy_mode_data *VAR_4 = VAR_3->data;
 u_int VAR_5;

 VAR_5 = FUNC_0(VAR_4->backing) + VAR_4->cy - VAR_4->oy;
 if (VAR_4->lineflag == VAR_0 && VAR_5 == VAR_4->endsely)
  FUNC_3(VAR_3);

 VAR_4->cy = FUNC_1(&VAR_4->screen) - 1;
 VAR_4->cx = FUNC_2(VAR_3, VAR_4->cy);
 VAR_4->oy = 0;

 FUNC_4(VAR_3, 1);
 return (VAR_1);
}
