
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {void* i_dsurmod; } ;
struct vlc_a52_bitstream_info {int i_fscod; int i_frmsizcod; int i_acmod; void* i_lfeon; TYPE_1__ ac3; void* i_bsmod; void* i_bsid; } ;
typedef int bs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,size_t) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3( struct vlc_a52_bitstream_info *VAR_2,
                                                 const uint8_t *VAR_3, size_t VAR_4 )
{
    bs_t VAR_5;
    FUNC_0( &VAR_5, VAR_3, VAR_4 );


    VAR_2->i_fscod = FUNC_1( &VAR_5, 2 );
    if( VAR_2->i_fscod == 3 )
        return VAR_0;
    VAR_2->i_frmsizcod = FUNC_1( &VAR_5, 6 );
    if( VAR_2->i_frmsizcod >= 38 )
        return VAR_0;
    VAR_2->i_bsid = FUNC_1( &VAR_5, 5 );
    VAR_2->i_bsmod = FUNC_1( &VAR_5, 3 );
    VAR_2->i_acmod = FUNC_1( &VAR_5, 3 );
    if( ( VAR_2->i_acmod & 0x1 ) && ( VAR_2->i_acmod != 0x1 ) )
    {

        FUNC_2( &VAR_5, 2 );
    }
    if( VAR_2->i_acmod & 0x4 )
    {

        FUNC_2( &VAR_5, 2 );
    }

    VAR_2->ac3.i_dsurmod = VAR_2->i_acmod == 0x2 ? FUNC_1( &VAR_5, 2 ) : 0;
    VAR_2->i_lfeon = FUNC_1( &VAR_5, 1 );

    return VAR_1;
}
