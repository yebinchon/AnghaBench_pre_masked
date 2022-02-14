
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct grid_line {struct grid_cell_entry* extddata; int flags; struct grid_cell_entry* celldata; } ;
struct TYPE_2__ {size_t bg; } ;
struct grid_cell_entry {size_t offset; size_t bg; TYPE_1__ data; int flags; } ;
struct grid_cell {size_t offset; size_t bg; TYPE_1__ data; int flags; } ;
struct grid {struct grid_line* linedata; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct grid_line*,struct grid_cell_entry*,int ) ;
 int FUNC_1 (struct grid_cell_entry*,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct grid *VAR_6, u_int VAR_7, u_int VAR_8, u_int VAR_9)
{
 struct grid_line *VAR_10 = &VAR_6->linedata[VAR_8];
 struct grid_cell_entry *VAR_11 = &VAR_10->celldata[VAR_7];
 struct grid_cell *VAR_12;

 FUNC_1(VAR_11, &VAR_5, sizeof *VAR_11);
 if (VAR_9 != 8) {
  if (VAR_9 & VAR_1) {
   FUNC_0(VAR_10, VAR_11, VAR_11->flags);
   VAR_10->flags |= VAR_3;

   VAR_12 = &VAR_10->extddata[VAR_11->offset];
   FUNC_1(VAR_12, &VAR_4, sizeof *VAR_12);
   VAR_12->bg = VAR_9;
  } else {
   if (VAR_9 & VAR_0)
    VAR_11->flags |= VAR_2;
   VAR_11->data.bg = VAR_9;
  }
 }
}
