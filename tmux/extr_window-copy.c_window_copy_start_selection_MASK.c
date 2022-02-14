
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int cursordrag; scalar_t__ sely; scalar_t__ endsely; int selx; int endselx; scalar_t__ oy; scalar_t__ cy; int backing; int cx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_2(struct window_mode_entry *VAR_1)
{
 struct window_copy_mode_data *VAR_2 = VAR_1->data;

 VAR_2->selx = VAR_2->cx;
 VAR_2->sely = FUNC_0(VAR_2->backing) + VAR_2->cy - VAR_2->oy;

 VAR_2->endselx = VAR_2->selx;
 VAR_2->endsely = VAR_2->sely;

 VAR_2->cursordrag = VAR_0;

 FUNC_1(VAR_1, 1);
}
