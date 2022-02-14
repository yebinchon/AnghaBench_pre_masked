
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zinject_record_t ;
struct TYPE_3__ {char* member_0; scalar_t__ zc_guid; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, const char *VAR_5, zinject_record_t *VAR_6,
    void *VAR_7)
{
 zfs_cmd_t VAR_8 = {"\0"};

 VAR_8.zc_guid = (uint64_t)VAR_4;

 if (FUNC_2(VAR_2, VAR_0, &VAR_8) != 0) {
  (void) FUNC_0(VAR_3, "failed to remove handler %d: %s\n",
      VAR_4, FUNC_1(VAR_1));
  return (1);
 }

 return (0);
}
