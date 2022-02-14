
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int text_t ;
struct TYPE_3__ {char* psz_text; void* i_stop; void* i_start; } ;
typedef TYPE_1__ subtitle_t ;
typedef int subs_properties_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,char*,int*,int*,int*,int*,int*,int*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7( vlc_object_t *VAR_3, subs_properties_t *VAR_4,
                     text_t *VAR_5, subtitle_t *VAR_6, size_t VAR_7 )
{
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    FUNC_1( VAR_7 );

    char *VAR_8;
    int VAR_9;

    for( ;; )
    {
        int VAR_10, VAR_11, VAR_12;
        int VAR_13, VAR_14, VAR_15;
        const char *VAR_16 = FUNC_0( VAR_5 );

        if( !VAR_16 )
            return VAR_0;

        VAR_8 = FUNC_3( FUNC_5( VAR_16 ) + 1 );
        if( !VAR_8 )
            return VAR_1;

        if( FUNC_4( VAR_16, "{%d:%d:%d}{%d:%d:%d}%[^\r\n]",
                    &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_14, &VAR_15, VAR_8 ) == 7 )
        {
            VAR_6->i_start = FUNC_6( VAR_10 * 3600 + VAR_11 * 60 + VAR_12 );
            VAR_6->i_stop = FUNC_6( VAR_13 * 3600 + VAR_14 * 60 + VAR_15 );
            break;
        }
        FUNC_2( VAR_8 );
    }


    for( VAR_9 = 0; VAR_8[VAR_9] != '\0'; VAR_9++ )
    {
        if( VAR_8[VAR_9] == '|' )
            VAR_8[VAR_9] = '\n';
    }
    VAR_6->psz_text = VAR_8;
    return VAR_2;
}
