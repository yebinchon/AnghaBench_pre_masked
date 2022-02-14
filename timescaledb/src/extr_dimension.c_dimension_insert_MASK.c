
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regproc ;
typedef int int64 ;
typedef int int32 ;
typedef int int16 ;
typedef int Relation ;
typedef int Oid ;
typedef int Name ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 () ;

__attribute__((used)) static int32
FUNC_5(int32 VAR_2, Name VAR_3, Oid VAR_4, int16 VAR_5,
     regproc VAR_6, int64 VAR_7)
{
 Catalog *VAR_8 = FUNC_4();
 Relation VAR_9;
 int32 VAR_10;

 VAR_9 = FUNC_3(FUNC_0(VAR_8, VAR_0), VAR_1);
 VAR_10 = FUNC_1(VAR_9,
            VAR_2,
            VAR_3,
            VAR_4,
            VAR_5,
            VAR_6,
            VAR_7);
 FUNC_2(VAR_9, VAR_1);
 return VAR_10;
}
