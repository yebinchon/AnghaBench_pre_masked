
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int buf ;
typedef int avl_tree_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,scalar_t__,char**) ;
 scalar_t__ FUNC_2 (int *,char*,char**) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(libzfs_handle_t *VAR_3, avl_tree_t *VAR_4,
    uint64_t VAR_5, uint64_t VAR_6)
{
 nvlist_t *VAR_7;
 char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 char VAR_10[VAR_0];
 int VAR_11;
 zfs_handle_t *VAR_12, *VAR_13;
 uint64_t VAR_14, VAR_15;

 if (VAR_6 == 0)
  return (0);
 if (VAR_5 == 0)
  return (1);

 VAR_7 = FUNC_1(VAR_4, VAR_5, &VAR_9);
 FUNC_0(0 == FUNC_2(VAR_7, "name", &VAR_8));
 (void) FUNC_3(VAR_10, sizeof (VAR_10), "%s@%s", VAR_8, VAR_9);
 VAR_12 = FUNC_5(VAR_3, VAR_10, VAR_2);
 if (VAR_12 == ((void*)0))
  return (-1);

 VAR_7 = FUNC_1(VAR_4, VAR_6, &VAR_9);
 FUNC_0(0 == FUNC_2(VAR_7, "name", &VAR_8));
 (void) FUNC_3(VAR_10, sizeof (VAR_10), "%s@%s", VAR_8, VAR_9);
 VAR_13 = FUNC_5(VAR_3, VAR_10, VAR_2);
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_12);
  return (-1);
 }

 VAR_14 = FUNC_6(VAR_12, VAR_1);
 VAR_15 = FUNC_6(VAR_13, VAR_1);

 if (VAR_14 < VAR_15)
  VAR_11 = -1;
 else if (VAR_14 > VAR_15)
  VAR_11 = +1;
 else
  VAR_11 = 0;

 FUNC_4(VAR_12);
 FUNC_4(VAR_13);

 return (VAR_11);
}
