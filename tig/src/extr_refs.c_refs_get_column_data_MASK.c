
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view_column_data {int commit_title; TYPE_1__* ref; int id; int * date; int author; } ;
struct view {int dummy; } ;
struct reference {int title; TYPE_1__* ref; int time; int author; } ;
struct line {struct reference* data; } ;
struct TYPE_2__ {int id; } ;



__attribute__((used)) static bool
FUNC_0(struct view *VAR_0, const struct line *VAR_1, struct view_column_data *VAR_2)
{
 const struct reference *VAR_3 = VAR_1->data;

 VAR_2->author = VAR_3->author;
 VAR_2->date = &VAR_3->time;
 VAR_2->id = VAR_3->ref->id;
 VAR_2->ref = VAR_3->ref;
 VAR_2->commit_title = VAR_3->title;

 return 1;
}
