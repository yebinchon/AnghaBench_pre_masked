
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int text_t ;
struct TYPE_3__ {int i_stop; char* psz_text; scalar_t__ i_start; } ;
typedef TYPE_1__ subtitle_t ;
typedef int subs_properties_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (char const*,char*,int*,int*,int*,int*) ;
 int FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(vlc_object_t *VAR_3, subs_properties_t *VAR_4,
                            text_t *VAR_5, subtitle_t *VAR_6, size_t VAR_7 )
{
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    FUNC_2( VAR_7 );
    char *VAR_8;

    for( ;; )
    {
        const char *VAR_9 = FUNC_0( VAR_5 );
        int VAR_10, VAR_11, VAR_12, VAR_13;

        if( !VAR_9 )
            return VAR_0;

        if( FUNC_5( VAR_9,
                    "{T %d:%d:%d:%d",
                    &VAR_10, &VAR_11, &VAR_12, &VAR_13 ) == 4 )
        {
            VAR_6->i_start = FUNC_9( VAR_10 * 3600 + VAR_11 * 60 + VAR_12 ) +
                                  FUNC_1( VAR_13 * 10 );
            VAR_6->i_stop = -1;
            break;
        }
    }


    VAR_8 = FUNC_7("");
    if( !VAR_8 )
        return VAR_1;
    for( ;; )
    {
        const char *VAR_14 = FUNC_0( VAR_5 );
        int VAR_15;
        int VAR_16;

        if( !VAR_14 )
        {
            FUNC_3( VAR_8 );
            return VAR_0;
        }

        VAR_15 = FUNC_8( VAR_14 );
        if( VAR_15 == 1 && VAR_14[0] == '}')
        {
            VAR_6->psz_text = VAR_8;
            return VAR_2;
        }

        VAR_16 = FUNC_8( VAR_8 );
        VAR_8 = FUNC_4( VAR_8, VAR_16 + VAR_15 + 1 + 1 );
        if( !VAR_8 )
            return VAR_1;
        FUNC_6( VAR_8, VAR_14 );
        FUNC_6( VAR_8, "\n" );
    }
}
