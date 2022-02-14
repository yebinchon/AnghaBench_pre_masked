
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rfb_softc {int enc_raw_ok; int enc_zlib_ok; int enc_resize_ok; int zstream; } ;
struct rfb_enc_msg {int numencs; } ;
typedef int encoding ;
typedef int enc_msg ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *,int) ;

__attribute__((used)) static void
FUNC_5(struct rfb_softc *VAR_1, int VAR_2)
{
 struct rfb_enc_msg VAR_3;
 int VAR_4;
 uint32_t VAR_5;

 FUNC_0((sizeof(VAR_3) - 1) == 3);
 (void)FUNC_4(VAR_2, ((uint8_t *)&VAR_3)+1, sizeof(VAR_3)-1);

 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_3.numencs); VAR_4++) {
  (void)FUNC_4(VAR_2, &VAR_5, sizeof(VAR_5));
  switch (FUNC_2(VAR_5)) {
  case 130:
   VAR_1->enc_raw_ok = 1;
   break;
  case 128:
   VAR_1->enc_zlib_ok = 1;
   FUNC_1(&VAR_1->zstream, VAR_0);
   break;
  case 129:
   VAR_1->enc_resize_ok = 1;
   break;
  }
 }
}
