
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zfs_type_t ;
typedef int zfs_handle_t ;
struct TYPE_2__ {char* proto; int handle; } ;
typedef TYPE_1__ update_cookie_t ;
typedef int shareopts ;
typedef int mountpoint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,char*,int *,char*,char*,int *,char*,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int (*) (int *,void*),void*) ;
 scalar_t__ FUNC_7 (int *,int ,char*,int,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_8(zfs_handle_t *VAR_6, void *VAR_7)
{
 update_cookie_t *VAR_8 = (update_cookie_t *)VAR_7;
 char VAR_9[VAR_1];
 char VAR_10[VAR_1];
 char *VAR_11;
 zfs_type_t VAR_12 = FUNC_4(VAR_6);

 if (VAR_12 == VAR_5 &&
     FUNC_6(VAR_6, FUNC_8, VAR_7) != 0) {
  FUNC_2(VAR_6);
  return (1);
 }

 if (VAR_12 != VAR_5) {
  FUNC_2(VAR_6);
  return (0);
 }

 if (FUNC_7(VAR_6, VAR_2, VAR_9,
     sizeof (VAR_9), ((void*)0), ((void*)0), 0, VAR_0) != 0) {
  FUNC_2(VAR_6);
  return (0);
 }

 VAR_11 = (char *)FUNC_3(VAR_6);

 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_6);
  return (0);
 }

 if (!FUNC_5(VAR_6, ((void*)0))) {
  FUNC_2(VAR_6);
  return (0);
 }

 if ((VAR_8->proto == ((void*)0) || FUNC_1(VAR_8->proto, "nfs") == 0) &&
     FUNC_7(VAR_6, VAR_3, VAR_10,
     sizeof (VAR_10), ((void*)0), ((void*)0), 0, VAR_0) == 0 &&
     FUNC_1(VAR_10, "off") != 0) {
  (void) FUNC_0(VAR_8->handle, ((void*)0), VAR_9, ((void*)0),
      "nfs", VAR_10, ((void*)0), VAR_11, VAR_0);
 }

 if ((VAR_8->proto == ((void*)0) || FUNC_1(VAR_8->proto, "smb") == 0) &&
     FUNC_7(VAR_6, VAR_4, VAR_10,
     sizeof (VAR_10), ((void*)0), ((void*)0), 0, VAR_0) == 0 &&
     FUNC_1(VAR_10, "off") != 0) {
  (void) FUNC_0(VAR_8->handle, ((void*)0), VAR_9, ((void*)0),
      "smb", VAR_10, ((void*)0), VAR_11, VAR_0);
 }

 FUNC_2(VAR_6);

 return (0);
}
