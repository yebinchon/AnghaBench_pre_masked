
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_info {int fg; int bg; int attr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const**,int*,char*) ;
 scalar_t__ FUNC_1 (int*,char const*) ;
 scalar_t__ FUNC_2 (int*,char const*) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static struct line_info *
FUNC_4(struct line_info *VAR_2, char *VAR_3)
{
 const char *VAR_4[VAR_1];
 int VAR_5 = 0;
 bool VAR_6 = 1;
 int VAR_7;

 if (!FUNC_0(VAR_4, &VAR_5, VAR_3))
  return ((void*)0);

 VAR_2->fg = VAR_0;
 VAR_2->bg = VAR_0;
 VAR_2->attr = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  int VAR_8 = 0;

  if (!FUNC_3(VAR_4[VAR_7], "ul", 2)) {
   VAR_4[VAR_7] = "underline";
  }
  if (FUNC_1(&VAR_8, VAR_4[VAR_7])) {
   VAR_2->attr |= VAR_8;

  } else if (FUNC_2(&VAR_8, VAR_4[VAR_7])) {
   if (VAR_6)
    VAR_2->fg = VAR_8;
   else
    VAR_2->bg = VAR_8;
   VAR_6 = 0;
  }
 }
 return VAR_2;
}
