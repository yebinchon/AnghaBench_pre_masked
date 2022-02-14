
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lockingContext; } ;
typedef TYPE_1__ unixFile ;
typedef int sqlite3_file ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_file *VAR_1) {
  unixFile *VAR_2 = (unixFile*)VAR_1;
  FUNC_0( VAR_1!=0 );
  FUNC_2(VAR_1, VAR_0);
  FUNC_3(VAR_2->lockingContext);
  return FUNC_1(VAR_1);
}
