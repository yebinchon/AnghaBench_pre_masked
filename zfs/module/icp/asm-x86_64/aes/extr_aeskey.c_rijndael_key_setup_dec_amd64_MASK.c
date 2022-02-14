
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (unsigned char*,int *) ;

int
FUNC_3(uint32_t VAR_0[], const uint32_t VAR_1[],
    int VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_0((unsigned char *)&VAR_1[0], VAR_0);
  return (10);
 case 192:
  FUNC_1((unsigned char *)&VAR_1[0], VAR_0);
  return (12);
 case 256:
  FUNC_2((unsigned char *)&VAR_1[0], VAR_0);
  return (14);
 default:
  break;
 }

 return (0);
}
