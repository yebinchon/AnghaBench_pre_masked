
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, unsigned short *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(sizeof (unsigned short) != 2);

 if (!FUNC_1(VAR_2, &VAR_4))
  return (VAR_0);





 if (VAR_4 > 0xffff)
  return (VAR_0);

 *VAR_3 = VAR_4;

 return (VAR_1);
}
