
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const WCHAR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int const*,int*,int *,int *,int ,int*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static int FUNC_7( const WCHAR * VAR_5, char **VAR_6, int *VAR_7 )
{
    HKEY VAR_8;
    WCHAR VAR_9[VAR_4];
    WCHAR VAR_10[256];

    if( FUNC_4(VAR_2, VAR_1, 0, VAR_3, &VAR_8)
            != VAR_0 )
        return 1;

    char *VAR_11 = FUNC_1( VAR_5 );

    for( int VAR_12 = 0;; VAR_12++ )
    {
        DWORD VAR_13 = VAR_4 - 1;
        DWORD VAR_14 = 255;

        LONG VAR_15 = FUNC_3( VAR_8, VAR_12, VAR_9, &VAR_13,
                                      ((void*)0), ((void*)0), (LPBYTE)VAR_10, &VAR_14);
        if( VAR_15 != VAR_0 )
        {
            FUNC_5( VAR_11 );
            FUNC_2( VAR_8 );
            return VAR_15;
        }

        char *VAR_16 = FUNC_1( VAR_9 );

        char *VAR_17 = FUNC_6( VAR_16,'(' );
        if( VAR_17 != ((void*)0) && VAR_17 != VAR_16 ) VAR_17[-1] = '\0';

        int VAR_18 = 0;
        if( ( VAR_18 = FUNC_0( VAR_16, VAR_11 ) ) != -1 )
        {
            *VAR_7 = VAR_18;
            *VAR_6 = FUNC_1( VAR_10 );
            FUNC_5( VAR_16 );
            break;
        }

        FUNC_5( VAR_16 );
    }

    FUNC_5( VAR_11 );
    FUNC_2( VAR_8 );
    return 0;
}
