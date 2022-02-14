
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t zc_nvlist_src_size; scalar_t__ zc_nvlist_dst; scalar_t__ zc_nvlist_src; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 () ;
 char* FUNC_3 (int *,size_t*) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char const*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_12(void *VAR_5, const char *VAR_6, uint64_t VAR_7,
    boolean_t *VAR_8)
{
 zfs_cmd_t *VAR_9;
 nvlist_t *VAR_10;
 char *VAR_11 = ((void*)0);
 size_t VAR_12 = 0;
 int VAR_13, VAR_14;





 VAR_13 = FUNC_7(VAR_3, VAR_1);
 if (VAR_13 < 0)
  return (-1);

 VAR_9 = FUNC_10(sizeof (zfs_cmd_t), VAR_2);

 VAR_10 = FUNC_2();
 FUNC_1(VAR_10, "force", VAR_0);

 (void) FUNC_8(VAR_9->zc_name, VAR_6, sizeof (VAR_9->zc_name));
 VAR_11 = FUNC_3(VAR_10, &VAR_12);
 VAR_9->zc_nvlist_src = (uint64_t)(uintptr_t)VAR_11;
 VAR_9->zc_nvlist_src_size = VAR_12;

 VAR_14 = FUNC_11(VAR_13, VAR_4, VAR_9);

 FUNC_4(VAR_11, VAR_12);
 FUNC_5((void *)(uintptr_t)VAR_9->zc_nvlist_dst);
 FUNC_6(VAR_10);
 FUNC_9(VAR_9, sizeof (zfs_cmd_t));

 (void) FUNC_0(VAR_13);

 *VAR_8 = (VAR_14 == 0);

 return (0);
}
