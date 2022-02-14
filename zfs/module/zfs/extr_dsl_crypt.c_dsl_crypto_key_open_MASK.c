
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_10__ {int wk_key; } ;
typedef TYPE_1__ dsl_wrapping_key_t ;
struct TYPE_11__ {int dck_holds; int dck_obj; TYPE_1__* dck_wkey; int dck_key; } ;
typedef TYPE_2__ dsl_crypto_key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int ,int,int,int *) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int ,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_9(objset_t *VAR_14, dsl_wrapping_key_t *VAR_15,
    uint64_t VAR_16, void *VAR_17, dsl_crypto_key_t **VAR_18)
{
 int VAR_19;
 uint64_t VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 uint8_t VAR_23[VAR_10];
 uint8_t VAR_24[VAR_11];
 uint8_t VAR_25[VAR_12];
 uint8_t VAR_26[VAR_13];
 dsl_crypto_key_t *VAR_27;


 VAR_27 = FUNC_4(sizeof (dsl_crypto_key_t), VAR_9);
 if (!VAR_27)
  return (FUNC_0(VAR_8));


 VAR_19 = FUNC_5(VAR_14, VAR_16, VAR_0, 8, 1,
     &VAR_20);
 if (VAR_19 != 0)
  goto error;

 VAR_19 = FUNC_5(VAR_14, VAR_16, VAR_1, 8, 1, &VAR_21);
 if (VAR_19 != 0)
  goto error;

 VAR_19 = FUNC_5(VAR_14, VAR_16, VAR_5, 1,
     VAR_10, VAR_23);
 if (VAR_19 != 0)
  goto error;

 VAR_19 = FUNC_5(VAR_14, VAR_16, VAR_2, 1,
     VAR_11, VAR_24);
 if (VAR_19 != 0)
  goto error;

 VAR_19 = FUNC_5(VAR_14, VAR_16, VAR_3, 1, VAR_12,
     VAR_25);
 if (VAR_19 != 0)
  goto error;

 VAR_19 = FUNC_5(VAR_14, VAR_16, VAR_4, 1, VAR_13,
     VAR_26);
 if (VAR_19 != 0)
  goto error;


 (void) FUNC_5(VAR_14, VAR_16, VAR_6, 8, 1, &VAR_22);





 VAR_19 = FUNC_8(&VAR_15->wk_key, VAR_20, VAR_22, VAR_21,
     VAR_23, VAR_24, VAR_25, VAR_26, &VAR_27->dck_key);
 if (VAR_19 != 0) {
  VAR_19 = FUNC_0(VAR_7);
  goto error;
 }


 FUNC_7(&VAR_27->dck_holds);
 FUNC_2(VAR_15, VAR_27);
 VAR_27->dck_wkey = VAR_15;
 VAR_27->dck_obj = VAR_16;
 FUNC_6(&VAR_27->dck_holds, VAR_17);

 *VAR_18 = VAR_27;
 return (0);

error:
 if (VAR_27 != ((void*)0)) {
  FUNC_1(VAR_27, sizeof (dsl_crypto_key_t));
  FUNC_3(VAR_27, sizeof (dsl_crypto_key_t));
 }

 *VAR_18 = ((void*)0);
 return (VAR_19);
}
