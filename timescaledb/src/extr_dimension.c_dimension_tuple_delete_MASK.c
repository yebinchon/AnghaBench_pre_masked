
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tuple; int scanrel; int desc; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;
typedef int Datum ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static ScanTupleResult
FUNC_8(TupleInfo *VAR_2, void *VAR_3)
{
 CatalogSecurityContext VAR_4;
 bool VAR_5;
 Datum VAR_6 = FUNC_2(VAR_2->tuple, VAR_0, VAR_2->desc, &VAR_5);
 bool *VAR_7 = VAR_3;

 FUNC_0(!VAR_5);


 if (((void*)0) != VAR_7 && *VAR_7)
  FUNC_7(FUNC_1(VAR_6), 0);

 FUNC_3(FUNC_4(), &VAR_4);
 FUNC_5(VAR_2->scanrel, VAR_2->tuple);
 FUNC_6(&VAR_4);

 return VAR_1;
}
