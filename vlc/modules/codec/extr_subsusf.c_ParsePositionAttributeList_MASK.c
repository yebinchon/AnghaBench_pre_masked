
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char) ;

__attribute__((used)) static int FUNC_5( char *VAR_9, int *VAR_10,
                                       int *VAR_11, int *VAR_12 )
{
    int VAR_13 = 0;

    char *VAR_14 = FUNC_0( "alignment", VAR_9 );
    char *VAR_15 = FUNC_0( "horizontal-margin", VAR_9 );
    char *VAR_16 = FUNC_0( "vertical-margin", VAR_9 );







    *VAR_10 = VAR_5;
    *VAR_11 = 0;
    *VAR_12 = 0;

    if( VAR_14 )
    {
        if( !FUNC_3( "TopLeft", VAR_14 ) )
            *VAR_10 = VAR_8 | VAR_6;
        else if( !FUNC_3( "TopCenter", VAR_14 ) )
            *VAR_10 = VAR_8;
        else if( !FUNC_3( "TopRight", VAR_14 ) )
            *VAR_10 = VAR_8 | VAR_7;
        else if( !FUNC_3( "MiddleLeft", VAR_14 ) )
            *VAR_10 = VAR_6;
        else if( !FUNC_3( "MiddleCenter", VAR_14 ) )
            *VAR_10 = 0;
        else if( !FUNC_3( "MiddleRight", VAR_14 ) )
            *VAR_10 = VAR_7;
        else if( !FUNC_3( "BottomLeft", VAR_14 ) )
            *VAR_10 = VAR_5 | VAR_6;
        else if( !FUNC_3( "BottomCenter", VAR_14 ) )
            *VAR_10 = VAR_5;
        else if( !FUNC_3( "BottomRight", VAR_14 ) )
            *VAR_10 = VAR_5 | VAR_7;

        VAR_13 |= VAR_0;
        FUNC_2( VAR_14 );
    }
    if( VAR_15 )
    {
        *VAR_11 = FUNC_1( VAR_15 );
        if( FUNC_4( VAR_15, '%' ) )
            VAR_13 |= VAR_2;
        else
            VAR_13 |= VAR_1;

        FUNC_2( VAR_15 );
    }
    if( VAR_16 )
    {
        *VAR_12 = FUNC_1( VAR_16 );
        if( FUNC_4( VAR_16, '%' ) )
            VAR_13 |= VAR_4;
        else
            VAR_13 |= VAR_3;

        FUNC_2( VAR_16 );
    }
    return VAR_13;
}
