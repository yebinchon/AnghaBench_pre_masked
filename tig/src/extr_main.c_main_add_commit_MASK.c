
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct main_state* private; } ;
struct main_state {scalar_t__* reflogmsg; } ;
struct line {scalar_t__ lineno; } ;
struct commit {int id; int title; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
typedef int buf ;


 int VAR_0 ;
 struct line* FUNC_0 (struct view*,struct commit**,int,size_t,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct commit*,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct view*,scalar_t__) ;
 int FUNC_4 (char*,int,char const*,size_t,int) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const*,size_t) ;
 int FUNC_7 (struct view*,struct line*) ;

__attribute__((used)) static struct commit *
FUNC_8(struct view *VAR_2, enum line_type VAR_3, struct commit *VAR_4,
  const char *VAR_5, bool VAR_6)
{
 struct main_state *VAR_7 = VAR_2->private;
 size_t VAR_8;
 struct commit *VAR_9;
 char VAR_10[VAR_0 / 2];
 struct line *VAR_11;



 FUNC_4(VAR_10, sizeof(VAR_10), VAR_5, FUNC_5(VAR_5), 1);
 VAR_5 = VAR_10;
 VAR_8 = FUNC_5(VAR_5);

 VAR_11 = FUNC_0(VAR_2, &VAR_9, VAR_3, VAR_8, VAR_6);
 if (!VAR_11)
  return ((void*)0);

 *VAR_9 = *VAR_4;
 FUNC_6(VAR_9->title, VAR_5, VAR_8);
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_7->reflogmsg[0] = 0;

 FUNC_7(VAR_2, VAR_11);

 if (VAR_1 && FUNC_1(VAR_9->id))
  FUNC_3(VAR_2, VAR_11->lineno + 1);

 return VAR_9;
}
