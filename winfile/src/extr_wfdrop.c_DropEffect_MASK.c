
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int POINTL ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static DWORD FUNC_0(DWORD VAR_4, POINTL VAR_5, DWORD VAR_6)
{
 DWORD VAR_7 = 0;




 if(VAR_4 & VAR_2)
 {
  VAR_7 = VAR_6 & VAR_0;
 }
 else if(VAR_4 & VAR_3)
 {
  VAR_7 = VAR_6 & VAR_1;
 }



 if(VAR_7 == 0)
 {
  if(VAR_6 & VAR_0) VAR_7 = VAR_0;
  if(VAR_6 & VAR_1) VAR_7 = VAR_1;
 }

 return VAR_7;
}
