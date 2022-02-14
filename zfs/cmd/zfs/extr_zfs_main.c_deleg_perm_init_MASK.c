
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_deleg_who_type_t ;
struct TYPE_3__ {char const* dp_name; int dp_who_type; } ;
typedef TYPE_1__ deleg_perm_t ;



__attribute__((used)) static inline void
FUNC_0(deleg_perm_t *VAR_0, zfs_deleg_who_type_t VAR_1,
    const char *VAR_2)
{
 VAR_0->dp_who_type = VAR_1;
 VAR_0->dp_name = VAR_2;
}
