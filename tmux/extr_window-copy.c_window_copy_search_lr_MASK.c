
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct grid {scalar_t__ sx; } ;


 int FUNC_0 (struct grid*,scalar_t__,scalar_t__,struct grid*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(struct grid *VAR_0,
    struct grid *VAR_1, u_int *VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5, int VAR_6)
{
 u_int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 for (VAR_7 = VAR_4; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_7 + VAR_1->sx > VAR_0->sx)
   break;
  for (VAR_8 = 0; VAR_8 < VAR_1->sx; VAR_8++) {
   VAR_9 = VAR_7 + VAR_8;
   VAR_10 = FUNC_0(VAR_0, VAR_9, VAR_3, VAR_1,
       VAR_8, VAR_6);
   if (!VAR_10)
    break;
  }
  if (VAR_8 == VAR_1->sx) {
   *VAR_2 = VAR_7;
   return (1);
  }
 }
 return (0);
}
