
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct grid_line {int extdsize; size_t cellsize; struct grid_cell* extddata; struct grid_cell_entry* celldata; } ;
struct grid_cell_entry {int flags; size_t offset; } ;
struct grid_cell {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct grid_cell*) ;
 int FUNC_1 (struct grid_cell*,struct grid_cell*,int) ;
 struct grid_cell* FUNC_2 (int *,int,int) ;

__attribute__((used)) static void
FUNC_3(struct grid_line *VAR_1)
{
 int VAR_2 = 0;
 struct grid_cell *VAR_3;
 struct grid_cell_entry *VAR_4;
 struct grid_cell *VAR_5;
 u_int VAR_6, VAR_7;

 if (VAR_1->extdsize == 0)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_1->cellsize; VAR_6++) {
  VAR_4 = &VAR_1->celldata[VAR_6];
  if (VAR_4->flags & VAR_0)
   VAR_2++;
 }

 if (VAR_2 == 0) {
  FUNC_0(VAR_1->extddata);
  VAR_1->extddata = ((void*)0);
  VAR_1->extdsize = 0;
  return;
 }
 VAR_3 = FUNC_2(((void*)0), VAR_2, sizeof *VAR_1->extddata);

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1->cellsize; VAR_6++) {
  VAR_4 = &VAR_1->celldata[VAR_6];
  if (VAR_4->flags & VAR_0) {
   VAR_5 = &VAR_1->extddata[VAR_4->offset];
   FUNC_1(&VAR_3[VAR_7], VAR_5, sizeof *VAR_5);
   VAR_4->offset = VAR_7++;
  }
 }

 FUNC_0(VAR_1->extddata);
 VAR_1->extddata = VAR_3;
 VAR_1->extdsize = VAR_2;
}
