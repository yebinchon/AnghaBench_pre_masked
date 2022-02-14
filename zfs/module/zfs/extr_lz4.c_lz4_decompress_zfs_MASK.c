
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bufsiz ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,void*,int,size_t) ;

int
FUNC_2(void *VAR_0, void *VAR_1, size_t VAR_2,
    size_t VAR_3, int VAR_4)
{
 const char *VAR_5 = VAR_0;
 uint32_t VAR_6 = FUNC_0(VAR_5);


 if (VAR_6 + sizeof (VAR_6) > VAR_2)
  return (1);





 return (FUNC_1(&VAR_5[sizeof (VAR_6)],
     VAR_1, VAR_6, VAR_3) < 0);
}
