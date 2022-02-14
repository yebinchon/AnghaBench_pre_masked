
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_header {size_t orig_lineno; size_t lineno; size_t group; int id; } ;


 int VAR_0 ;
 int FUNC_0 (char const**,size_t*,int,size_t) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (char const*) ;

bool
FUNC_3(struct blame_header *VAR_1, const char *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = VAR_2 + VAR_0 - 2;

 if (FUNC_2(VAR_2) <= VAR_0 || VAR_4[1] != ' ')
  return 0;

 FUNC_1(VAR_1->id, VAR_2, VAR_0);

 if (!FUNC_0(&VAR_4, &VAR_1->orig_lineno, 1, 9999999) ||
     !FUNC_0(&VAR_4, &VAR_1->lineno, 1, VAR_3) ||
     !FUNC_0(&VAR_4, &VAR_1->group, 1, VAR_3 - VAR_1->lineno + 1))
  return 0;

 return 1;
}
