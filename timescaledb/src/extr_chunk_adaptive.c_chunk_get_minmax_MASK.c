
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;
typedef int NameData ;
typedef scalar_t__ MinMaxResult ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int *,int ,int *) ;

__attribute__((used)) static bool
FUNC_11(Oid VAR_4, Oid VAR_5, AttrNumber VAR_6, Datum VAR_7[2])
{
 Relation VAR_8 = FUNC_7(VAR_4, VAR_0);
 NameData VAR_9;
 MinMaxResult VAR_10;

 FUNC_9(&VAR_9, FUNC_4(VAR_4, VAR_6, 0));
 VAR_10 = FUNC_10(VAR_8, VAR_5, &VAR_9, VAR_6, VAR_7);

 if (VAR_10 == VAR_2)
 {
  FUNC_1(VAR_3,
    (FUNC_3("no index on \"%s\" found for adaptive chunking on chunk \"%s\"",
      FUNC_0(VAR_9),
      FUNC_5(VAR_4)),
     FUNC_2("Adaptive chunking works best with an index on the dimension being "
         "adapted.")));

  VAR_10 = FUNC_8(VAR_8, VAR_5, VAR_6, VAR_7);
 }

 FUNC_6(VAR_8, VAR_0);

 return VAR_10 == VAR_1;
}
