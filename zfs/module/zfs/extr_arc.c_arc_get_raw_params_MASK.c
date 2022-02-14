
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int boolean_t ;
struct TYPE_9__ {TYPE_4__* b_hdr; } ;
typedef TYPE_3__ arc_buf_t ;
struct TYPE_7__ {scalar_t__ b_byteswap; } ;
struct TYPE_8__ {int b_mac; int b_iv; int b_salt; } ;
struct TYPE_10__ {TYPE_1__ b_l1hdr; TYPE_2__ b_crypt_hdr; } ;
typedef TYPE_4__ arc_buf_hdr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ) ;

void
FUNC_3(arc_buf_t *VAR_5, boolean_t *VAR_6, uint8_t *VAR_7,
    uint8_t *VAR_8, uint8_t *VAR_9)
{
 arc_buf_hdr_t *VAR_10 = VAR_5->b_hdr;

 FUNC_0(FUNC_1(VAR_10));

 FUNC_2(VAR_10->b_crypt_hdr.b_salt, VAR_7, VAR_4);
 FUNC_2(VAR_10->b_crypt_hdr.b_iv, VAR_8, VAR_2);
 FUNC_2(VAR_10->b_crypt_hdr.b_mac, VAR_9, VAR_3);
 *VAR_6 = (VAR_10->b_l1hdr.b_byteswap == VAR_0) ?
     VAR_1 : !VAR_1;
}
