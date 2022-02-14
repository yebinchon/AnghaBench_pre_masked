
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_0(uint64_t VAR_7)
{
 int VAR_8, VAR_9;


 if (VAR_7 & VAR_3)
  return (VAR_5);


 VAR_8 = VAR_7 & VAR_0 ? 1 : 0;
 VAR_9 = VAR_7 & VAR_1 ? 1 : 0;
 if ((VAR_8 | VAR_9) == 0)
  return (VAR_5);






 if ((VAR_7 & VAR_2) == 0 ||
     (VAR_7 & VAR_4) == 0) {
  return (VAR_5);
 }

 return (VAR_6);
}
