
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_priority_t ;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_1(zio_priority_t VAR_8)
{
 switch (VAR_8) {
 case 130:
  return (VAR_5);
 case 129:
  return (VAR_6);
 case 135:
  return (VAR_0);
 case 134:
  return (VAR_1);
 case 131:
  return (VAR_4);
 case 132:
  return (VAR_3);
 case 133:
  return (VAR_2);
 case 128:
  return (VAR_7);
 default:
  FUNC_0("invalid priority %u", VAR_8);
  return (0);
 }
}
