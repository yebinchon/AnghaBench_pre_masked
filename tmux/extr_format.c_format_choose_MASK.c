
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_tree {int dummy; } ;


 char* FUNC_0 (struct format_tree*,char*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static int
FUNC_5(struct format_tree *VAR_0, const char *VAR_1, char **VAR_2, char **VAR_3,
    int VAR_4)
{
 const char *VAR_5;
 char *VAR_6, *VAR_7;

 VAR_5 = FUNC_1(VAR_1, ",");
 if (VAR_5 == ((void*)0))
  return (-1);
 VAR_6 = FUNC_4(VAR_1, VAR_5 - VAR_1);
 VAR_7 = FUNC_3(VAR_5 + 1);

 if (VAR_4) {
  *VAR_2 = FUNC_0(VAR_0, VAR_6);
  FUNC_2(VAR_6);
  *VAR_3 = FUNC_0(VAR_0, VAR_7);
  FUNC_2(VAR_7);
 } else {
  *VAR_2 = VAR_6;
  *VAR_3 = VAR_7;
 }
 return (0);
}
