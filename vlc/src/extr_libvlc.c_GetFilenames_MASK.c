
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_int_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,unsigned int,char const* const*,int ) ;
 int FUNC_2 (int *,char*,char const* const) ;
 int * FUNC_3 (char const* const,char*) ;
 char* FUNC_4 (char const* const,int *) ;

__attribute__((used)) static void FUNC_5( libvlc_int_t *VAR_1, unsigned VAR_2,
                          const char *const VAR_3[] )
{
    while( VAR_2 > 0 )
    {

        unsigned VAR_4 = 0;

        while( VAR_3[--VAR_2][0] == ':' )
        {
            VAR_4++;
            if( VAR_2 == 0 )
            {
                FUNC_2( VAR_1, "options %s without item", VAR_3[VAR_2] );
                return;
            }
        }

        char *VAR_5 = ((void*)0);
        if( FUNC_3( VAR_3[VAR_2], "://" ) == ((void*)0) )
        {
            VAR_5 = FUNC_4( VAR_3[VAR_2], ((void*)0) );
            if( !VAR_5 )
                continue;
        }

        FUNC_1( VAR_1, (VAR_5 != ((void*)0)) ? VAR_5 : VAR_3[VAR_2], VAR_4,
                         ( VAR_4 ? &VAR_3[VAR_2 + 1] : ((void*)0) ),
                         VAR_0 );
        FUNC_0( VAR_5 );
    }
}
