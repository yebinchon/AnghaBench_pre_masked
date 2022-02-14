
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tuple_found_func ;
struct TYPE_3__ {void* data; int hcache; int database_info; } ;
typedef TYPE_1__ TablespaceScanInfo ;


 int FUNC_0 (char const*,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, tuple_found_func VAR_1, void *VAR_2)
{
 TablespaceScanInfo VAR_3 = {
  .database_info = FUNC_2(),
  .hcache = FUNC_3(),
  .data = VAR_2,
 };

 FUNC_0(VAR_0, VAR_1, &VAR_3);

 FUNC_1(VAR_3.hcache);
}
