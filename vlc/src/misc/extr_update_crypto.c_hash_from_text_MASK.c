
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ type; int digest_algo; } ;
typedef TYPE_1__ signature_packet_t ;
typedef int gcry_md_hd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int * FUNC_3 (int ,TYPE_1__*) ;
 size_t FUNC_4 (char const*,char*) ;
 size_t FUNC_5 (char const*) ;

uint8_t *FUNC_6( const char *VAR_1,
        signature_packet_t *VAR_2 )
{
    gcry_md_hd_t VAR_3;
    if( FUNC_0( &VAR_3, VAR_2->digest_algo, 0 ) )
        return ((void*)0);

    if( VAR_2->type == VAR_0 )
    while( *VAR_1 )
    {
        size_t VAR_4 = FUNC_4( VAR_1, "\r\n" );

        if( VAR_4 )
        {
            FUNC_2( VAR_3, VAR_1, VAR_4 );
            VAR_1 += VAR_4;
        }
        FUNC_1( VAR_3, '\r' );
        FUNC_1( VAR_3, '\n' );

        if( *VAR_1 == '\r' )
            VAR_1++;
        if( *VAR_1 == '\n' )
            VAR_1++;
    }
    else
        FUNC_2( VAR_3, VAR_1, FUNC_5( VAR_1 ) );

    return FUNC_3( VAR_3, VAR_2 );
}
