
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char type_align; int type_len; int type_storage; scalar_t__ type_by_val; } ;
typedef int Size ;
typedef int Pointer ;
typedef TYPE_1__ DatumSerializer ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (char*,char,int*) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (char*,int ,int) ;
 int FUNC_16 (char*,int ,int) ;
 int FUNC_17 (int ) ;

char *
FUNC_18(DatumSerializer *VAR_1, char *VAR_2, Size *VAR_3, Datum VAR_4)
{
 Size VAR_5;

 if (VAR_1->type_by_val)
 {

  VAR_2 = FUNC_12(VAR_2, VAR_1->type_align, VAR_3);
  VAR_5 = VAR_1->type_len;
  FUNC_13(VAR_5, *VAR_3);
  FUNC_16(VAR_2, VAR_4, VAR_5);
 }
 else if (VAR_1->type_len == -1)
 {

  Pointer VAR_6 = FUNC_2(VAR_4);

  if (FUNC_7(VAR_6))
  {




   FUNC_14(VAR_0, "datum should be detoasted before passed to datum_to_bytes_and_advance");
   VAR_5 = 0;
  }
  else if (FUNC_8(VAR_6))
  {

   VAR_5 = FUNC_11(VAR_6);
   FUNC_13(VAR_5, *VAR_3);
   FUNC_15(VAR_2, VAR_6, VAR_5);
  }
  else if (FUNC_4(VAR_1->type_len, VAR_1->type_storage) &&
     FUNC_5(VAR_6))
  {

   VAR_5 = FUNC_6(VAR_6);
   FUNC_13(VAR_5, *VAR_3);
   FUNC_3(VAR_2, VAR_5);
   FUNC_15(VAR_2 + 1, FUNC_9(VAR_6), VAR_5 - 1);
  }
  else
  {

   VAR_2 = FUNC_12(VAR_2, VAR_1->type_align, VAR_3);
   VAR_5 = FUNC_10(VAR_6);
   FUNC_13(VAR_5, *VAR_3);
   FUNC_15(VAR_2, VAR_6, VAR_5);
  }
 }
 else if (VAR_1->type_len == -2)
 {

  FUNC_0(VAR_1->type_align == 'c');
  VAR_5 = FUNC_17(FUNC_1(VAR_4)) + 1;
  FUNC_13(VAR_5, *VAR_3);
  FUNC_15(VAR_2, FUNC_2(VAR_4), VAR_5);
 }
 else
 {

  VAR_2 = FUNC_12(VAR_2, VAR_1->type_align, VAR_3);
  FUNC_0(VAR_1->type_len > 0);
  VAR_5 = VAR_1->type_len;
  FUNC_13(VAR_5, *VAR_3);
  FUNC_15(VAR_2, FUNC_2(VAR_4), VAR_5);
 }

 VAR_2 += VAR_5;
 *VAR_3 = *VAR_3 - VAR_5;

 return VAR_2;
}
