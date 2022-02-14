
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,size_t*) ;

__attribute__((used)) static bool_t
FUNC_3(XDR *VAR_1, char **VAR_2, const uint_t VAR_3)
{
 size_t VAR_4 = FUNC_0(*VAR_2);
 uint_t VAR_5;

 if (VAR_4 > VAR_3)
  return (VAR_0);

 VAR_5 = VAR_4;

 if (!FUNC_2(VAR_1, &VAR_5))
  return (VAR_0);

 return (FUNC_1(VAR_1, *VAR_2, VAR_5));
}
