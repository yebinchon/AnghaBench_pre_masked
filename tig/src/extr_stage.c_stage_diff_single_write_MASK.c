
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int type; } ;
struct io {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct line*) ;
 int FUNC_1 (struct io*,char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (struct line*,struct line*) ;

__attribute__((used)) static bool
FUNC_3(struct io *VAR_2, bool VAR_3,
   struct line *VAR_4, struct line *VAR_5, struct line *VAR_6)
{
 enum line_type VAR_7 = VAR_3 ? VAR_0 : VAR_1;
 enum line_type VAR_8 = VAR_3 ? VAR_1 : VAR_0;

 while (VAR_4 < VAR_6) {
  const char *VAR_9 = "";
  const char *VAR_10 = FUNC_0(VAR_4);

  if (VAR_4 == VAR_5) {


  } else if (VAR_4->type == VAR_7) {
   VAR_9 = " ";
   VAR_10 = VAR_10 + 1;

  } else if (VAR_4->type == VAR_8) {
   VAR_10 = ((void*)0);
  }

  if (VAR_10 && !FUNC_1(VAR_2, "%s%s\n", VAR_9, VAR_10))
   return 0;

  VAR_4++;
  if (FUNC_2(VAR_4, VAR_6))
   break;
 }

 return 1;
}
