
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zi_guid; } ;
typedef TYPE_1__ zinject_record_t ;
struct TYPE_6__ {char* member_0; int zc_cookie; int zc_guid; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char const*,int) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*) ;

int
FUNC_3(const char *VAR_4, zinject_record_t *VAR_5, int VAR_6)
{
 zfs_cmd_t VAR_7 = {"\0"};

 FUNC_0(VAR_6 == VAR_0 || VAR_6 == VAR_1);
 (void) FUNC_1(VAR_7.zc_name, VAR_4, sizeof (VAR_7.zc_name));
 VAR_7.zc_guid = VAR_5->zi_guid;
 VAR_7.zc_cookie = VAR_6;

 if (FUNC_2(VAR_3, VAR_2, &VAR_7) == 0)
  return (0);

 return (1);
}
