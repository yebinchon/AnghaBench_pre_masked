
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int fg; int bg; int data; int attr; } ;
struct grid_cell_entry {int flags; TYPE_1__ data; } ;
struct grid_cell {int flags; int fg; int bg; int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct grid_cell_entry *VAR_4, const struct grid_cell *VAR_5,
    u_char VAR_6)
{
 VAR_4->flags = (VAR_5->flags & ~VAR_2);

 VAR_4->data.fg = VAR_5->fg & 0xff;
 if (VAR_5->fg & VAR_0)
  VAR_4->flags |= VAR_3;

 VAR_4->data.bg = VAR_5->bg & 0xff;
 if (VAR_5->bg & VAR_0)
  VAR_4->flags |= VAR_1;

 VAR_4->data.attr = VAR_5->attr;
 VAR_4->data.data = VAR_6;
}
