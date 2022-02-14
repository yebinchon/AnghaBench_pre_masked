
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int CmdType ;
typedef int CatalogTable ;
typedef int Catalog ;



 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(Oid VAR_4, CmdType VAR_5)
{
 Catalog *VAR_6 = FUNC_2();
 CatalogTable VAR_7 = FUNC_1(VAR_6, VAR_4);
 Oid VAR_8;

 switch (VAR_7)
 {
  case 133:
  case 132:
  case 129:
   if (VAR_5 == VAR_3 || VAR_5 == VAR_2)
   {
    VAR_8 = FUNC_3(VAR_6, VAR_1);
    FUNC_0(VAR_8);
   }
   break;
  case 128:
  case 130:
   VAR_8 = FUNC_3(VAR_6, VAR_1);
   FUNC_0(VAR_8);
   break;
  case 134:
   VAR_8 = FUNC_3(VAR_6, VAR_0);
   FUNC_0(VAR_8);
   break;
  case 131:
  default:
   break;
 }
}
