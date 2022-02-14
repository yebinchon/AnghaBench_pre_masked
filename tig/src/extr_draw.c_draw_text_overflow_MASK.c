
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct view*) ;
 scalar_t__ FUNC_2 (struct view*,int,char const*) ;
 scalar_t__ FUNC_3 (struct view*,int,char const*,int,int,int) ;
 size_t FUNC_4 (char const**,int,int ,int*,int,int*,int,int) ;

__attribute__((used)) static bool
FUNC_5(struct view *VAR_1, const char *VAR_2, enum line_type VAR_3,
     int VAR_4, int VAR_5)
{
 bool VAR_6 = VAR_4 > 0;

 if (VAR_6) {
  int VAR_7 = VAR_4 + VAR_5;
  int VAR_8 = FUNC_0(FUNC_1(VAR_1), VAR_7);
  const char *VAR_9 = VAR_2;
  int VAR_10 = 0;
  int VAR_11 = 0;
  size_t VAR_12 = FUNC_4(&VAR_9, -1, 0, &VAR_10, VAR_8, &VAR_11, 0, 1);

  if (FUNC_3(VAR_1, VAR_3, VAR_2, -1, VAR_10, VAR_8 < VAR_7))
   return 1;

  VAR_2 += VAR_12;
  VAR_3 = VAR_0;
 }

 if (*VAR_2 && FUNC_2(VAR_1, VAR_3, VAR_2))
  return 1;

 return FUNC_1(VAR_1) <= 0;
}
