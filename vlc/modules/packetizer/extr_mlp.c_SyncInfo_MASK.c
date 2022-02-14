
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {unsigned int i_substreams; } ;
typedef TYPE_1__ mlp_header_t ;


 int MlpParse (TYPE_1__*,int const*) ;
 int memcmp (int const*,int ,int) ;
 int pu_start_code ;

__attribute__((used)) static int SyncInfo( const uint8_t *p_hdr, bool *pb_mlp, mlp_header_t *p_mlp )
{

    const bool b_has_sync = !memcmp( &p_hdr[4], pu_start_code, 3 );


    if( !b_has_sync && !*pb_mlp )
        return 0;


    if( b_has_sync )
    {
        *pb_mlp = !MlpParse( p_mlp, &p_hdr[4] );

        if( !*pb_mlp )
            return 0;
    }

    if( !b_has_sync )
    {
        int i_tmp = 0 ^ p_hdr[0] ^ p_hdr[1] ^ p_hdr[2] ^ p_hdr[3];
        const uint8_t *p = &p_hdr[4];

        for( unsigned i = 0; i < p_mlp->i_substreams; i++ )
        {
            i_tmp ^= *p++;
            i_tmp ^= *p++;
            if( p[-2] & 0x80 )
            {
                i_tmp ^= *p++;
                i_tmp ^= *p++;
            }
        }
        i_tmp = ( i_tmp >> 4 ) ^ i_tmp;

        if( ( i_tmp & 0x0f ) != 0x0f )
            return 0;
    }


    const int i_word = ( ( p_hdr[0] << 8 ) | p_hdr[1] ) & 0xfff;
    return i_word * 2;
}
