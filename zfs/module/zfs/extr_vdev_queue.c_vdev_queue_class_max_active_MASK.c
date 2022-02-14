
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_priority_t ;
typedef int spa_t ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(spa_t *VAR_7, zio_priority_t VAR_8)
{
 switch (VAR_8) {
 case 130:
  return (VAR_4);
 case 129:
  return (VAR_5);
 case 135:
  return (VAR_0);
 case 134:
  return (FUNC_1(VAR_7));
 case 131:
  return (VAR_3);
 case 132:
  return (VAR_2);
 case 133:
  return (VAR_1);
 case 128:
  return (VAR_6);
 default:
  FUNC_0("invalid priority %u", VAR_8);
  return (0);
 }
}
