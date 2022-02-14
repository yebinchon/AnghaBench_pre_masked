
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_finder_line {char* text; } ;
struct file_finder {char** search; int win; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct file_finder *VAR_1, struct file_finder_line *VAR_2)
{
 const char **VAR_3 = VAR_1->search;
 const char *VAR_4 = VAR_2->text;
 const char *VAR_5;

 for (; *VAR_4 && VAR_3 && *VAR_3 && (VAR_5 = FUNC_0(VAR_4, *VAR_3)); VAR_3++) {
  if (VAR_4 < VAR_5)
   FUNC_1(VAR_1->win, VAR_4, VAR_5 - VAR_4);
  FUNC_4(VAR_1->win, VAR_0);
  FUNC_1(VAR_1->win, VAR_5, 1);
  FUNC_3(VAR_1->win, VAR_0);
  VAR_4 = VAR_5 + 1;
 }

 if (*VAR_4)
  FUNC_2(VAR_1->win, VAR_4);
}
