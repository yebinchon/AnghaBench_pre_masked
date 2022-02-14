
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_finder_line {char* text; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;

__attribute__((used)) static size_t
FUNC_2(struct file_finder_line *VAR_0, const char **VAR_1)
{
 const char *VAR_2 = VAR_0->text;
 const char *VAR_3;
 size_t VAR_4 = 0;

 for (; *VAR_2 && *VAR_1 && (VAR_3 = FUNC_1(VAR_2, *VAR_1)); VAR_1++) {
  VAR_2 = VAR_3 + FUNC_0(*VAR_1);
  VAR_4++;
 }

 return VAR_4;
}
