
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int *,int ) ;
 int FUNC_1 (char const*,char const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_3, const char *VAR_4, const char *VAR_5)
{
 int VAR_6;
 zfs_handle_t *VAR_7 = ((void*)0);






 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 == VAR_1) {
  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7 == ((void*)0)) {
   VAR_6 = VAR_2;
   goto out;
  }

  VAR_6 = FUNC_0(VAR_7->zfs_name, VAR_0,
      ((void*)0), ((void*)0), 0);
  if (VAR_6 != 0)
   goto out;

  VAR_6 = FUNC_1(VAR_4, VAR_5);
 }

out:
 if (VAR_7 != ((void*)0))
  FUNC_3(VAR_7);
 return (VAR_6);
}
