
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int type_mod; int type_io_param; int recv_flinfo; } ;
struct TYPE_6__ {char* data; int maxlen; int len; } ;
typedef TYPE_1__ StringInfoData ;
typedef int StringInfo ;
typedef TYPE_2__ DatumDeserializer ;
typedef int Datum ;
typedef int BinaryStringEncoding ;



 int FUNC_0 (int *,char*,int ,int ) ;

 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;

 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;

Datum
FUNC_7(DatumDeserializer *VAR_0, BinaryStringEncoding VAR_1,
        StringInfo VAR_2)
{
 Datum VAR_3;
 bool VAR_4 = 0;

 switch (VAR_1)
 {
  case 130:
   VAR_4 = 1;
   break;
  case 128:
   VAR_4 = 0;
   break;
  case 129:
   VAR_4 = FUNC_3(VAR_2) != 0;
   break;
 }

 FUNC_2(VAR_0, VAR_4);

 if (VAR_4)
 {
  uint32 VAR_5 = FUNC_5(VAR_2);
  const char *VAR_6 = FUNC_4(VAR_2, VAR_5);
  StringInfoData VAR_7 = {
   .data = (char *) VAR_6,
   .len = VAR_5,
   .maxlen = VAR_5,
  };
  VAR_3 = FUNC_1(&VAR_0->recv_flinfo,
          &VAR_7,
          VAR_0->type_io_param,
          VAR_0->type_mod);
 }
 else
 {
  const char *VAR_8 = FUNC_6(VAR_2);
  VAR_3 = FUNC_0(&VAR_0->recv_flinfo,
        (char *) VAR_8,
        VAR_0->type_io_param,
        VAR_0->type_mod);
 }
 return VAR_3;
}
