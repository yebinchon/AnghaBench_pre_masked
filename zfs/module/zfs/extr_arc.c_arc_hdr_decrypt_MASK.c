
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
typedef int spa_t ;
typedef int boolean_t ;
struct TYPE_21__ {scalar_t__ b_byteswap; int * b_pabd; } ;
struct TYPE_20__ {int b_rabd; int b_mac; int b_iv; int b_salt; int b_ot; } ;
struct TYPE_22__ {TYPE_2__ b_l1hdr; TYPE_1__ b_crypt_hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;
typedef int abd_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 void* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,void*,int ) ;
 int FUNC_10 (int *,void*,int ) ;
 int FUNC_11 (TYPE_3__*,int *,int ,TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int *,int ,TYPE_3__*) ;
 int * FUNC_13 (TYPE_3__*,int ,TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int,int *,int const*,int ,int,int,int ,int ,int ,int ,int *,int ,int*) ;
 int FUNC_18 (scalar_t__,int *,void*,int ,int ) ;

__attribute__((used)) static int
FUNC_19(arc_buf_hdr_t *VAR_3, spa_t *VAR_4, const zbookmark_phys_t *VAR_5)
{
 int VAR_6;
 abd_t *VAR_7 = ((void*)0);
 void *VAR_8 = ((void*)0);
 boolean_t VAR_9 = VAR_0;
 boolean_t VAR_10 = (VAR_3->b_l1hdr.b_byteswap != VAR_1);

 FUNC_0(FUNC_2(VAR_3));
 FUNC_0(FUNC_3(VAR_3));

 FUNC_14(VAR_3, VAR_0);

 VAR_6 = FUNC_17(VAR_0, VAR_4, VAR_5, VAR_3->b_crypt_hdr.b_ot,
     VAR_0, VAR_10, VAR_3->b_crypt_hdr.b_salt, VAR_3->b_crypt_hdr.b_iv,
     VAR_3->b_crypt_hdr.b_mac, FUNC_6(VAR_3), VAR_3->b_l1hdr.b_pabd,
     VAR_3->b_crypt_hdr.b_rabd, &VAR_9);
 if (VAR_6 != 0)
  goto error;

 if (VAR_9) {
  FUNC_8(VAR_3->b_l1hdr.b_pabd, VAR_3->b_crypt_hdr.b_rabd,
      FUNC_6(VAR_3));
 }






 if (FUNC_4(VAR_3) != VAR_2 &&
     !FUNC_1(VAR_3)) {






  VAR_7 = FUNC_13(VAR_3, FUNC_16(VAR_3), VAR_3);
  VAR_8 = FUNC_7(VAR_7, FUNC_16(VAR_3));

  VAR_6 = FUNC_18(FUNC_4(VAR_3),
      VAR_3->b_l1hdr.b_pabd, VAR_8, FUNC_6(VAR_3),
      FUNC_5(VAR_3));
  if (VAR_6 != 0) {
   FUNC_9(VAR_7, VAR_8, FUNC_16(VAR_3));
   goto error;
  }

  FUNC_10(VAR_7, VAR_8, FUNC_16(VAR_3));
  FUNC_11(VAR_3, VAR_3->b_l1hdr.b_pabd,
      FUNC_16(VAR_3), VAR_3);
  VAR_3->b_l1hdr.b_pabd = VAR_7;
 }

 return (0);

error:
 FUNC_15(VAR_3, VAR_0);
 if (VAR_7 != ((void*)0))
  FUNC_12(VAR_3, VAR_7, FUNC_16(VAR_3), VAR_3);

 return (VAR_6);
}
