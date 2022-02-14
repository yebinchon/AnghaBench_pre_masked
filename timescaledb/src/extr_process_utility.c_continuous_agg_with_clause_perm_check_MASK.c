
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int ContinuousAgg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(ContinuousAgg *VAR_2, Oid VAR_3)
{
 Oid VAR_4 = FUNC_6(VAR_3);

 if (!FUNC_5(FUNC_0(), VAR_4))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("must be owner of continuous aggregate \"%s\"", FUNC_4(VAR_3))));
}
