
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HTSU_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int *,int ,int) ;
 int VAR_3 ;

HTSU_Result
FUNC_7(Oid VAR_4)
{
 HTSU_Result VAR_5;
 int VAR_6;

 VAR_6 = FUNC_6(FUNC_3(FUNC_5(VAR_4)),
        FUNC_4(VAR_4),
        VAR_3,
        &VAR_5,
        VAR_2,
        1);

 if (VAR_6 != 1)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("table \"%s\" is not a hypertable", FUNC_4(VAR_4))));

 return VAR_5;
}
