
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sc_prop; scalar_t__ sc_reverse; int sc_user_prop; struct TYPE_3__* sc_next; } ;
typedef TYPE_1__ zfs_sort_column_t ;
struct TYPE_4__ {int * zn_handle; } ;
typedef TYPE_2__ zfs_node_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int rbuf ;
typedef int nvlist_t ;
typedef int lbuf ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,char**) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void const*,void const*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,char*,int,int *,int *,int ,scalar_t__) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__*,int *,int *,int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_13(const void *VAR_6, const void *VAR_7, void *VAR_8)
{
 zfs_handle_t *VAR_9 = ((zfs_node_t *)VAR_6)->zn_handle;
 zfs_handle_t *VAR_10 = ((zfs_node_t *)VAR_7)->zn_handle;
 zfs_sort_column_t *VAR_11 = (zfs_sort_column_t *)VAR_8;
 zfs_sort_column_t *VAR_12;

 for (VAR_12 = VAR_11; VAR_12 != ((void*)0); VAR_12 = VAR_12->sc_next) {
  char VAR_13[VAR_2], VAR_14[VAR_2];
  char *VAR_15, *VAR_16;
  uint64_t VAR_17, VAR_18;
  boolean_t VAR_19, VAR_20;
  int VAR_21 = 0;






  VAR_15 = VAR_16 = ((void*)0);
  if (VAR_12->sc_prop == VAR_4) {
   nvlist_t *VAR_22, *VAR_23;
   nvlist_t *VAR_24, *VAR_25;

   VAR_22 = FUNC_8(VAR_9);
   VAR_23 = FUNC_8(VAR_10);

   VAR_19 = (FUNC_0(VAR_22,
       VAR_12->sc_user_prop, &VAR_24) == 0);
   VAR_20 = (FUNC_0(VAR_23,
       VAR_12->sc_user_prop, &VAR_25) == 0);

   if (VAR_19)
    FUNC_4(FUNC_1(VAR_24,
        VAR_5, &VAR_15) == 0);
   if (VAR_20)
    FUNC_4(FUNC_1(VAR_25,
        VAR_5, &VAR_16) == 0);
  } else if (VAR_12->sc_prop == VAR_3) {
   VAR_19 = VAR_20 = VAR_1;

   (void) FUNC_3(VAR_13, FUNC_6(VAR_9), sizeof (VAR_13));
   (void) FUNC_3(VAR_14, FUNC_6(VAR_10), sizeof (VAR_14));

   VAR_15 = VAR_13;
   VAR_16 = VAR_14;
  } else if (FUNC_11(VAR_12->sc_prop)) {
   VAR_19 = (FUNC_9(VAR_9, VAR_12->sc_prop, VAR_13,
       sizeof (VAR_13), ((void*)0), ((void*)0), 0, VAR_1) == 0);
   VAR_20 = (FUNC_9(VAR_10, VAR_12->sc_prop, VAR_14,
       sizeof (VAR_14), ((void*)0), ((void*)0), 0, VAR_1) == 0);

   VAR_15 = VAR_13;
   VAR_16 = VAR_14;
  } else {
   VAR_19 = FUNC_12(VAR_12->sc_prop,
       FUNC_7(VAR_9), VAR_0);
   VAR_20 = FUNC_12(VAR_12->sc_prop,
       FUNC_7(VAR_10), VAR_0);

   if (VAR_19)
    (void) FUNC_10(VAR_9, VAR_12->sc_prop,
        &VAR_17, ((void*)0), ((void*)0), 0);
   if (VAR_20)
    (void) FUNC_10(VAR_10, VAR_12->sc_prop,
        &VAR_18, ((void*)0), ((void*)0), 0);
  }

  if (!VAR_19 && !VAR_20)
   continue;
  else if (!VAR_19)
   return (1);
  else if (!VAR_20)
   return (-1);

  if (VAR_15)
   VAR_21 = FUNC_2(VAR_15, VAR_16);
  else if (VAR_17 < VAR_18)
   VAR_21 = -1;
  else if (VAR_17 > VAR_18)
   VAR_21 = 1;

  if (VAR_21 != 0) {
   if (VAR_12->sc_reverse == VAR_1)
    VAR_21 = (VAR_21 < 0) ? 1 : -1;
   return (VAR_21);
  }
 }

 return (FUNC_5(VAR_6, VAR_7, ((void*)0)));
}
