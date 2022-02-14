
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int dsl_wrapping_key_t ;
struct TYPE_5__ {scalar_t__ cp_cmd; scalar_t__ cp_crypt; int * cp_wkey; int cp_keylocation; } ;
typedef TYPE_1__ dsl_crypto_params_t ;
typedef void* dcp_cmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,scalar_t__,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,char**) ;
 int FUNC_6 (int *,int ,scalar_t__*) ;
 int FUNC_7 (int *,char*,int **,scalar_t__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;

int
FUNC_12(dcp_cmd_t VAR_17, nvlist_t *VAR_18,
    nvlist_t *VAR_19, dsl_crypto_params_t **VAR_20)
{
 int VAR_21;
 uint64_t VAR_22 = VAR_14;
 uint64_t VAR_23 = VAR_7;
 uint64_t VAR_24 = 0, VAR_25 = 0;
 dsl_crypto_params_t *VAR_26 = ((void*)0);
 dsl_wrapping_key_t *VAR_27 = ((void*)0);
 uint8_t *VAR_28 = ((void*)0);
 uint_t VAR_29 = 0;
 char *VAR_30 = ((void*)0);

 VAR_26 = FUNC_4(sizeof (dsl_crypto_params_t), VAR_4);
 if (!VAR_26) {
  VAR_21 = FUNC_0(VAR_3);
  goto error;
 }

 VAR_26->cp_cmd = VAR_17;


 if (VAR_18 != ((void*)0)) {
  (void) FUNC_6(VAR_18,
      FUNC_10(VAR_8), &VAR_22);
  (void) FUNC_6(VAR_18,
      FUNC_10(VAR_9), &VAR_23);
  (void) FUNC_5(VAR_18,
      FUNC_10(VAR_10), &VAR_30);
  (void) FUNC_6(VAR_18,
      FUNC_10(VAR_12), &VAR_24);
  (void) FUNC_6(VAR_18,
      FUNC_10(VAR_11), &VAR_25);

  VAR_26->cp_crypt = VAR_22;
 }

 if (VAR_19 != ((void*)0)) {
  (void) FUNC_7(VAR_19, "wkeydata",
      &VAR_28, &VAR_29);
 }


 if (VAR_26->cp_cmd >= VAR_1) {
  VAR_21 = FUNC_0(VAR_2);
  goto error;
 } else {
  VAR_26->cp_cmd = VAR_17;
 }


 if (VAR_26->cp_crypt >= VAR_13) {
  VAR_21 = FUNC_0(VAR_2);
  goto error;
 } else {
  VAR_26->cp_crypt = VAR_22;
 }


 if (VAR_23 >= VAR_6) {
  VAR_21 = FUNC_0(VAR_2);
  goto error;
 }


 if (VAR_30 != ((void*)0)) {
  if (!FUNC_11(VAR_30, VAR_0)) {
   VAR_21 = FUNC_0(VAR_2);
   goto error;
  }

  VAR_26->cp_keylocation = FUNC_9(VAR_30);
 }


 if (VAR_28 != ((void*)0) && VAR_29 != VAR_5) {
  VAR_21 = FUNC_0(VAR_2);
  goto error;
 }


 if (VAR_26->cp_crypt == VAR_15)
  VAR_26->cp_crypt = VAR_16;


 if (VAR_28 != ((void*)0)) {

  VAR_21 = FUNC_1(VAR_28, VAR_23, VAR_24,
      VAR_25, &VAR_27);
  if (VAR_21 != 0)
   goto error;

  VAR_26->cp_wkey = VAR_27;
 }





 (void) FUNC_8(VAR_18, FUNC_10(VAR_8));
 (void) FUNC_8(VAR_18, FUNC_10(VAR_9));
 (void) FUNC_8(VAR_18, FUNC_10(VAR_12));
 (void) FUNC_8(VAR_18,
     FUNC_10(VAR_11));

 *VAR_20 = VAR_26;

 return (0);

error:
 if (VAR_27 != ((void*)0))
  FUNC_2(VAR_27);
 if (VAR_26 != ((void*)0))
  FUNC_3(VAR_26, sizeof (dsl_crypto_params_t));

 *VAR_20 = ((void*)0);
 return (VAR_21);
}
