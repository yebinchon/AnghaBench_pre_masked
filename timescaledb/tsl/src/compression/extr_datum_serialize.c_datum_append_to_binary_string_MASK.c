
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bytea ;
struct TYPE_5__ {int send_flinfo; scalar_t__ use_binary_send; } ;
typedef int StringInfo ;
typedef TYPE_1__ DatumSerializer ;
typedef int Datum ;
typedef scalar_t__ BinaryStringEncoding ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;

void
FUNC_11(DatumSerializer *VAR_2, BinaryStringEncoding VAR_3,
         StringInfo VAR_4, Datum VAR_5)
{
 FUNC_6(VAR_2);

 if (VAR_3 == VAR_1)
  FUNC_7(VAR_4, VAR_2->use_binary_send);
 else if (VAR_3 != FUNC_4(VAR_2))
  FUNC_5(VAR_0, "incorrect encoding chosen in datum_append_to_binary_string");

 if (VAR_2->use_binary_send)
 {
  bytea *VAR_6 = FUNC_1(&VAR_2->send_flinfo, VAR_5);
  FUNC_9(VAR_4, FUNC_3(VAR_6));
  FUNC_8(VAR_4, FUNC_2(VAR_6), FUNC_3(VAR_6));
 }
 else
 {
  char *VAR_7 = FUNC_0(&VAR_2->send_flinfo, VAR_5);
  FUNC_10(VAR_4, VAR_7);
 }
}
