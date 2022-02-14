
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int digest_algo; } ;
typedef TYPE_1__ signature_packet_t ;
typedef int gcry_md_hd_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;

uint8_t *FUNC_4( const char *VAR_0, signature_packet_t *VAR_1 )
{
    gcry_md_hd_t VAR_2;
    if( FUNC_1( &VAR_2, VAR_1->digest_algo, 0 ) )
        return ((void*)0);

    if( FUNC_3( VAR_0, VAR_2 ) < 0 )
    {
        FUNC_0( VAR_2 );
        return ((void*)0);
    }

    return FUNC_2( VAR_2, VAR_1 );
}
