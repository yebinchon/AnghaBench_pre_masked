
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int access_sys_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int *,int*,int *) ;
 scalar_t__ FUNC_3 (int *,int *,char*,char const*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,char*,int ) ;

__attribute__((used)) static int FUNC_9( vlc_object_t *VAR_0, access_sys_t *VAR_1,
                         const char *VAR_2, const char *VAR_3,
                         bool *VAR_4 )
{
    int VAR_5;


    if( FUNC_3( VAR_0, VAR_1, "USER %s", VAR_2 ) < 0 ||
        FUNC_2( VAR_0, VAR_1, &VAR_5, ((void*)0) ) < 0 )
        return -1;

    switch( VAR_5 / 100 )
    {
        case 2:

            if ( VAR_5 == 232 )
                FUNC_4( VAR_0, "user accepted and authenticated" );
            else
                FUNC_4( VAR_0, "user accepted" );
            break;
        case 3:
            FUNC_4( VAR_0, "password needed" );

            if( FUNC_3( VAR_0, VAR_1, "PASS %s", VAR_3 ) < 0 ||
                FUNC_2( VAR_0, VAR_1, &VAR_5, ((void*)0) ) < 0 )
                return -1;

            switch( VAR_5 / 100 )
            {
                case 2:
                    FUNC_4( VAR_0, "password accepted" );
                    break;
                case 3:
                {
                    char *VAR_6;
                    FUNC_4( VAR_0, "account needed" );
                    VAR_6 = FUNC_7( VAR_0, "ftp-account" );
                    if( FUNC_3( VAR_0, VAR_1, "ACCT %s",
                                         VAR_6 ) < 0 ||
                        FUNC_2( VAR_0, VAR_1, &VAR_5, ((void*)0) ) < 0 )
                    {
                        FUNC_1( VAR_6 );
                        return -1;
                    }
                    FUNC_1( VAR_6 );

                    if( VAR_5 / 100 != 2 )
                    {
                        FUNC_5( VAR_0, "account rejected" );
                        FUNC_8( VAR_0,
                          FUNC_0("Network interaction failed"),
                          "%s", FUNC_0("Your account was rejected.") );
                        return -1;
                    }
                    FUNC_4( VAR_0, "account accepted" );
                    break;
                }

                default:
                    FUNC_6( VAR_0, "password rejected" );
                    *VAR_4 = 0;
                    return 0;
            }
            break;
        default:
            FUNC_6( VAR_0, "user rejected" );
            *VAR_4 = 0;
            return 0;
    }

    *VAR_4 = 1;
    return 0;
}
