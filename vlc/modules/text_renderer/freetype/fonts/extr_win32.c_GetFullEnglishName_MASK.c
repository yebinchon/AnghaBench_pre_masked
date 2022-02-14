
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef int uint32_t ;
typedef scalar_t__ WCHAR ;
struct TYPE_3__ {int elfLogFont; } ;
typedef int * HFONT ;
typedef int * HDC ;
typedef int FT_UInt ;
typedef int FT_Byte ;
typedef TYPE_1__ ENUMLOGFONTEX ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const,int ,int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int,int,int,int,int **,int*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__* FUNC_11 (int,int) ;

__attribute__((used)) static WCHAR *FUNC_12( const ENUMLOGFONTEX *VAR_0 )
{

    HFONT VAR_1 = ((void*)0);
    HDC VAR_2 = ((void*)0);
    FT_Byte *VAR_3 = ((void*)0);
    WCHAR *VAR_4 = ((void*)0);

    VAR_1 = FUNC_1( &VAR_0->elfLogFont );

    if( !VAR_1 )
        return ((void*)0);

    VAR_2 = FUNC_0( ((void*)0) );

    if( !VAR_2 )
    {
        FUNC_3( VAR_1 );
        return ((void*)0);
    }

    HFONT VAR_5 = ( HFONT ) FUNC_6( VAR_2, VAR_1 );

    const uint32_t VAR_6 = FUNC_10( ( uint32_t ) 'n' << 24
                                      | ( uint32_t ) 'a' << 16
                                      | ( uint32_t ) 'm' << 8
                                      | ( uint32_t ) 'e' << 0 );

    int VAR_7 = FUNC_4( VAR_2, VAR_6, 0, 0, 0 );

    if( VAR_7 <= 0 )
        goto done;

    VAR_3 = FUNC_9( VAR_7 );

    if( !VAR_3 )
        goto done;

    if( FUNC_4( VAR_2, VAR_6, 0, VAR_3, VAR_7 ) <= 0 )
        goto done;

    FT_Byte *VAR_8 = ((void*)0);
    FT_UInt VAR_9 = 0;


    if( FUNC_5( VAR_3, VAR_7, 3, 1, 4, 0x409, &VAR_8, &VAR_9) )
        goto done;

    int VAR_10 = VAR_9 / 2;
    wchar_t *VAR_11 = FUNC_11( VAR_10 + 1, sizeof( *VAR_11 ) );

    if( !VAR_11 )
        goto done;

    for( int VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12 )
        VAR_11[ VAR_12 ] = FUNC_7( VAR_8 + VAR_12 * 2 );
    VAR_11[ VAR_10 ] = 0;

    VAR_4 = VAR_11;

done:
    FUNC_8( VAR_3 );
    FUNC_6( VAR_2, VAR_5 );
    FUNC_3( VAR_1 );
    FUNC_2( VAR_2 );

    return VAR_4;
}
