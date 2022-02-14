
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int FuncExpr ;
typedef int Aggref ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int *,int) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static FuncExpr *
FUNC_5(Aggref *VAR_6)
{
 FuncExpr *VAR_7;
 Oid VAR_8, VAR_9;
 VAR_9 = VAR_0;
 VAR_8 = FUNC_0(FUNC_2(FUNC_4(VAR_3), FUNC_4(VAR_5)),
          1,
          &VAR_9,
          0);
 VAR_7 = FUNC_3(VAR_8,
          VAR_1,
          FUNC_1(VAR_6),
          VAR_4,
          VAR_4,
          VAR_2);
 return VAR_7;
}
