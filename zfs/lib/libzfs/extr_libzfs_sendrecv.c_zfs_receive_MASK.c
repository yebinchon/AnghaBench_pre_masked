
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint64_t ;
struct stat {int st_mode; } ;
struct TYPE_9__ {scalar_t__ domount; int nomount; } ;
typedef TYPE_2__ recvflags_t ;
typedef int prop_changelist_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,struct stat*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,char*,char**) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *,char const*,char*,TYPE_2__*,int,int *,int *,int *,char**,int,int *,int *,int *) ;

int
FUNC_15(libzfs_handle_t *VAR_8, const char *VAR_9, nvlist_t *VAR_10,
    recvflags_t *VAR_11, int VAR_12, avl_tree_t *VAR_13)
{
 char *VAR_14 = ((void*)0);
 int VAR_15;
 int VAR_16;
 uint64_t VAR_17 = 0;
 struct stat VAR_18;
 char *VAR_19 = ((void*)0);





 if (FUNC_7(VAR_12, &VAR_18) == -1) {
  FUNC_11("fstat");
  return (-2);
 }





 if (FUNC_0(VAR_18.st_mode))
  FUNC_8(VAR_12);

 if (VAR_10) {
  VAR_15 = FUNC_9(VAR_10, "origin", &VAR_19);
  if (VAR_15 && VAR_15 != VAR_1)
   return (VAR_15);
 }

 VAR_16 = FUNC_10(VAR_4, VAR_3|VAR_2);
 FUNC_1(VAR_16 >= 0);

 VAR_15 = FUNC_14(VAR_8, VAR_9, VAR_19, VAR_11, VAR_12, ((void*)0), ((void*)0),
     VAR_13, &VAR_14, VAR_16, &VAR_17, ((void*)0), VAR_10);

 FUNC_1(0 == FUNC_5(VAR_16));

 if (VAR_15 == 0 && !VAR_11->nomount && VAR_11->domount && VAR_14) {
  zfs_handle_t *VAR_20 = ((void*)0);
  prop_changelist_t *VAR_21 = ((void*)0);

  VAR_20 = FUNC_13(VAR_8, VAR_14,
      VAR_6 | VAR_7);
  if (VAR_20 == ((void*)0)) {
   VAR_15 = -1;
   goto out;
  } else {
   if (VAR_20->zfs_type == VAR_7) {
    FUNC_12(VAR_20);
    goto out;
   }

   VAR_21 = FUNC_3(VAR_20, VAR_5,
       VAR_0, 0);
   FUNC_12(VAR_20);
   if (VAR_21 == ((void*)0)) {
    VAR_15 = -1;
    goto out;
   }


   VAR_15 = FUNC_4(VAR_21);
   FUNC_2(VAR_21);
   if (VAR_15 != 0)
    VAR_15 = -1;
  }
 }

out:
 if (VAR_14)
  FUNC_6(VAR_14);

 return (VAR_15);
}
