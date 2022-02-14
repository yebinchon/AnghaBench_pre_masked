
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_15__ {int b_byteswap; int * b_pabd; } ;
struct TYPE_14__ {int * b_rabd; } ;
struct TYPE_16__ {TYPE_2__ b_l1hdr; TYPE_1__ b_crypt_hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int *,int ,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_12(arc_buf_hdr_t *VAR_5, boolean_t VAR_6)
{
 uint64_t VAR_7 = (VAR_6) ? FUNC_4(VAR_5) : FUNC_11(VAR_5);

 FUNC_2(FUNC_5(VAR_5));
 FUNC_2(VAR_5->b_l1hdr.b_pabd != ((void*)0) || FUNC_6(VAR_5));
 FUNC_8(VAR_6, FUNC_6(VAR_5));







 if (FUNC_7(VAR_5)) {
  FUNC_10(VAR_5, VAR_6);
  FUNC_0(VAR_2);
 } else if (VAR_6) {
  FUNC_9(VAR_5, VAR_5->b_crypt_hdr.b_rabd, VAR_7, VAR_5);
 } else {
  FUNC_9(VAR_5, VAR_5->b_l1hdr.b_pabd, VAR_7, VAR_5);
 }

 if (VAR_6) {
  VAR_5->b_crypt_hdr.b_rabd = ((void*)0);
  FUNC_1(VAR_3, -VAR_7);
 } else {
  VAR_5->b_l1hdr.b_pabd = ((void*)0);
 }

 if (VAR_5->b_l1hdr.b_pabd == ((void*)0) && !FUNC_6(VAR_5))
  VAR_5->b_l1hdr.b_byteswap = VAR_0;

 FUNC_1(VAR_1, -VAR_7);
 FUNC_1(VAR_4, -FUNC_3(VAR_5));
}
