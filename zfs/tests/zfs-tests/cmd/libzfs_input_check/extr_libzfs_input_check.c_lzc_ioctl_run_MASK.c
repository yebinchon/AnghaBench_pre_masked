
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_ioc_t ;
struct TYPE_3__ {char* member_0; char* zc_name; size_t zc_nvlist_src_size; void* zc_nvlist_dst; int zc_nvlist_dst_size; void* zc_nvlist_src; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef void* uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int) ;



 char* VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int *,size_t*) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int ,char*,char*,char const*,int,int) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (char*,char const*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_8(zfs_ioc_t VAR_6, const char *VAR_7, nvlist_t *VAR_8, int VAR_9)
{
 zfs_cmd_t VAR_10 = {"\0"};
 char *VAR_11 = ((void*)0);
 const char *VAR_12;
 size_t VAR_13 = 0;
 int VAR_14 = 0;

 switch (VAR_9) {
 case 128:
  VAR_12 = "unsupported input";
  break;
 case 129:
  VAR_12 = "missing input";
  break;
 case 130:
  VAR_12 = "invalid input type";
  break;
 default:
  VAR_12 = "valid input";
  break;
 }

 VAR_11 = FUNC_1(VAR_8, &VAR_13);
 (void) FUNC_7(VAR_10.zc_name, VAR_7, sizeof (VAR_10.zc_name));
 VAR_10.zc_name[sizeof (VAR_10.zc_name) - 1] = '\0';
 VAR_10.zc_nvlist_src = (uint64_t)(uintptr_t)VAR_11;
 VAR_10.zc_nvlist_src_size = VAR_13;
 VAR_10.zc_nvlist_dst_size = FUNC_0(VAR_13 * 2, 128 * 1024);
 VAR_10.zc_nvlist_dst = (uint64_t)(uintptr_t)FUNC_6(VAR_10.zc_nvlist_dst_size);

 if (FUNC_5(VAR_5, VAR_6, &VAR_10) != 0)
  VAR_14 = VAR_2;

 if (VAR_14 != VAR_9) {
  VAR_4 = VAR_0;
  (void) FUNC_3(VAR_3, "%s: Unexpected result with %s, "
      "error %d (expecting %d)\n",
      VAR_1, VAR_12, VAR_14, VAR_9);
 }

 FUNC_2(VAR_11, VAR_13);
 FUNC_4((void *)(uintptr_t)VAR_10.zc_nvlist_dst);
}
