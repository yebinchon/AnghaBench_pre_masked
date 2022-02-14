
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grid_line {size_t extdsize; struct grid_cell* extddata; int flags; } ;
struct grid_cell_entry {int flags; size_t offset; } ;
struct grid_cell {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct grid_line*,struct grid_cell_entry*,int) ;
 int FUNC_2 (struct grid_cell*,struct grid_cell const*,int) ;

__attribute__((used)) static struct grid_cell *
FUNC_3(struct grid_line *VAR_3, struct grid_cell_entry *VAR_4,
    const struct grid_cell *VAR_5)
{
 struct grid_cell *VAR_6;
 int VAR_7 = (VAR_5->flags & ~VAR_0);

 if (~VAR_4->flags & VAR_1)
  FUNC_1(VAR_3, VAR_4, VAR_7);
 else if (VAR_4->offset >= VAR_3->extdsize)
  FUNC_0("offset too big");
 VAR_3->flags |= VAR_2;

 VAR_6 = &VAR_3->extddata[VAR_4->offset];
 FUNC_2(VAR_6, VAR_5, sizeof *VAR_6);
 VAR_6->flags = VAR_7;
 return (VAR_6);
}
