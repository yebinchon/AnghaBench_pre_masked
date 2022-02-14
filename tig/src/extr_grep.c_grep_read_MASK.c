
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__* ref; int lines; struct grep_state* private; } ;
struct line {int dummy; } ;
struct grep_state {char const* last_file; int no_file_group; } ;
struct grep_line {char const* file; int text; int lineno; } ;
struct buffer {char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct line* FUNC_0 (struct view*,struct grep_line**,int ,size_t,int) ;
 int * FUNC_1 (struct view*,int ) ;
 int FUNC_2 (struct view*,char const*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (struct buffer*,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,size_t) ;
 int FUNC_10 (struct view*,struct line*) ;

__attribute__((used)) static bool
FUNC_11(struct view *VAR_3, struct buffer *VAR_4, bool VAR_5)
{
 struct grep_state *VAR_6 = VAR_3->private;
 struct grep_line *VAR_7;
 char *VAR_8, *VAR_9;
 struct line *VAR_10;
 const char *VAR_11;
 size_t VAR_12;

 if (!VAR_4) {
  VAR_6->last_file = ((void*)0);
  if (!VAR_3->lines) {
   VAR_3->ref[0] = 0;
   FUNC_6("No matches found");
  }
  return 1;
 }

 if (!FUNC_7(VAR_4->data, "--"))
  return FUNC_1(VAR_3, VAR_1) != ((void*)0);

 VAR_8 = FUNC_5(VAR_4, VAR_4->data, 0);
 VAR_9 = FUNC_5(VAR_4, VAR_8, 0);







 if (!VAR_8 || !VAR_9)
  return 1;

 VAR_12 = FUNC_8(VAR_9);

 VAR_11 = FUNC_4(VAR_4->data);
 if (!VAR_11)
  return 0;

 if (!VAR_6->no_file_group && VAR_11 != VAR_6->last_file &&
     !FUNC_2(VAR_3, VAR_11, VAR_2))
  return 0;

 VAR_10 = FUNC_0(VAR_3, &VAR_7, VAR_0, VAR_12, 0);
 if (!VAR_10)
  return 0;

 VAR_7->file = VAR_11;
 VAR_7->lineno = FUNC_3(VAR_8);
 if (VAR_7->lineno > 0)
  VAR_7->lineno -= 1;
 FUNC_9(VAR_7->text, VAR_9, VAR_12 + 1);
 FUNC_10(VAR_3, VAR_10);

 VAR_6->last_file = VAR_11;

 return 1;
}
