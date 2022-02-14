
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* zfs_name; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_6__ {char* member_0; char const* zc_name; char const* zc_value; int zc_cookie; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 (char const*) ;

int
FUNC_7(zfs_handle_t *VAR_1, const char *VAR_2,
    uint64_t *VAR_3)
{
 int VAR_4;
 zfs_cmd_t VAR_5 = {"\0"};
 const char *VAR_6;

 (void) FUNC_3(VAR_5.zc_name, VAR_1->zfs_name, sizeof (VAR_5.zc_name));

 FUNC_0(FUNC_6(VAR_2));
 VAR_6 = VAR_2 + FUNC_4("written@");
 if (FUNC_1(VAR_6, '@') != ((void*)0) || FUNC_1(VAR_6, '#') != ((void*)0)) {

  (void) FUNC_3(VAR_5.zc_value, VAR_6, sizeof (VAR_5.zc_value));
 } else {

  char *VAR_7;

  (void) FUNC_3(VAR_5.zc_value, VAR_1->zfs_name,
      sizeof (VAR_5.zc_value));
  VAR_7 = FUNC_1(VAR_5.zc_value, '@');
  if (VAR_7 != ((void*)0))
   *VAR_7 = '\0';
  (void) FUNC_2(VAR_5.zc_value, VAR_6 - 1, sizeof (VAR_5.zc_value));
 }

 VAR_4 = FUNC_5(VAR_1->zfs_hdl, VAR_0, &VAR_5);
 if (VAR_4)
  return (VAR_4);

 *VAR_3 = VAR_5.zc_cookie;
 return (0);
}
