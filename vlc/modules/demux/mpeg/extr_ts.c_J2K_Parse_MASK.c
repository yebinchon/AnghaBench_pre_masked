
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int demux_t ;
struct TYPE_5__ {int i_buffer; int * p_buffer; int i_length; } ;
typedef TYPE_1__ block_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int const*,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static block_t *FUNC_5( demux_t *VAR_0, block_t *VAR_1, bool VAR_2 )
{
    const uint8_t *VAR_3 = VAR_1->p_buffer;

    if( VAR_1->i_buffer < ((VAR_2) ? 48 : 38) )
        goto invalid;

    if( FUNC_2( VAR_3, "elsmfrat", 8 ) )
        goto invalid;

    uint16_t VAR_4 = FUNC_0( &VAR_3[8] );
    uint16_t VAR_5 = FUNC_0( &VAR_3[10] );
    if( VAR_4 == 0 )
        goto invalid;
    VAR_1->i_length = FUNC_4( VAR_4, VAR_5 );

    VAR_1->p_buffer += (VAR_2) ? 48 : 38;
    VAR_1->i_buffer -= (VAR_2) ? 48 : 38;

    return VAR_1;

invalid:
    FUNC_3( VAR_0, "invalid J2K header, dropping codestream" );
    FUNC_1( VAR_1 );
    return ((void*)0);
}
