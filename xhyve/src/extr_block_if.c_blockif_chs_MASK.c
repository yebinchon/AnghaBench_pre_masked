
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef long long uint16_t ;
struct blockif_ctxt {int bc_magic; long long bc_size; long long bc_sectsz; } ;
typedef long long off_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct blockif_ctxt *VAR_1, uint16_t *VAR_2, uint8_t *VAR_3, uint8_t *VAR_4)
{
 off_t VAR_5;
 off_t VAR_6;
 uint16_t VAR_7;
 uint8_t VAR_8;

 FUNC_0(VAR_1->bc_magic == ((int) VAR_0));

 VAR_5 = VAR_1->bc_size / VAR_1->bc_sectsz;


 if (VAR_5 > 65535LL*16*255)
  VAR_5 = 65535LL*16*255;

 if (VAR_5 >= 65536LL*16*63) {
  VAR_7 = 255;
  VAR_8 = 16;
  VAR_6 = VAR_5 / VAR_7;
 } else {
  VAR_7 = 17;
  VAR_6 = VAR_5 / VAR_7;
  VAR_8 = (uint8_t) ((VAR_6 + 1023) / 1024);

  if (VAR_8 < 4)
   VAR_8 = 4;

  if (VAR_6 >= (VAR_8 * 1024) || VAR_8 > 16) {
   VAR_7 = 31;
   VAR_8 = 16;
   VAR_6 = VAR_5 / VAR_7;
  }
  if (VAR_6 >= (VAR_8 * 1024)) {
   VAR_7 = 63;
   VAR_8 = 16;
   VAR_6 = VAR_5 / VAR_7;
  }
 }

 *VAR_2 = (uint16_t) (VAR_6 / VAR_8);
 *VAR_3 = VAR_8;
 *VAR_4 = (uint8_t) VAR_7;
}
