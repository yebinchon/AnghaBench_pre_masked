
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; int tuple; int scanrel; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_5__ {scalar_t__ stopcount; int database_info; } ;
typedef TYPE_2__ TablespaceScanInfo ;
typedef int ScanTupleResult ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ScanTupleResult
FUNC_3(TupleInfo *VAR_2, void *VAR_3)
{
 TablespaceScanInfo *VAR_4 = VAR_3;
 CatalogSecurityContext VAR_5;

 FUNC_0(VAR_4->database_info, &VAR_5);
 FUNC_1(VAR_2->scanrel, VAR_2->tuple);
 FUNC_2(&VAR_5);

 return (VAR_4->stopcount == 0 || VAR_2->count < VAR_4->stopcount) ? VAR_0 : VAR_1;
}
