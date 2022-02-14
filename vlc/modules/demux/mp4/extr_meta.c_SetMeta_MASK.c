
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_type_t ;
typedef int vlc_meta_t ;
typedef int MP4_Box_t ;


 int FUNC_0 (char const*,int const**,char const**) ;
 int FUNC_1 (int,int const**,char const**) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char const*,char*) ;
 int FUNC_5 (int *,int const,char*) ;

__attribute__((used)) static bool FUNC_6( vlc_meta_t* VAR_0, int VAR_1, char const* VAR_2, MP4_Box_t* VAR_3 )
{
    vlc_meta_type_t const* VAR_4;
    char const* VAR_5;

    if( ( VAR_2 != ((void*)0) && !FUNC_0( VAR_2, &VAR_4, &VAR_5 ) ) ||
        ( VAR_2 == ((void*)0) && !FUNC_1( VAR_1, &VAR_4, &VAR_5 ) ) )
    {
        return 0;
    }

    char* VAR_6 = FUNC_2( VAR_3 );

    if( VAR_6 )
    {
        if( VAR_4 ) FUNC_5( VAR_0, *VAR_4, VAR_6 );
        else FUNC_4( VAR_0, VAR_5, VAR_6 );

        FUNC_3( VAR_6 );
    }

    return 1;
}
