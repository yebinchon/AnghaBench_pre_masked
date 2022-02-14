
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int vlc_family_t ;
typedef int filter_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char**,char*,int ,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (int *,char const**) ;
 int FUNC_6 (int *,char const**) ;

__attribute__((used)) static int FUNC_7( filter_t *VAR_5, xml_reader_t *VAR_6,
                              vlc_family_t *VAR_7 )
{
    bool VAR_8 = 0;
    bool VAR_9 = 0;
    const char *VAR_10 = ((void*)0);
    const char *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    int VAR_13 = 0;

    while( ( VAR_11 = FUNC_5( VAR_6, &VAR_10 ) ) )
    {
        if( !FUNC_4( "weight", VAR_11 ) && VAR_10 && *VAR_10 )
            VAR_13 = FUNC_2( VAR_10 );
        else if( !FUNC_4( "style", VAR_11 ) && VAR_10 && *VAR_10 )
            if( !FUNC_4( "italic", VAR_10 ) )
                VAR_9 = 1;
    }

    if( VAR_13 == 700 )
        VAR_8 = 1;

    VAR_12 = FUNC_6( VAR_6, &VAR_10 );

    if( VAR_12 != VAR_4 || !VAR_10 || !*VAR_10 )
    {
        FUNC_3( VAR_5, "Android_ParseFont: no file name" );
        return VAR_1;
    }

    char *VAR_14;




    if( VAR_13 == 400 || VAR_13 == 700 )
        if( FUNC_1( &VAR_14, "%d/%s", VAR_0, VAR_10 ) < 0
         || !FUNC_0( VAR_14, 0, VAR_8, VAR_9, VAR_7 ) )
            return VAR_2;

    return VAR_3;
}
