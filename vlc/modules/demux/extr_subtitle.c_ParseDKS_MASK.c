
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int text_t ;
struct TYPE_3__ {int i_stop; char* psz_text; void* i_start; } ;
typedef TYPE_1__ subtitle_t ;
typedef int subs_properties_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (char*,char*,int*,int*,int*,...) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;
 void* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9( vlc_object_t *VAR_3, subs_properties_t *VAR_4,
                     text_t *VAR_5, subtitle_t *VAR_6, size_t VAR_7 )
{
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    FUNC_1( VAR_7 );

    char *VAR_8;

    for( ;; )
    {
        int VAR_9, VAR_10, VAR_11;
        int VAR_12, VAR_13, VAR_14;
        char *VAR_15 = FUNC_0( VAR_5 );

        if( !VAR_15 )
            return VAR_0;

        VAR_8 = FUNC_3( FUNC_6( VAR_15 ) + 1 );
        if( !VAR_8 )
            return VAR_1;

        if( FUNC_5( VAR_15, "[%d:%d:%d]%[^\r\n]",
                    &VAR_9, &VAR_10, &VAR_11, VAR_8 ) == 4 )
        {
            VAR_6->i_start = FUNC_8( VAR_9 * 3600 + VAR_10 * 60 + VAR_11 );

            VAR_15 = FUNC_0( VAR_5 );
            if( !VAR_15 )
            {
                FUNC_2( VAR_8 );
                return VAR_0;
            }

            if( FUNC_5( VAR_15, "[%d:%d:%d]", &VAR_12, &VAR_13, &VAR_14 ) == 3 )
                VAR_6->i_stop = FUNC_8(VAR_12 * 3600 + VAR_13 * 60 + VAR_14 );
            else
                VAR_6->i_stop = -1;
            break;
        }
        FUNC_2( VAR_8 );
    }


    char *VAR_16;
    while( ( VAR_16 = FUNC_7( VAR_8, "[br]" ) ) )
    {
        *VAR_16++ = '\n';
        FUNC_4( VAR_16, &VAR_16[3], FUNC_6(&VAR_16[3])+1 );
    }

    VAR_6->psz_text = VAR_8;
    return VAR_2;
}
