
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {char const* fsname; char const* fromsnap; char const* tosnap; int * fss; void* props; void* holds; void* backup; void* verbose; void* replicate; void* doall; void* raw; void* recursive; int member_0; } ;
typedef TYPE_1__ send_data_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef void* boolean_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (int *,char const*,int) ;

__attribute__((used)) static int
FUNC_6(libzfs_handle_t *VAR_5, const char *VAR_6, const char *VAR_7,
    const char *VAR_8, boolean_t VAR_9, boolean_t VAR_10, boolean_t VAR_11,
    boolean_t VAR_12, boolean_t VAR_13, boolean_t VAR_14, boolean_t VAR_15,
    boolean_t VAR_16, nvlist_t **VAR_17, avl_tree_t **VAR_18)
{
 zfs_handle_t *VAR_19;
 send_data_t VAR_20 = { 0 };
 int VAR_21;

 VAR_19 = FUNC_5(VAR_5, VAR_6, VAR_3 | VAR_4);
 if (VAR_19 == ((void*)0))
  return (VAR_0);

 FUNC_0(0 == FUNC_2(&VAR_20.fss, VAR_2, 0));
 VAR_20.fsname = VAR_6;
 VAR_20.fromsnap = VAR_7;
 VAR_20.tosnap = VAR_8;
 VAR_20.recursive = VAR_9;
 VAR_20.raw = VAR_10;
 VAR_20.doall = VAR_11;
 VAR_20.replicate = VAR_12;
 VAR_20.verbose = VAR_13;
 VAR_20.backup = VAR_14;
 VAR_20.holds = VAR_15;
 VAR_20.props = VAR_16;

 if ((VAR_21 = FUNC_4(VAR_19, &VAR_20)) != 0) {
  FUNC_3(VAR_20.fss);
  if (VAR_18 != ((void*)0))
   *VAR_18 = ((void*)0);
  *VAR_17 = ((void*)0);
  return (VAR_21);
 }

 if (VAR_18 != ((void*)0) && (*VAR_18 = FUNC_1(VAR_20.fss)) == ((void*)0)) {
  FUNC_3(VAR_20.fss);
  *VAR_17 = ((void*)0);
  return (VAR_1);
 }

 *VAR_17 = VAR_20.fss;
 return (0);
}
