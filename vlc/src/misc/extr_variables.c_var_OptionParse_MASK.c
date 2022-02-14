
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_string; int b_bool; int f_float; void* i_int; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;






 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 void* FUNC_10 (char*,char**,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *,char*,TYPE_1__) ;

void FUNC_14( vlc_object_t *VAR_0, const char *VAR_1,
                      bool VAR_2 )
{
    char *VAR_3, *VAR_4;
    int VAR_5;
    bool VAR_6 = 0;
    vlc_value_t VAR_7;

    VAR_7.psz_string = ((void*)0);



    if( VAR_1[0] == ':' )
        VAR_1++;

    if( !VAR_1[0] )
        return;

    VAR_3 = FUNC_7( VAR_1 );
    if( VAR_3 == ((void*)0) )
        return;

    VAR_4 = FUNC_6( VAR_3, '=' );
    if( VAR_4 != ((void*)0) )
        *VAR_4++ = '\0';

    VAR_5 = FUNC_0( VAR_3 );
    if( !VAR_5 && !VAR_4 )
    {

        if( !FUNC_9( VAR_3, "no-", 3 ) )
        {
            FUNC_3( VAR_3, VAR_3 + 3, FUNC_8(VAR_3) + 1 - 3 );
        }
        else if( !FUNC_9( VAR_3, "no", 2 ) )
        {
            FUNC_3( VAR_3, VAR_3 + 2, FUNC_8(VAR_3) + 1 - 2 );
        }
        else goto cleanup;

        VAR_6 = 1;
        VAR_5 = FUNC_0( VAR_3 );
    }
    if( !VAR_5 ) goto cleanup;

    if( ( VAR_5 != 131 ) &&
        ( !VAR_4 || !*VAR_4 ) ) goto cleanup;


    if( !VAR_2 && !FUNC_1( VAR_3 ) )
    {
        FUNC_4( VAR_0, "unsafe option \"%s\" has been ignored for "
                        "security reasons", VAR_3 );
        FUNC_2( VAR_3 );
        return;
    }




    FUNC_12( VAR_0, VAR_3, VAR_5 );

    switch( VAR_5 )
    {
    case 131:
        if( VAR_4 )
        {
            char *VAR_8;
            long long int VAR_9 = FUNC_10( VAR_4, &VAR_8, 0 );
            if( VAR_8 == VAR_4 )
                VAR_7.b_bool = FUNC_5( VAR_4, "true" ) == 0
                          || FUNC_5( VAR_4, "yes" ) == 0;
            else
                VAR_7.b_bool = VAR_9 != 0;
        }
        else
            VAR_7.b_bool = !VAR_6;
        break;

    case 129:
        VAR_7.i_int = FUNC_10( VAR_4, ((void*)0), 0 );
        break;

    case 130:
        VAR_7.f_float = FUNC_11( VAR_4 );
        break;

    case 128:
        VAR_7.psz_string = VAR_4;
        break;

    default:
        goto cleanup;
    }

    FUNC_13( VAR_0, VAR_3, VAR_7 );

cleanup:
    FUNC_2( VAR_3 );
}
