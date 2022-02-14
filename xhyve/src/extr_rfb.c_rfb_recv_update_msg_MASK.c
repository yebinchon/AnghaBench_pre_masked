
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int updt_msg ;
typedef int uint8_t ;
struct rfb_updt_msg {scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; } ;
struct rfb_softc {scalar_t__ width; scalar_t__ height; scalar_t__ enc_resize_ok; } ;
struct bhyvegc_image {scalar_t__ width; scalar_t__ height; } ;


 struct bhyvegc_image* FUNC_0 () ;
 int FUNC_1 () ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rfb_softc*,int) ;
 int FUNC_4 (struct rfb_softc*,int,int) ;
 int FUNC_5 (int,int *,int) ;

__attribute__((used)) static void
FUNC_6(struct rfb_softc *VAR_0, int VAR_1, int VAR_2)
{
 struct rfb_updt_msg VAR_3;
 struct bhyvegc_image *VAR_4;

 (void)FUNC_5(VAR_1, ((uint8_t *)&VAR_3) + 1 , sizeof(VAR_3) - 1);

 FUNC_1();
 VAR_4 = FUNC_0();

 VAR_3.x = FUNC_2(VAR_3.x);
 VAR_3.y = FUNC_2(VAR_3.y);
 VAR_3.width = FUNC_2(VAR_3.width);
 VAR_3.height = FUNC_2(VAR_3.height);

 if (VAR_3.width != VAR_4->width ||
     VAR_3.height != VAR_4->height) {
  VAR_0->width = VAR_4->width;
  VAR_0->height = VAR_4->height;
  if (VAR_0->enc_resize_ok)
   FUNC_3(VAR_0, VAR_1);
 }

 if (VAR_2)
  return;

 FUNC_4(VAR_0, VAR_1, 1);
}
