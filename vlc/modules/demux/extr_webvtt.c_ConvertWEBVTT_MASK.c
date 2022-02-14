
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_text; char* psz_id; char* psz_attrs; } ;
typedef TYPE_1__ webvtt_cue_t ;
typedef char uint8_t ;
struct vlc_memstream {int length; int ptr; } ;
typedef int block_t ;


 int FUNC_0 (char*,size_t const) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct vlc_memstream*) ;
 scalar_t__ FUNC_4 (struct vlc_memstream*) ;
 int FUNC_5 (struct vlc_memstream*,char*,size_t const) ;

__attribute__((used)) static block_t *FUNC_6( const webvtt_cue_t *VAR_1, bool VAR_2 )
{
    struct vlc_memstream VAR_3;

    if( FUNC_4( &VAR_3 ) )
        return ((void*)0);

    const size_t VAR_4 = 8 + FUNC_2( VAR_1->psz_text );
    const size_t VAR_5 = (VAR_1->psz_id) ? 8 + FUNC_2( VAR_1->psz_id ) : 0;
    const size_t VAR_6 = (VAR_1->psz_attrs) ? 8 + FUNC_2( VAR_1->psz_attrs ) : 0;
    const size_t VAR_7 = 8 + VAR_4 + VAR_6 + VAR_5;

    uint8_t VAR_8[8] = { 0, 0, 0, 0, 'v', 't', 't', 'c' };
    if( VAR_2 )
        VAR_8[7] = 'x';
    FUNC_0( VAR_8, VAR_7 );
    FUNC_5( &VAR_3, VAR_8, 8 );

    if( VAR_1->psz_id )
    {
        uint8_t VAR_9[8] = { 0, 0, 0, 0, 'i', 'd', 'e', 'n' };
        FUNC_0( VAR_9, VAR_5 );
        FUNC_5( &VAR_3, VAR_9, 8 );
        FUNC_5( &VAR_3, VAR_1->psz_id, VAR_5 - 8 );
    }

    if( VAR_1->psz_attrs )
    {
        uint8_t VAR_10[8] = { 0, 0, 0, 0, 's', 't', 't', 'g' };
        FUNC_0( VAR_10, VAR_6 );
        FUNC_5( &VAR_3, VAR_10, 8 );
        FUNC_5( &VAR_3, VAR_1->psz_attrs, VAR_6 - 8 );
    }

    uint8_t VAR_11[8] = { 0, 0, 0, 0, 'p', 'a', 'y', 'l' };
    FUNC_0( VAR_11, VAR_4 );
    FUNC_5( &VAR_3, VAR_11, 8 );
    FUNC_5( &VAR_3, VAR_1->psz_text, VAR_4 - 8 );

    if( FUNC_3( &VAR_3 ) == VAR_0 )
        return FUNC_1( VAR_3.ptr, VAR_3.length );
    else
        return ((void*)0);
}
