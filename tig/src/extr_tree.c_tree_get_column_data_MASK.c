
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column_data {int file_name; int * mode; int id; int * file_size; int * date; int author; } ;
struct view {int dummy; } ;
struct tree_entry {int name; int mode; int commit; int size; int time; int author; } ;
struct line {scalar_t__ type; struct tree_entry* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct view *VAR_2, const struct line *VAR_3, struct view_column_data *VAR_4)
{
 const struct tree_entry *VAR_5 = VAR_3->data;

 if (VAR_3->type == VAR_1)
  return 0;

 VAR_4->author = VAR_5->author;
 VAR_4->date = &VAR_5->time;
 if (VAR_3->type != VAR_0)
  VAR_4->file_size = &VAR_5->size;
 VAR_4->id = VAR_5->commit;
 VAR_4->mode = &VAR_5->mode;
 VAR_4->file_name = VAR_5->name;

 return 1;
}
