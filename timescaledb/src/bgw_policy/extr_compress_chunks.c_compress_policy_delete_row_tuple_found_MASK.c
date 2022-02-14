
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tuple; int scanrel; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ScanTupleResult
FUNC_4(TupleInfo *VAR_1, void *const VAR_2)
{
 CatalogSecurityContext VAR_3;

 FUNC_0(FUNC_1(), &VAR_3);
 FUNC_2(VAR_1->scanrel, VAR_1->tuple);
 FUNC_3(&VAR_3);

 return VAR_0;
}
