
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_2__ {char const* (* xNextSystemCall ) (int *,char const*) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 char const* FUNC_1 (int *,char const*) ;

__attribute__((used)) static const char *FUNC_2(sqlite3_vfs *VAR_0, const char *VAR_1)
{
    return FUNC_0(VAR_0)->xNextSystemCall(VAR_0, VAR_1);
}
