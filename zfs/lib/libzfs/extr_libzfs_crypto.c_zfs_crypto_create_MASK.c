
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zpool_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,char**) ;
 int FUNC_7 (int *,int ,scalar_t__*) ;
 int FUNC_8 (int *,int *,int ,scalar_t__,char*,int *,int **,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char*,int,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (int ) ;

int
FUNC_16(libzfs_handle_t *VAR_11, char *VAR_12, nvlist_t *VAR_13,
    nvlist_t *VAR_14, boolean_t VAR_15, uint8_t **VAR_16,
    uint_t *VAR_17)
{
 int VAR_18;
 char VAR_19[1024];
 uint64_t VAR_20 = VAR_9, VAR_21 = VAR_9;
 uint64_t VAR_22 = VAR_5;
 char *VAR_23 = ((void*)0);
 zfs_handle_t *VAR_24 = ((void*)0);
 uint8_t *VAR_25 = ((void*)0);
 uint_t VAR_26 = 0;
 boolean_t VAR_27 = VAR_1;

 (void) FUNC_10(VAR_19, sizeof (VAR_19),
     FUNC_0(VAR_4, "Encryption create error"));


 VAR_18 = FUNC_7(VAR_13,
     FUNC_15(VAR_6), &VAR_20);
 if (VAR_18 != 0)
  VAR_27 = VAR_0;


 (void) FUNC_7(VAR_13,
     FUNC_15(VAR_7), &VAR_22);
 (void) FUNC_6(VAR_13,
     FUNC_15(VAR_8), &VAR_23);

 if (VAR_12 != ((void*)0)) {

  VAR_24 = FUNC_3(VAR_11, VAR_12);
  if (VAR_24 == ((void*)0)) {
   VAR_18 = VAR_3;
   FUNC_13(VAR_11, FUNC_0(VAR_4,
       "Failed to lookup parent."));
   goto out;
  }


  VAR_21 = FUNC_14(VAR_24, VAR_6);


  if (!FUNC_1(VAR_24->zpool_hdl)) {
   if (FUNC_9(VAR_13)) {
    VAR_18 = VAR_2;
    FUNC_13(VAR_11, FUNC_0(VAR_4,
        "Encryption feature not enabled."));
    goto out;
   }

   VAR_18 = 0;
   goto out;
  }
 } else {




  if (!FUNC_5(VAR_14, "feature@encryption")) {
   if (FUNC_9(VAR_13)) {
    VAR_18 = VAR_2;
    FUNC_13(VAR_11, FUNC_0(VAR_4,
        "Encryption feature not enabled."));
    goto out;
   }

   VAR_18 = 0;
   goto out;
  }

  VAR_21 = VAR_10;
 }


 if (!VAR_27)
  VAR_20 = VAR_21;






 if (VAR_20 == VAR_10) {
  if (FUNC_9(VAR_13)) {
   VAR_18 = VAR_2;
   FUNC_13(VAR_11, FUNC_0(VAR_4,
       "Encryption must be turned on to set encryption "
       "properties."));
   goto out;
  }

  VAR_18 = 0;
  goto out;
 }







 if (VAR_21 == VAR_10 && VAR_23 == ((void*)0) &&
     VAR_22 == VAR_5) {
  VAR_18 = VAR_2;
  FUNC_13(VAR_11, FUNC_0(VAR_4,
      "Keyformat required for new encryption root."));
  goto out;
 }





 if (VAR_23 != ((void*)0) && VAR_22 == VAR_5) {
  VAR_18 = VAR_2;
  FUNC_13(VAR_11, FUNC_0(VAR_4,
      "Keyformat required for new encryption root."));
  goto out;
 }


 if (VAR_22 != VAR_5 && VAR_23 == ((void*)0)) {
  VAR_23 = "prompt";
  VAR_18 = FUNC_4(VAR_13,
      FUNC_15(VAR_8), VAR_23);
  if (VAR_18 != 0)
   goto out;
 }





 if (VAR_23 != ((void*)0)) {




  if (!VAR_15 && FUNC_11(VAR_23, "prompt") == 0) {
   VAR_18 = VAR_2;
   FUNC_13(VAR_11, FUNC_0(VAR_4, "Cannot use "
       "'prompt' keylocation because stdin is in use."));
   goto out;
  }

  VAR_18 = FUNC_8(VAR_11, ((void*)0),
      VAR_0, VAR_22, VAR_23, VAR_13, &VAR_25,
      &VAR_26);
  if (VAR_18 != 0)
   goto out;
 }

 if (VAR_24 != ((void*)0))
  FUNC_12(VAR_24);

 *VAR_16 = VAR_25;
 *VAR_17 = VAR_26;
 return (0);

out:
 if (VAR_24 != ((void*)0))
  FUNC_12(VAR_24);
 if (VAR_25 != ((void*)0))
  FUNC_2(VAR_25);

 *VAR_16 = ((void*)0);
 *VAR_17 = 0;
 return (VAR_18);
}
