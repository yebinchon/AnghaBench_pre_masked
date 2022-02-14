
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int cookie; } ;
struct seg_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,struct seg_desc*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

int
FUNC_3(struct vm *VAR_2, int VAR_3, int VAR_4,
  struct seg_desc *VAR_5)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (VAR_0);

 if (!FUNC_2(VAR_4) && !FUNC_1(VAR_4))
  return (VAR_0);

 return (FUNC_0(VAR_2->cookie, VAR_3, VAR_4, VAR_5));
}
