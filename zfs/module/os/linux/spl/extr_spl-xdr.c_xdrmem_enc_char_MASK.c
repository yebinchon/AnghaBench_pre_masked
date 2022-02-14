
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_0, char *VAR_1)
{
 uint32_t VAR_2;

 FUNC_0(sizeof (char) != 1);
 VAR_2 = *((unsigned char *) VAR_1);

 return (FUNC_1(VAR_0, VAR_2));
}
