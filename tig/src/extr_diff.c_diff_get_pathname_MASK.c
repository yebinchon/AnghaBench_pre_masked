
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int dummy; } ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct line*) ;
 struct line* FUNC_3 (struct view*,struct line*,int ) ;
 struct line* FUNC_4 (struct view*,struct line*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char const*) ;

const char *
FUNC_8(struct view *VAR_3, struct line *VAR_4)
{
 struct line *VAR_5;
 const char *VAR_6;
 const char *VAR_7[] = { "diff --cc ", "diff --combined " };
 const char *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7); VAR_9++) {
  VAR_6 = FUNC_7(FUNC_2(VAR_5), VAR_7[VAR_9]);
  if (VAR_6)
   return VAR_6 + FUNC_6(VAR_7[VAR_9]);
 }

 VAR_5 = FUNC_3(VAR_3, VAR_5, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_8 = FUNC_2(VAR_5);
 if (!FUNC_5(VAR_8, "+++ "))
  VAR_8 += FUNC_1("+++ ");

 if (VAR_2)
  return VAR_8;


 if (!FUNC_5(VAR_8, "b/") || !FUNC_5(VAR_8, "w/"))
  VAR_8 += FUNC_1("b/");
 return VAR_8;
}
