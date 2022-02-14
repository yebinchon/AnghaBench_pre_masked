
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zpi_name; } ;
typedef TYPE_1__ zfs_project_item_t ;
typedef int list_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(list_t *VAR_0, const char *VAR_1)
{
 zfs_project_item_t *VAR_2;

 VAR_2 = FUNC_1(sizeof (zfs_project_item_t) + FUNC_3(VAR_1) + 1);
 FUNC_2(VAR_2->zpi_name, VAR_1);
 FUNC_0(VAR_0, VAR_2);
}
