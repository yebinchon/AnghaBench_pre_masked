
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_t ;
typedef int uint8_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 char* FUNC_2 (char const*,size_t) ;
 size_t FUNC_3 (char const*,size_t) ;
 int VAR_0 ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,char*) ;

__attribute__((used)) static bool FUNC_6( const uint8_t *VAR_1, size_t VAR_2,
                                    vlc_meta_t *VAR_3, bool *VAR_4 )
{
    if( VAR_2 > 13 && VAR_3 )
    {
        const char *VAR_5 = (const char *)&VAR_1[1];
        size_t VAR_6 = VAR_2 - 1;
        size_t VAR_7 = FUNC_3(VAR_5, VAR_6);
        if( VAR_7 < VAR_6 - 1 && VAR_7 > 11 &&
            !FUNC_1( "artworkURL_", VAR_5, 11 ) )
        {
            const char *VAR_8 = FUNC_4( VAR_3, VAR_0 );
            if( !VAR_8 || FUNC_1( VAR_8, &VAR_5[VAR_7], VAR_6 - VAR_7 ) )
            {
                char *VAR_9 = FUNC_2(&VAR_5[VAR_7 + 1], VAR_6 - VAR_7 - 1);
                FUNC_5( VAR_3, VAR_0, VAR_9 );
                FUNC_0( VAR_9 );
                *VAR_4 = 1;
            }
        }
        return 1;
    }
    return 0;
}
