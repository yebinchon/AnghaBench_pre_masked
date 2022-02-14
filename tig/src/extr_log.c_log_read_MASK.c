
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct log_state* private; } ;
struct log_state {int graph_indent; int commit_title_read; int after_commit_header; int reading_diff_stat; } ;
struct line {int graph_indent; } ;
struct buffer {char* data; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int VAR_0 ;
 struct line* FUNC_0 (struct view*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct view*,char*,int,struct line**) ;
 size_t FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static bool
FUNC_6(struct view *VAR_1, struct buffer *VAR_2, bool VAR_3)
{
 struct line *VAR_4 = ((void*)0);
 enum line_type VAR_5;
 struct log_state *VAR_6 = VAR_1->private;
 size_t VAR_7;
 char *VAR_8;
 char *VAR_9;

 if (!VAR_2)
  return 1;

 VAR_9 = VAR_2->data;
 VAR_8 = FUNC_5(VAR_9, "commit ");
 if (VAR_8 && FUNC_1(VAR_9) == VAR_8 - VAR_9)
  VAR_6->graph_indent = VAR_8 - VAR_9;

 VAR_5 = FUNC_2(VAR_9 + VAR_6->graph_indent);
 VAR_7 = FUNC_4(VAR_9 + VAR_6->graph_indent);

 if (VAR_5 == VAR_0)
  VAR_6->commit_title_read = 1;
 else if (VAR_6->commit_title_read && VAR_7 < 1) {
  VAR_6->commit_title_read = 0;
  VAR_6->after_commit_header = 1;
 } else if (VAR_6->after_commit_header && VAR_7 < 1) {
  VAR_6->after_commit_header = 0;
  VAR_6->reading_diff_stat = 1;
 } else if (VAR_6->reading_diff_stat) {
  VAR_4 = FUNC_0(VAR_1, VAR_9, VAR_6->graph_indent);
  if (VAR_4) {
   if (VAR_6->graph_indent)
    VAR_4->graph_indent = 1;
   return 1;
  }
  VAR_6->reading_diff_stat = 0;
 }

 if (!FUNC_3(VAR_1, VAR_9, VAR_5, &VAR_4))
  return 0;
 if (VAR_4 && VAR_6->graph_indent)
  VAR_4->graph_indent = 1;
 return 1;
}
