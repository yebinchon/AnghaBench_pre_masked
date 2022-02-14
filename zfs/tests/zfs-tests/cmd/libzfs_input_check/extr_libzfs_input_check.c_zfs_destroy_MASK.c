
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3)
{
 zfs_cmd_t VAR_4 = {"\0"};
 int VAR_5;

 (void) FUNC_1(VAR_4.zc_name, VAR_3, sizeof (VAR_4.zc_name));
 VAR_4.zc_name[sizeof (VAR_4.zc_name) - 1] = '\0';
 VAR_5 = FUNC_0(VAR_2, VAR_0, &VAR_4);

 return (VAR_5 == 0 ? 0 : VAR_1);
}
