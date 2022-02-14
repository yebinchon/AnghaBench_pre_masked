
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view_column_data {int text; int commit_title; int * date; int file_name; int author; int id; } ;
struct view {int dummy; } ;
struct line {struct blame* data; } ;
struct blame {int text; TYPE_1__* commit; } ;
struct TYPE_2__ {int title; int time; int filename; int author; int id; } ;



bool
FUNC_0(struct view *VAR_0, const struct line *VAR_1, struct view_column_data *VAR_2)
{
 struct blame *VAR_3 = VAR_1->data;

 if (VAR_3->commit) {
  VAR_2->id = VAR_3->commit->id;
  VAR_2->author = VAR_3->commit->author;
  VAR_2->file_name = VAR_3->commit->filename;
  VAR_2->date = &VAR_3->commit->time;
  VAR_2->commit_title = VAR_3->commit->title;
 }

 VAR_2->text = VAR_3->text;

 return 1;
}
