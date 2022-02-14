
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_15__ {scalar_t__ guid; int num_redact_snaps; scalar_t__ bookmark_ok; int name; int * skip; } ;
typedef TYPE_2__ guid_to_name_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ,char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int (*) (TYPE_1__*,void*),TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int (*) (TYPE_1__*,void*),TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_8(zfs_handle_t *VAR_2, void *VAR_3)
{
 guid_to_name_data_t *VAR_4 = VAR_3;
 const char *VAR_5;
 int VAR_6;

 if (VAR_4->skip != ((void*)0) &&
     (VAR_5 = FUNC_3(VAR_2->zfs_name, '/')) != ((void*)0) &&
     FUNC_1(VAR_5 + 1, VAR_4->skip) == 0) {
  FUNC_4(VAR_2);
  return (0);
 }

 if (FUNC_7(VAR_2, VAR_1) == VAR_4->guid &&
     (VAR_4->num_redact_snaps == -1 || FUNC_0(VAR_2, VAR_4))) {
  (void) FUNC_2(VAR_4->name, VAR_2->zfs_name);
  FUNC_4(VAR_2);
  return (VAR_0);
 }

 VAR_6 = FUNC_6(VAR_2, FUNC_8, VAR_4);
 if (VAR_6 != VAR_0 && VAR_4->bookmark_ok)
  VAR_6 = FUNC_5(VAR_2, FUNC_8, VAR_4);
 FUNC_4(VAR_2);
 return (VAR_6);
}
