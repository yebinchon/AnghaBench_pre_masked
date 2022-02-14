
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {unsigned int ngroups; } ;
typedef int kgid_t ;


 int FUNC_0 (struct group_info const*,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const struct group_info *VAR_0, kgid_t VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 int VAR_5;

 if (!VAR_0)
  return (0);

 VAR_2 = 0;
 VAR_3 = VAR_0->ngroups;
 while (VAR_2 < VAR_3) {
  VAR_4 = (VAR_2 + VAR_3) / 2;
  VAR_5 = FUNC_1(VAR_1) -
      FUNC_1(FUNC_0(VAR_0, VAR_4));

  if (VAR_5 > 0)
   VAR_2 = VAR_4 + 1;
  else if (VAR_5 < 0)
   VAR_3 = VAR_4;
  else
   return (1);
 }
 return (0);
}
