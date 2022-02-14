
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct screen {int dummy; } ;
struct window_copy_mode_data {int oy; int rectflag; int backing; struct screen screen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen*) ;

__attribute__((used)) static int
FUNC_3(struct window_mode_entry *VAR_3, u_int *VAR_4,
    u_int *VAR_5)
{
 struct window_copy_mode_data *VAR_6 = VAR_3->data;
 struct screen *VAR_7 = &VAR_6->screen;
 u_int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = *VAR_4;
 VAR_9 = *VAR_5;

 VAR_10 = FUNC_0(VAR_6->backing) - VAR_6->oy;
 if (VAR_9 < VAR_10) {
  VAR_11 = VAR_0;
  if (!VAR_6->rectflag)
   VAR_8 = 0;
  VAR_9 = 0;
 } else if (VAR_9 > VAR_10 + FUNC_2(VAR_7) - 1) {
  VAR_11 = VAR_1;
  if (!VAR_6->rectflag)
   VAR_8 = FUNC_1(VAR_7) - 1;
  VAR_9 = FUNC_2(VAR_7) - 1;
 } else {
  VAR_11 = VAR_2;
  VAR_9 -= VAR_10;
 }

 *VAR_4 = VAR_8;
 *VAR_5 = VAR_9;
 return (VAR_11);
}
