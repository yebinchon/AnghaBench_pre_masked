
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;
typedef int abd_t ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct bio*,int *,unsigned int,size_t) ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct bio*,char*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_4(struct bio *VAR_0, abd_t *VAR_1, unsigned int VAR_2, size_t VAR_3)
{
 if (FUNC_0(VAR_1))
  return (FUNC_3(VAR_0, ((char *)FUNC_2(VAR_1)) + VAR_3, VAR_2));

 return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3));
}
