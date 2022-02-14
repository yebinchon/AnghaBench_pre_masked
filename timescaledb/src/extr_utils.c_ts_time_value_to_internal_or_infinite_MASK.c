
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int TimevalInfinity ;
typedef int TimestampTz ;
typedef int Timestamp ;
typedef int Oid ;
typedef int Datum ;
typedef int DateADT ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,int) ;

int64
FUNC_8(Datum VAR_4, Oid VAR_5,
           TimevalInfinity *VAR_6)
{
 switch (VAR_5)
 {
  case 129:
  {
   Timestamp VAR_7 = FUNC_3(VAR_4);
   if (FUNC_6(VAR_7))
   {
    if (FUNC_5(VAR_7))
    {
     if (VAR_6 != ((void*)0))
      *VAR_6 = VAR_2;
     return VAR_1;
    }
    else
    {
     if (VAR_6 != ((void*)0))
      *VAR_6 = VAR_3;
     return VAR_0;
    }
   }

   return FUNC_7(VAR_4, VAR_5);
  }
  case 128:
  {
   TimestampTz VAR_8 = FUNC_4(VAR_4);
   if (FUNC_6(VAR_8))
   {
    if (FUNC_5(VAR_8))
    {
     if (VAR_6 != ((void*)0))
      *VAR_6 = VAR_2;
     return VAR_1;
    }
    else
    {
     if (VAR_6 != ((void*)0))
      *VAR_6 = VAR_3;
     return VAR_0;
    }
   }

   return FUNC_7(VAR_4, VAR_5);
  }
  case 130:
  {
   DateADT VAR_9 = FUNC_2(VAR_4);
   if (FUNC_1(VAR_9))
   {
    if (FUNC_0(VAR_9))
    {
     if (VAR_6 != ((void*)0))
      *VAR_6 = VAR_2;
     return VAR_1;
    }
    else
    {
     if (VAR_6 != ((void*)0))
      *VAR_6 = VAR_3;
     return VAR_0;
    }
   }

   return FUNC_7(VAR_4, VAR_5);
  }
 }

 return FUNC_7(VAR_4, VAR_5);
}
