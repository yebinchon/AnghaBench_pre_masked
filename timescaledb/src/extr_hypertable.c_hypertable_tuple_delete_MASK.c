
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tuple; int scanrel; int desc; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;
typedef int Hypertable ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int,int *) ;

__attribute__((used)) static ScanTupleResult
FUNC_14(TupleInfo *VAR_4, void *VAR_5)
{
 CatalogSecurityContext VAR_6;
 bool VAR_7;
 bool VAR_8;
 int VAR_9 =
  FUNC_0(FUNC_1(VAR_4->tuple, VAR_1, VAR_4->desc, &VAR_7));
 int VAR_10 =
  FUNC_0(FUNC_1(VAR_4->tuple,
           VAR_0,
           VAR_4->desc,
           &VAR_8));

 FUNC_13(VAR_9, ((void*)0));
 FUNC_7(VAR_9);
 FUNC_9(VAR_9, 1);


 FUNC_2(VAR_9);


 FUNC_8(VAR_9);


 FUNC_10(VAR_9);

 if (!VAR_8)
 {
  Hypertable *VAR_11 = FUNC_12(VAR_10);

  if (VAR_11 != ((void*)0))
   FUNC_11(VAR_11, VAR_2);
 }

 FUNC_3(FUNC_4(), &VAR_6);
 FUNC_5(VAR_4->scanrel, VAR_4->tuple);
 FUNC_6(&VAR_6);

 return VAR_3;
}
