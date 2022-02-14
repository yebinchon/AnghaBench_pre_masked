
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int stream_t ;
struct TYPE_11__ {TYPE_1__* p_iinf; } ;
struct TYPE_12__ {int i_size; int i_pos; TYPE_2__ data; } ;
struct TYPE_10__ {scalar_t__ i_entry_count; } ;
typedef TYPE_3__ MP4_Box_t ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,size_t,int *) ;
 int FUNC_7 (int) ;
 TYPE_3__* FUNC_8 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;
 int VAR_1 ;
 size_t FUNC_12 (int *,scalar_t__ const**,int) ;

__attribute__((used)) static int FUNC_13( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    const uint8_t *VAR_4;
    size_t VAR_5 = FUNC_12( VAR_2, &VAR_4, 9 );
    if( VAR_5 < 9 )
        return 0;

    size_t VAR_6 = 12 + (( VAR_4[8] == 0 ) ? 2 : 4);
    FUNC_6( VAR_0, VAR_6, ((void*)0) );
    if( VAR_1 + 8 < VAR_6 )
        FUNC_7( 0 );

    uint8_t VAR_7;
    uint32_t VAR_8;
    FUNC_2( VAR_7 );
    FUNC_4( VAR_8 ); FUNC_10(VAR_8);
    if( VAR_7 > 2 )
        FUNC_7( 0 );

    if( VAR_7 == 0 )
        FUNC_3( VAR_3->data.p_iinf->i_entry_count );
    else
        FUNC_5( VAR_3->data.p_iinf->i_entry_count );

    FUNC_11( VAR_1 == 0 );

    uint32_t VAR_9 = 0;
    uint64_t VAR_10 = VAR_3->i_size - VAR_6;
    while ( VAR_10 > 8 && VAR_9 < VAR_3->data.p_iinf->i_entry_count )
    {
        MP4_Box_t *VAR_11 = FUNC_8( VAR_2, VAR_3 );
        if( !VAR_11 || VAR_10 < VAR_11->i_size )
        {
            FUNC_1( VAR_11 );
            VAR_3->data.p_iinf->i_entry_count = VAR_9;
            break;
        }

        FUNC_0( VAR_3, VAR_11 );
        VAR_10 -= VAR_11->i_size;
        VAR_9++;
    }

    if ( FUNC_9( VAR_2, VAR_3->i_pos + VAR_3->i_size ) )
        FUNC_7( 0 );

    FUNC_7( 1 );
}
