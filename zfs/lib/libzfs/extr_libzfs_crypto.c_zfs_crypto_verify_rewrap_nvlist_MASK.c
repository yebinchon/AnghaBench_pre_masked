
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_prop_t ;
struct TYPE_4__ {int zpool_hdl; int zfs_type; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int * FUNC_8 (int ,int ,int *,int ,int *,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_9(zfs_handle_t *VAR_4, nvlist_t *VAR_5,
    nvlist_t **VAR_6, char *VAR_7)
{
 int VAR_8;
 nvpair_t *VAR_9 = ((void*)0);
 zfs_prop_t VAR_10;
 nvlist_t *VAR_11 = ((void*)0);

 VAR_11 = FUNC_1();






 while ((VAR_9 = FUNC_3(VAR_5, VAR_9)) != ((void*)0)) {
  const char *VAR_12 = FUNC_4(VAR_9);
  VAR_10 = FUNC_6(VAR_12);

  switch (VAR_10) {
  case 128:
  case 130:
  case 129:
   break;
  default:
   VAR_8 = VAR_1;
   FUNC_5(VAR_4->zfs_hdl, FUNC_0(VAR_2,
       "Only keyformat, keylocation and pbkdf2iters may "
       "be set with this command."));
   goto error;
  }
 }

 VAR_11 = FUNC_8(VAR_4->zfs_hdl, VAR_4->zfs_type, VAR_5,
     FUNC_7(VAR_4, VAR_3), ((void*)0), VAR_4->zpool_hdl,
     VAR_0, VAR_7);
 if (VAR_11 == ((void*)0)) {
  VAR_8 = VAR_1;
  goto error;
 }

 *VAR_6 = VAR_11;
 return (0);

error:
 FUNC_2(VAR_11);
 *VAR_6 = ((void*)0);
 return (VAR_8);
}
