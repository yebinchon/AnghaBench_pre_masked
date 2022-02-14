
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;
typedef int Name ;
typedef scalar_t__ MinMaxResult ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static bool
FUNC_3(Oid VAR_2, Oid VAR_3, Name VAR_4, AttrNumber VAR_5)
{
 Datum VAR_6[2];
 Relation VAR_7 = FUNC_1(VAR_2, VAR_0);
 MinMaxResult VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_7, VAR_0);

 return VAR_8 != VAR_1;
}
