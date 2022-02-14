
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int consttype; int constvalue; int constisnull; } ;
typedef TYPE_1__ Const ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;

__attribute__((used)) static int64
FUNC_8(Const *VAR_2)
{
 FUNC_0(!VAR_2->constisnull);

 switch (VAR_2->consttype)
 {
  case 130:
   return (int64)(FUNC_1(VAR_2->constvalue));
  case 129:
   return (int64)(FUNC_2(VAR_2->constvalue));
  case 128:
   return FUNC_3(VAR_2->constvalue);
 }

 FUNC_4(VAR_1,
   (FUNC_5(VAR_0),
    FUNC_6("can only use const_datum_get_int with integer types")));

 FUNC_7();
}
