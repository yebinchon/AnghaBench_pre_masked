
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pl_prop; scalar_t__ pl_width; scalar_t__ pl_recvd_width; int * pl_user_prop; scalar_t__ pl_fixed; struct TYPE_11__* pl_next; scalar_t__ pl_all; } ;
typedef TYPE_1__ zprop_list_t ;
struct TYPE_12__ {int * zfs_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int buf ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *,int **) ;
 scalar_t__ FUNC_2 (int *,int ,char**) ;
 int * FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (int *,int) ;
 int * FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,scalar_t__,char*,int,int *,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *,char*,int,scalar_t__) ;
 int * FUNC_12 (scalar_t__) ;
 int * FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 (int *,TYPE_1__**,int ) ;

int
FUNC_15(zfs_handle_t *VAR_5, zprop_list_t **VAR_6, boolean_t VAR_7,
    boolean_t VAR_8)
{
 libzfs_handle_t *VAR_9 = VAR_5->zfs_hdl;
 zprop_list_t *VAR_10;
 zprop_list_t **VAR_11, **VAR_12;
 nvlist_t *VAR_13, *VAR_14;
 nvpair_t *VAR_15;
 char *VAR_16;
 char VAR_17[VAR_1];

 if (FUNC_14(VAR_9, VAR_6, VAR_2) != 0)
  return (-1);

 VAR_13 = FUNC_9(VAR_5);

 VAR_10 = *VAR_6;
 if (VAR_10->pl_all && FUNC_3(VAR_13, ((void*)0)) != ((void*)0)) {





  VAR_12 = VAR_6;
  while (*VAR_12 != ((void*)0)) {
   if ((*VAR_12)->pl_prop == VAR_3)
    break;
   VAR_12 = &(*VAR_12)->pl_next;
  }

  VAR_15 = ((void*)0);
  while ((VAR_15 = FUNC_3(VAR_13, VAR_15)) != ((void*)0)) {



   for (VAR_11 = VAR_12; *VAR_11 != ((void*)0);
       VAR_11 = &(*VAR_11)->pl_next) {
    if (FUNC_5((*VAR_11)->pl_user_prop,
        FUNC_4(VAR_15)) == 0)
     break;
   }

   if (*VAR_11 == ((void*)0)) {
    if ((VAR_10 = FUNC_8(VAR_9,
        sizeof (zprop_list_t))) == ((void*)0) ||
        ((VAR_10->pl_user_prop = FUNC_13(VAR_9,
        FUNC_4(VAR_15)))) == ((void*)0)) {
     FUNC_0(VAR_10);
     return (-1);
    }

    VAR_10->pl_prop = VAR_3;
    VAR_10->pl_width = FUNC_6(FUNC_4(VAR_15));
    VAR_10->pl_all = VAR_0;
    *VAR_11 = VAR_10;
   }
  }
 }




 for (VAR_10 = *VAR_6; VAR_10 != ((void*)0); VAR_10 = VAR_10->pl_next) {
  if (VAR_10->pl_fixed && !VAR_8)
   continue;

  if (VAR_10->pl_prop != VAR_3) {
   if (FUNC_10(VAR_5, VAR_10->pl_prop,
       VAR_17, sizeof (VAR_17), ((void*)0), ((void*)0), 0, VAR_8) == 0) {
    if (FUNC_6(VAR_17) > VAR_10->pl_width)
     VAR_10->pl_width = FUNC_6(VAR_17);
   }
   if (VAR_7 && FUNC_11(VAR_5,
       FUNC_12(VAR_10->pl_prop),
       VAR_17, sizeof (VAR_17), VAR_8) == 0)
    if (FUNC_6(VAR_17) > VAR_10->pl_recvd_width)
     VAR_10->pl_recvd_width = FUNC_6(VAR_17);
  } else {
   if (FUNC_1(VAR_13, VAR_10->pl_user_prop,
       &VAR_14) == 0) {
    FUNC_7(FUNC_2(VAR_14,
        VAR_4, &VAR_16) == 0);
    if (FUNC_6(VAR_16) > VAR_10->pl_width)
     VAR_10->pl_width = FUNC_6(VAR_16);
   }
   if (VAR_7 && FUNC_11(VAR_5,
       VAR_10->pl_user_prop,
       VAR_17, sizeof (VAR_17), VAR_8) == 0)
    if (FUNC_6(VAR_17) > VAR_10->pl_recvd_width)
     VAR_10->pl_recvd_width = FUNC_6(VAR_17);
  }
 }

 return (0);
}
