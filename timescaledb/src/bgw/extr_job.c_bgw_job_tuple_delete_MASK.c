
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int tuple; int scanrel; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_5__ {int id; } ;
typedef int ScanTupleResult ;
typedef TYPE_2__ FormData_bgw_job ;
typedef int CatalogSecurityContext ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ScanTupleResult
FUNC_9(TupleInfo *VAR_1, void *VAR_2)
{
 CatalogSecurityContext VAR_3;
 int32 VAR_4 = ((FormData_bgw_job *) FUNC_0(VAR_1->tuple))->id;


 FUNC_1(VAR_4);


 FUNC_4(VAR_4);
 FUNC_3(VAR_4);


 FUNC_2(VAR_4);

 FUNC_5(FUNC_6(), &VAR_3);
 FUNC_7(VAR_1->scanrel, VAR_1->tuple);
 FUNC_8(&VAR_3);

 return VAR_0;
}
