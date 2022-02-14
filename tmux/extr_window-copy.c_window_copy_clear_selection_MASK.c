
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; scalar_t__ cx; int backing; int lineflag; int cursordrag; int screen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_3 (struct window_mode_entry*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct window_mode_entry *VAR_2)
{
 struct window_copy_mode_data *VAR_3 = VAR_2->data;
 u_int VAR_4, VAR_5;

 FUNC_0(&VAR_3->screen);

 VAR_3->cursordrag = VAR_0;
 VAR_3->lineflag = VAR_1;

 VAR_5 = FUNC_1(VAR_3->backing) + VAR_3->cy - VAR_3->oy;
 VAR_4 = FUNC_2(VAR_2, VAR_5);
 if (VAR_3->cx > VAR_4)
  FUNC_3(VAR_2, VAR_4, VAR_3->cy);
}
