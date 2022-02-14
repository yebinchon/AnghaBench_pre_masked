
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct grid_line {size_t extdsize; int * extddata; struct grid_cell_entry* celldata; } ;
struct TYPE_2__ {int data; int bg; int fg; int attr; } ;
struct grid_cell_entry {int flags; size_t offset; TYPE_1__ data; } ;
struct grid_cell {int flags; int data; scalar_t__ us; int bg; int fg; int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct grid_cell*,int *,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct grid_line *VAR_5, u_int VAR_6, struct grid_cell *VAR_7)
{
 struct grid_cell_entry *VAR_8 = &VAR_5->celldata[VAR_6];

 if (VAR_8->flags & VAR_2) {
  if (VAR_8->offset >= VAR_5->extdsize)
   FUNC_0(VAR_7, &VAR_4, sizeof *VAR_7);
  else
   FUNC_0(VAR_7, &VAR_5->extddata[VAR_8->offset], sizeof *VAR_7);
  return;
 }

 VAR_7->flags = VAR_8->flags & ~(VAR_3|VAR_1);
 VAR_7->attr = VAR_8->data.attr;
 VAR_7->fg = VAR_8->data.fg;
 if (VAR_8->flags & VAR_3)
  VAR_7->fg |= VAR_0;
 VAR_7->bg = VAR_8->data.bg;
 if (VAR_8->flags & VAR_1)
  VAR_7->bg |= VAR_0;
 VAR_7->us = 0;
 FUNC_1(&VAR_7->data, VAR_8->data.data);
}
