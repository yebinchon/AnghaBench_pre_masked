
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 int FUNC_5 (int) ;

int FUNC_6( vlc_object_t *VAR_2, const char *VAR_3 )
{
    if( !VAR_3 || !*VAR_3 ) return -1;

    if( FUNC_4( VAR_3, 0700 ) == 0 )
        return 0;

    switch( VAR_1 )
    {
        case 129:
            return 0;

        case 128:
        {

            char VAR_4[FUNC_2( VAR_3 ) + 1], *VAR_5;
            FUNC_1( VAR_4, VAR_3 );

            VAR_5 = FUNC_3( VAR_4, VAR_0 );
            if( VAR_5 && VAR_5 != VAR_4 )
            {
                *VAR_5 = '\0';
                if( FUNC_6( VAR_2, VAR_4 ) == 0 )
                {
                    if( !FUNC_4( VAR_3, 0700 ) )
                        return 0;
                }
            }
        }
    }

    FUNC_0( VAR_2, "could not create %s: %s", VAR_3,
              FUNC_5(VAR_1) );
    return -1;
}
