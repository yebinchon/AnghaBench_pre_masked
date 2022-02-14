
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_longlong_t ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, u_longlong_t *VAR_3)
{
 uint32_t VAR_4, VAR_5;

 FUNC_0(sizeof (u_longlong_t) != 8);

 if (!FUNC_1(VAR_2, &VAR_5))
  return (VAR_0);
 if (!FUNC_1(VAR_2, &VAR_4))
  return (VAR_0);

 *VAR_3 = ((u_longlong_t)VAR_5 << 32) | VAR_4;

 return (VAR_1);
}
