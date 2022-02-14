
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_keyformat_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int *,size_t,scalar_t__,int **) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,scalar_t__,char*,char const*,int **,size_t*,int *) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(libzfs_handle_t *VAR_9,
    zfs_handle_t *VAR_10, boolean_t VAR_11, zfs_keyformat_t VAR_12,
    char *VAR_13, nvlist_t *VAR_14, uint8_t **VAR_15, uint_t *VAR_16)
{
 int VAR_17;
 uint64_t VAR_18 = 0, VAR_19 = 0;
 uint8_t *VAR_20 = ((void*)0);
 size_t VAR_21 = 0;
 uint8_t *VAR_22 = ((void*)0);
 const char *VAR_23 = (VAR_10) ? FUNC_8(VAR_10) : ((void*)0);


 VAR_17 = FUNC_3(VAR_9, VAR_0, VAR_11, VAR_12, VAR_13,
     VAR_23, &VAR_20, &VAR_21, ((void*)0));
 if (VAR_17 != 0)
  goto error;


 if (VAR_12 == VAR_6) {

  VAR_17 = FUNC_6((uint8_t *)&VAR_19, sizeof (uint64_t));
  if (VAR_17 != sizeof (uint64_t)) {
   FUNC_7(VAR_9, FUNC_1(VAR_4,
       "Failed to generate salt."));
   goto error;
  }

  VAR_17 = FUNC_4(VAR_14,
      FUNC_9(VAR_8), VAR_19);
  if (VAR_17 != 0) {
   FUNC_7(VAR_9, FUNC_1(VAR_4,
       "Failed to add salt to properties."));
   goto error;
  }







  VAR_17 = FUNC_5(VAR_14,
      FUNC_9(VAR_7), &VAR_18);
  if (VAR_17 == VAR_3) {
   VAR_18 = VAR_1;
   VAR_17 = FUNC_4(VAR_14,
       FUNC_9(VAR_7), VAR_18);
   if (VAR_17 != 0)
    goto error;
  } else if (VAR_17 != 0) {
   FUNC_7(VAR_9, FUNC_1(VAR_4,
       "Failed to get pbkdf2 iterations."));
   goto error;
  }
 } else {

  VAR_17 = FUNC_5(VAR_14,
      FUNC_9(VAR_7), &VAR_18);
  if (VAR_17 == 0) {
   VAR_17 = VAR_2;
   FUNC_7(VAR_9, FUNC_1(VAR_4,
       "Cannot specify pbkdf2iters with a non-passphrase "
       "keyformat."));
   goto error;
  }
 }


 VAR_17 = FUNC_0(VAR_9, VAR_12, VAR_18, VAR_20, VAR_21,
     VAR_19, &VAR_22);
 if (VAR_17 != 0)
  goto error;

 FUNC_2(VAR_20);

 *VAR_15 = VAR_22;
 *VAR_16 = VAR_5;
 return (0);

error:
 if (VAR_20 != ((void*)0))
  FUNC_2(VAR_20);
 if (VAR_22 != ((void*)0))
  FUNC_2(VAR_22);

 *VAR_15 = ((void*)0);
 *VAR_16 = 0;
 return (VAR_17);
}
