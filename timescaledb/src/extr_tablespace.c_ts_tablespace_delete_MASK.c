
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int stopcount; int database_info; } ;
typedef TYPE_1__ TablespaceScanInfo ;
typedef int ScanKeyData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int *,int,int ,int *,TYPE_1__*,int ,int ) ;
 int VAR_8 ;
 int FUNC_6 () ;

int
FUNC_7(int32 VAR_9, const char *VAR_10)

{
 ScanKeyData VAR_11[2];
 TablespaceScanInfo VAR_12 = {
  .database_info = FUNC_6(),
  .stopcount = (((void*)0) != VAR_10),
 };
 int VAR_13, VAR_14 = 0;

 FUNC_4(&VAR_11[VAR_14++],
    VAR_0,
    VAR_2,
    VAR_3,
    FUNC_3(VAR_9));

 if (((void*)0) != VAR_10)
  FUNC_4(&VAR_11[VAR_14++],
     VAR_1,
     VAR_2,
     VAR_4,
     FUNC_2(VAR_7, FUNC_0(VAR_10)));

 VAR_13 = FUNC_5(VAR_6,
             VAR_11,
             VAR_14,
             VAR_8,
             ((void*)0),
             &VAR_12,
             0,
             VAR_5);

 if (VAR_13 > 0)
  FUNC_1();

 return VAR_13;
}
