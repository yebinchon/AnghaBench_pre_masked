
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int text_t ;
struct TYPE_5__ {scalar_t__ i_start; scalar_t__ i_stop; char* psz_text; } ;
typedef TYPE_1__ subtitle_t ;
typedef int subs_properties_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char*) ;
 size_t FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8( vlc_object_t *VAR_3, subs_properties_t *VAR_4,
                                 text_t *VAR_5, subtitle_t *VAR_6,
                                 int (* VAR_7)(subtitle_t *, const char *),
                                 bool VAR_8 )
{
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    char *VAR_9;

    for( ;; )
    {
        const char *VAR_10 = FUNC_0( VAR_5 );

        if( !VAR_10 )
            return VAR_0;

        if( VAR_7( VAR_6, VAR_10) == VAR_2 &&
            VAR_6->i_start < VAR_6->i_stop )
        {
            break;
        }
    }


    VAR_9 = FUNC_5("");
    if( !VAR_9 )
        return VAR_1;

    for( ;; )
    {
        const char *VAR_11 = FUNC_0( VAR_5 );
        size_t VAR_12;
        size_t VAR_13;

        VAR_12 = VAR_11 ? FUNC_6( VAR_11 ) : 0;
        if( VAR_12 <= 0 )
        {
            VAR_6->psz_text = VAR_9;
            return VAR_2;
        }

        VAR_13 = FUNC_6( VAR_9 );
        VAR_9 = FUNC_3( VAR_9, VAR_13 + VAR_12 + 1 + 1 );
        if( !VAR_9 )
        {
            return VAR_1;
        }
        FUNC_4( VAR_9, VAR_11 );
        FUNC_4( VAR_9, "\n" );


        if( VAR_8 )
        {
            char *VAR_14;

            while( ( VAR_14 = FUNC_7( VAR_9, "[br]" ) ) )
            {
                *VAR_14++ = '\n';
                FUNC_2( VAR_14, &VAR_14[3], FUNC_6(&VAR_14[3])+1 );
            }
        }
    }
}
