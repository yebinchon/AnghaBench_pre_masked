
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;

bool
FUNC_3(Oid VAR_3)
{
 static bool VAR_4 = 0;
 bool VAR_5 = 0;





 if (VAR_4)
  return 0;

 VAR_4 = 1;

 switch (VAR_2)
 {
  case 130:

  case 128:

  case 129:

   FUNC_2();
   break;
  case 131:






   if (VAR_1 == VAR_3 || !FUNC_0(VAR_3))
   {
    FUNC_2();
    if (131 != VAR_2)
    {




     VAR_5 = 1;
    }
   }
   break;
  default:
   FUNC_1(VAR_0, "unknown state: %d", VAR_2);
   break;
 }
 VAR_4 = 0;
 return VAR_5;
}
