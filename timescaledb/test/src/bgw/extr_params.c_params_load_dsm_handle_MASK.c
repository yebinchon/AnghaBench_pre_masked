
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dsm_handle ;
struct TYPE_2__ {int handle; } ;
typedef int Relation ;
typedef int * HeapTuple ;
typedef int HeapScanDesc ;
typedef TYPE_1__ FormData_bgw_dsm_handle ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static dsm_handle
FUNC_10()
{
 Relation VAR_3;
 HeapScanDesc VAR_4;
 HeapTuple VAR_5;
 FormData_bgw_dsm_handle *VAR_6;
 dsm_handle VAR_7;

 VAR_3 = FUNC_9(FUNC_2(), VAR_1);
 VAR_4 = FUNC_3(VAR_3, VAR_2, 0, ((void*)0));
 VAR_5 = FUNC_8(VAR_4, VAR_0);
 FUNC_0(VAR_5 != ((void*)0));
 VAR_5 = FUNC_5(VAR_5);
 VAR_6 = (FormData_bgw_dsm_handle *) FUNC_1(VAR_5);
 VAR_7 = VAR_6->handle;
 FUNC_7(VAR_5);
 FUNC_6(VAR_4);
 FUNC_4(VAR_3, VAR_1);

 return VAR_7;
}
