
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_syscall_ptr ;
struct TYPE_2__ {int (* xGetSystemCall ) (int *,char const*) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static sqlite3_syscall_ptr FUNC_2(sqlite3_vfs *VAR_0,
                                             const char *VAR_1)
{
    return FUNC_0(VAR_0)->xGetSystemCall(VAR_0, VAR_1);
}
