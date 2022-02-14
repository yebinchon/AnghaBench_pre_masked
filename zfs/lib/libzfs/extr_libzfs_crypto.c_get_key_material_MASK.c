
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_keylocation_t ;
typedef int zfs_keyformat_t ;
typedef scalar_t__ uint8_t ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;



 int VAR_7 ;


 int FUNC_0 (int ,char*) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int *,char const*,int,scalar_t__,scalar_t__,scalar_t__**,size_t*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char) ;
 scalar_t__ FUNC_8 (char*,char*,size_t) ;
 int * VAR_9 ;
 int FUNC_9 (int *,int ,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(libzfs_handle_t *VAR_10, boolean_t VAR_11, boolean_t VAR_12,
    zfs_keyformat_t VAR_13, char *VAR_14, const char *VAR_15,
    uint8_t **VAR_16, size_t *VAR_17, boolean_t *VAR_18)
{
 int VAR_19, VAR_20;
 zfs_keylocation_t VAR_21 = VAR_7;
 FILE *VAR_22 = ((void*)0);
 uint8_t *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
 size_t VAR_25, VAR_26;
 boolean_t VAR_27 = VAR_0;


 VAR_21 = FUNC_10(VAR_14);


 switch (VAR_21) {
 case 129:
  VAR_22 = VAR_9;
  if (FUNC_6(FUNC_2(VAR_22))) {
   VAR_27 = VAR_1;


   if (VAR_13 == 130) {
    VAR_19 = VAR_2;
    FUNC_9(VAR_10, FUNC_0(VAR_5,
        "Cannot enter raw keys on the terminal"));
    goto error;
   }
  }
  break;
 case 128:
  VAR_22 = FUNC_3(&VAR_14[7], "r");
  if (!VAR_22) {
   VAR_19 = VAR_8;
   VAR_8 = 0;
   FUNC_9(VAR_10, FUNC_0(VAR_5,
       "Failed to open key material file"));
   goto error;
  }
  break;
 default:
  VAR_19 = VAR_2;
  FUNC_9(VAR_10, FUNC_0(VAR_5,
      "Invalid keylocation."));
  goto error;
 }


 VAR_19 = FUNC_5(VAR_22, VAR_15, VAR_13, VAR_0, VAR_12,
     &VAR_23, &VAR_25);
 if (VAR_19 != 0)
  goto error;


 switch (VAR_13) {
 case 130:

  if (VAR_25 < VAR_6) {
   VAR_19 = VAR_2;
   FUNC_9(VAR_10, FUNC_0(VAR_5,
       "Raw key too short (expected %u)."),
       VAR_6);
   goto error;
  }

  if (VAR_25 > VAR_6) {
   VAR_19 = VAR_2;
   FUNC_9(VAR_10, FUNC_0(VAR_5,
       "Raw key too long (expected %u)."),
       VAR_6);
   goto error;
  }
  break;
 case 132:

  if (VAR_25 < VAR_6 * 2) {
   VAR_19 = VAR_2;
   FUNC_9(VAR_10, FUNC_0(VAR_5,
       "Hex key too short (expected %u)."),
       VAR_6 * 2);
   goto error;
  }

  if (VAR_25 > VAR_6 * 2) {
   VAR_19 = VAR_2;
   FUNC_9(VAR_10, FUNC_0(VAR_5,
       "Hex key too long (expected %u)."),
       VAR_6 * 2);
   goto error;
  }


  for (VAR_20 = 0; VAR_20 < VAR_6 * 2; VAR_20++) {
   if (!FUNC_7((char)VAR_23[VAR_20])) {
    VAR_19 = VAR_2;
    FUNC_9(VAR_10, FUNC_0(VAR_5,
        "Invalid hex character detected."));
    goto error;
   }
  }
  break;
 case 131:

  if (VAR_25 > VAR_3) {
   VAR_19 = VAR_2;
   FUNC_9(VAR_10, FUNC_0(VAR_5,
       "Passphrase too long (max %u)."),
       VAR_3);
   goto error;
  }

  if (VAR_25 < VAR_4) {
   VAR_19 = VAR_2;
   FUNC_9(VAR_10, FUNC_0(VAR_5,
       "Passphrase too short (min %u)."),
       VAR_4);
   goto error;
  }
  break;
 default:

  break;
 }

 if (VAR_11 && FUNC_6(FUNC_2(VAR_22))) {
  VAR_19 = FUNC_5(VAR_22, VAR_15, VAR_13, VAR_1,
      VAR_12, &VAR_24, &VAR_26);
  if (VAR_19 != 0)
   goto error;

  if (VAR_26 != VAR_25 ||
      (FUNC_8((char *)VAR_23, (char *)VAR_24, VAR_25) != 0)) {
   VAR_19 = VAR_2;
   FUNC_9(VAR_10, FUNC_0(VAR_5,
       "Provided keys do not match."));
   goto error;
  }
 }

 if (VAR_22 != VAR_9)
  FUNC_1(VAR_22);

 if (VAR_24 != ((void*)0))
  FUNC_4(VAR_24);

 *VAR_16 = VAR_23;
 *VAR_17 = VAR_25;
 if (VAR_18 != ((void*)0))
  *VAR_18 = VAR_27;

 return (0);

error:
 if (VAR_23 != ((void*)0))
  FUNC_4(VAR_23);

 if (VAR_24 != ((void*)0))
  FUNC_4(VAR_24);

 if (VAR_22 != ((void*)0) && VAR_22 != VAR_9)
  FUNC_1(VAR_22);

 *VAR_16 = ((void*)0);
 *VAR_17 = 0;
 if (VAR_18 != ((void*)0))
  *VAR_18 = VAR_27;

 return (VAR_19);
}
