
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_6__ {int* aes_ivs; int aes_ctx; int b_generate_iv; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
typedef scalar_t__ gcry_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_5( sout_access_out_t *VAR_2, uint32_t VAR_3 )
{
    sout_access_out_sys_t *VAR_4 = VAR_2->p_sys;

    if( !VAR_4->b_generate_iv )
    {

        FUNC_3( VAR_4->aes_ivs, 0, 16 * sizeof(uint8_t));
        VAR_4->aes_ivs[15] = VAR_3 & 0xff;
        VAR_4->aes_ivs[14] = (VAR_3 >> 8 ) & 0xff;
        VAR_4->aes_ivs[13] = (VAR_3 >> 16 ) & 0xff;
        VAR_4->aes_ivs[12] = (VAR_3 >> 24 ) & 0xff;
    }

    gcry_error_t VAR_5 = FUNC_1( VAR_4->aes_ctx,
                                          VAR_4->aes_ivs, 16);
    if( VAR_5 )
    {
        FUNC_4(VAR_2, "Setting AES IVs failed: %s", FUNC_2(VAR_5) );
        FUNC_0( VAR_4->aes_ctx);
        return VAR_0;
    }
    return VAR_1;
}
