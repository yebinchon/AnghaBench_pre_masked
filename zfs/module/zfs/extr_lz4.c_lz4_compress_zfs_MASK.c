
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int bufsiz ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (void*,char*,size_t,size_t) ;

size_t
FUNC_3(void *VAR_0, void *VAR_1, size_t VAR_2,
    size_t VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 char *VAR_6 = VAR_1;

 FUNC_0(VAR_3 >= sizeof (VAR_5));

 VAR_5 = FUNC_2(VAR_0, &VAR_6[sizeof (VAR_5)], VAR_2,
     VAR_3 - sizeof (VAR_5));


 if (VAR_5 == 0)
  return (VAR_2);







 *(uint32_t *)VAR_6 = FUNC_1(VAR_5);

 return (VAR_5 + sizeof (VAR_5));
}
