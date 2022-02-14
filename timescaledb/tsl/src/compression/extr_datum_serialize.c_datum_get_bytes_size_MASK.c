
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type_len; int type_align; int type_storage; } ;
typedef int Size ;
typedef int Pointer ;
typedef TYPE_1__ DatumSerializer ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,char*) ;

Size
FUNC_8(DatumSerializer *VAR_1, Size VAR_2, Datum VAR_3)
{
 Size VAR_4 = VAR_2;

 if (VAR_1->type_len == -1)
 {

  Pointer VAR_5 = FUNC_0(VAR_3);

  if (FUNC_4(VAR_5))
  {




   FUNC_7(VAR_0, "datum should be detoasted before passed to datum_get_bytes_size");
  }
 }

 if (FUNC_1(VAR_1->type_len, VAR_1->type_storage) &&
  FUNC_2(FUNC_0(VAR_3)))
 {





  VAR_4 += FUNC_3(FUNC_0(VAR_3));
 }
 else
 {
  VAR_4 =
   FUNC_6(VAR_4, VAR_1->type_align, VAR_1->type_len, VAR_3);
  VAR_4 = FUNC_5(VAR_4, VAR_1->type_len, VAR_3);
 }

 return VAR_4;
}
