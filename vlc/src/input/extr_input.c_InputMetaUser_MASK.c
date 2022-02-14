
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_t ;
typedef int input_thread_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*) ;





 int FUNC_3 (int *,int,char*) ;



__attribute__((used)) static void FUNC_4( input_thread_t *VAR_0, vlc_meta_t *VAR_1 )
{
    static const struct { int i_meta; const char *psz_name; } VAR_2[] = {
        { 129, "meta-title" },
        { 134, "meta-artist" },
        { 130, "meta-genre" },
        { 133, "meta-copyright" },
        { 131, "meta-description" },
        { 132, "meta-date" },
        { 128, "meta-url" },
        { 0, ((void*)0) }
    };


    for( int VAR_3 = 0; VAR_2[VAR_3].psz_name; VAR_3++ )
    {
        char *VAR_4 = FUNC_2( VAR_0, VAR_2[VAR_3].psz_name );
        if( !VAR_4 )
            continue;

        FUNC_0( VAR_4 );
        FUNC_3( VAR_1, VAR_2[VAR_3].i_meta, VAR_4 );
        FUNC_1( VAR_4 );
    }
}
