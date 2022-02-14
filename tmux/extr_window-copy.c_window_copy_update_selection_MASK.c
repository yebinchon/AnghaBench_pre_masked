
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct screen {int * sel; } ;
struct window_copy_mode_data {scalar_t__ lineflag; struct screen screen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct window_mode_entry*,int) ;

__attribute__((used)) static int
FUNC_1(struct window_mode_entry *VAR_1, int VAR_2)
{
 struct window_copy_mode_data *VAR_3 = VAR_1->data;
 struct screen *VAR_4 = &VAR_3->screen;

 if (VAR_4->sel == ((void*)0) && VAR_3->lineflag == VAR_0)
  return (0);
 return (FUNC_0(VAR_1, VAR_2));
}
