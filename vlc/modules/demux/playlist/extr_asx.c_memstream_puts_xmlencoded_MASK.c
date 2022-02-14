
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (struct vlc_memstream*,char*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct vlc_memstream* VAR_0, const char* VAR_1, const char* VAR_2)
{
    char *VAR_3 = ((void*)0);
    if(VAR_2 == ((void*)0))
        VAR_3 = FUNC_2( VAR_1 );
    else
        VAR_3 = FUNC_3( VAR_1, VAR_2 - VAR_1 );

    if ( VAR_3 == ((void*)0) )
        return;

    if( FUNC_1( VAR_3 ) )
        FUNC_4( VAR_0, VAR_3 );
    else
    {
        char *VAR_4 = FUNC_5( VAR_3 );
        if ( !VAR_4 )
        {
            FUNC_0( VAR_3 );
            return;
        }
        FUNC_4( VAR_0, VAR_4 );
        FUNC_0( VAR_4 );
    }
    FUNC_0(VAR_3);
}
