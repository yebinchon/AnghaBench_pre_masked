
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_filtered; int hcache; int userid; int database_info; } ;
typedef TYPE_1__ TablespaceScanInfo ;
typedef int ScanKeyData ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char const*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_6 (int ,int *,int,int ,int ,TYPE_1__*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(const char *VAR_9, Oid VAR_10)
{
 ScanKeyData VAR_11[1];
 TablespaceScanInfo VAR_12 = {
  .database_info = FUNC_8(),
  .hcache = FUNC_9(),
  .userid = VAR_10,
 };
 int VAR_13;

 FUNC_3(&VAR_11[0],
    VAR_0,
    VAR_1,
    VAR_2,
    FUNC_2(VAR_6, FUNC_0(VAR_9)));

 VAR_13 = FUNC_6(VAR_3,
             VAR_11,
             1,
             VAR_7,
             VAR_8,
             &VAR_12,
             0,
             VAR_5);
 FUNC_7(VAR_12.hcache);

 if (VAR_13 > 0)
  FUNC_1();

 if (VAR_12.num_filtered > 0)
  FUNC_4(VAR_4,
    (FUNC_5("tablespace \"%s\" remains attached to %d hypertable(s) due to lack of "
      "permissions",
      VAR_9,
      VAR_12.num_filtered)));

 return VAR_13;
}
