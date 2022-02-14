
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_3__ {int (* xFullPathname ) (TYPE_1__*,char const*,int,char*) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char const*,int,char*) ;

__attribute__((used)) static int
FUNC_2(sqlite3_vfs *VAR_0, const char *VAR_1, int VAR_2, char *VAR_3)
{
    return FUNC_0(VAR_0)->xFullPathname(FUNC_0(VAR_0), VAR_1, VAR_2, VAR_3);
}
