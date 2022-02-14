
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_longlong_t ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_1, u_longlong_t *VAR_2)
{
 FUNC_0(sizeof (u_longlong_t) != 8);

 if (!FUNC_1(VAR_1, *VAR_2 >> 32))
  return (VAR_0);

 return (FUNC_1(VAR_1, *VAR_2 & 0xffffffff));
}
