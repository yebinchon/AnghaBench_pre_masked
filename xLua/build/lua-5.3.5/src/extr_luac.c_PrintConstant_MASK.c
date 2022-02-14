
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * k; } ;
typedef int TValue ;
typedef TYPE_1__ Proto ;


 char* VAR_0 ;
 char* VAR_1 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int ) ;
 size_t FUNC_6 (char*,char*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;

__attribute__((used)) static void FUNC_9(const Proto* VAR_2, int VAR_3)
{
 const TValue* VAR_4=&VAR_2->k[VAR_3];
 switch (FUNC_8(VAR_4))
 {
  case 131:
 FUNC_4("nil");
 break;
  case 133:
 FUNC_4(FUNC_1(VAR_4) ? "true" : "false");
 break;
  case 130:
 {
 char VAR_5[100];
 FUNC_5(VAR_5,VAR_1,FUNC_2(VAR_4));
 FUNC_4("%s",VAR_5);
 if (VAR_5[FUNC_6(VAR_5,"-0123456789")]=='\0') FUNC_4(".0");
 break;
 }
  case 129:
 FUNC_4(VAR_0,FUNC_3(VAR_4));
 break;
  case 128: case 132:
 FUNC_0(FUNC_7(VAR_4));
 break;
  default:
 FUNC_4("? type=%d",FUNC_8(VAR_4));
 break;
 }
}
