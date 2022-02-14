
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef enum exc_class { ____Placeholder_exc_class } exc_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int,char*) ;



 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum exc_class
FUNC_1(uint64_t VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_0(VAR_5 & VAR_4, ("intinfo must be valid: %#llx", VAR_5));
 VAR_6 = VAR_5 & VAR_3;
 VAR_7 = VAR_5 & 0xff;


 switch (VAR_6) {
 case 130:
 case 128:
 case 129:
  return (VAR_0);
 default:
  break;
 }

 switch (VAR_7) {
 case 134:
 case 131:
  return (VAR_2);
 case 137:
 case 132:
 case 135:
 case 133:
 case 136:
  return (VAR_1);
 default:
  return (VAR_0);
 }
}
