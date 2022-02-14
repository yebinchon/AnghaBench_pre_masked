
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int text_t ;
struct TYPE_3__ {char* psz_text; scalar_t__ i_stop; scalar_t__ i_start; } ;
typedef TYPE_1__ subtitle_t ;
typedef int subs_properties_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (char*,int*,int*,int*,int*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,char*,size_t) ;
 char* FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*,char*,char*,char*,...) ;
 char* FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,char const*) ;
 size_t FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12( vlc_object_t *VAR_3, subs_properties_t *VAR_4,
                          text_t *VAR_5, subtitle_t *VAR_6, size_t VAR_7 )
{
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
    FUNC_3( VAR_7 );
    char *VAR_8 = ((void*)0);

    for( ;; )
    {
        int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
        int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
        const char *VAR_17 = FUNC_1( VAR_5 );
        FUNC_4( VAR_8 );

        if( !VAR_17 )
            return VAR_0;

        VAR_8 = FUNC_5( FUNC_11( VAR_17 ) + 1 );
        if( !VAR_8 )
            return VAR_1;



        char *VAR_18 = FUNC_9( VAR_17, "<time");
        if( VAR_18 != ((void*)0) )
        {
            char VAR_19[12], VAR_20[12];

            if( ( FUNC_8( VAR_18,
                  "<%*[t|T]ime %*[b|B]egin=\"%11[^\"]\" %*[e|E]nd=\"%11[^\"]%*[^>]%[^\n\r]",
                            VAR_20, VAR_19, VAR_8) != 3 ) &&

                    ( FUNC_8( VAR_18,
                              "<%*[t|T]ime %*[b|B]egin=\"%11[^\"]\"%*[^>]%[^\n\r]",
                              VAR_20, VAR_8 ) != 2) )

            {
                continue;
            }


            int64_t VAR_21 = FUNC_0( VAR_20, &VAR_9, &VAR_10, &VAR_11, &VAR_12 );
            VAR_6->i_start = VAR_21 >= 0 ? VAR_21 : 0;

            VAR_21 = FUNC_0( VAR_19, &VAR_13, &VAR_14, &VAR_15, &VAR_16 );
            VAR_6->i_stop = VAR_21 >= 0 ? VAR_21 : -1;
            break;
        }
    }


    for( ;; )
    {
        const char *VAR_22 = FUNC_1( VAR_5 );

        if( !VAR_22 )
        {
            FUNC_4( VAR_8 );
            return VAR_0;
        }

        size_t VAR_23 = FUNC_11( VAR_22 );
        if( VAR_23 == 0 ) break;

        if( FUNC_9( VAR_22, "<time" ) ||
            FUNC_9( VAR_22, "<clear/") )
        {
            FUNC_2( VAR_5 );
            break;
        }

        size_t VAR_24 = FUNC_11( VAR_8 );

        VAR_8 = FUNC_7( VAR_8, VAR_24 + VAR_23 + 1 + 1 );
        if( !VAR_8 )
            return VAR_1;

        FUNC_10( VAR_8, VAR_22 );
        FUNC_10( VAR_8, "\n" );
    }


    FUNC_6( &VAR_8[0], &VAR_8[1], FUNC_11( VAR_8 ) );

    VAR_6->psz_text = VAR_8;

    return VAR_2;
}
