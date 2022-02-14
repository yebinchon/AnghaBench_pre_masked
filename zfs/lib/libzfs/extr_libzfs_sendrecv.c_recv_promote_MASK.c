
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_11__ {char* member_0; int zc_name; int zc_value; } ;
typedef TYPE_2__ zfs_cmd_t ;
struct TYPE_12__ {scalar_t__ verbose; } ;
typedef TYPE_3__ recvflags_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int *,int ) ;
 int FUNC_1 (char*,char const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_6 (int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_7(libzfs_handle_t *VAR_4, const char *VAR_5,
    const char *VAR_6, recvflags_t *VAR_7)
{
 int VAR_8;
 zfs_cmd_t VAR_9 = {"\0"};
 zfs_handle_t *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

 if (VAR_7->verbose)
  (void) FUNC_1("promoting %s\n", VAR_5);

 (void) FUNC_3(VAR_9.zc_value, VAR_6, sizeof (VAR_9.zc_value));
 (void) FUNC_3(VAR_9.zc_name, VAR_5, sizeof (VAR_9.zc_name));






 VAR_8 = FUNC_5(VAR_4, VAR_2, &VAR_9);
 if (VAR_8 == VAR_1) {
  VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_3);
  if (VAR_10 == ((void*)0)) {
   VAR_8 = -1;
   goto out;
  }

  VAR_11 = FUNC_2(VAR_10);
  if (VAR_11 == ((void*)0)) {
   VAR_8 = -1;
   goto out;
  }

  VAR_8 = FUNC_0(VAR_11->zfs_name, VAR_0,
      ((void*)0), ((void*)0), 0);
  if (VAR_8 != 0)
   goto out;

  VAR_8 = FUNC_5(VAR_4, VAR_2, &VAR_9);
 }

out:
 if (VAR_10 != ((void*)0))
  FUNC_4(VAR_10);
 if (VAR_11 != ((void*)0))
  FUNC_4(VAR_11);

 return (VAR_8);
}
