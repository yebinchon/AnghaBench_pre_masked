
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int text_t ;
struct TYPE_3__ {int i_start; int i_stop; char* psz_text; } ;
typedef TYPE_1__ subtitle_t ;
typedef int subs_properties_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (char const*,char*,int*,int*,char*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(vlc_object_t *VAR_3, subs_properties_t *VAR_4,
                    text_t *VAR_5, subtitle_t *VAR_6, size_t VAR_7 )
{
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    FUNC_1( VAR_7 );

    char *VAR_8;
    int VAR_9;

    for( ;; )
    {
        const char *VAR_10 = FUNC_0( VAR_5 );
        int VAR_11, VAR_12;

        if( !VAR_10 )
            return VAR_0;

        VAR_8 = FUNC_3( FUNC_6(VAR_10) + 1 );
        if( !VAR_8 )
            return VAR_1;


        if( FUNC_5 (VAR_10, "%d,%d,\"%[^\n\r]", &VAR_11, &VAR_12, VAR_8 ) == 3 )
        {

            VAR_6->i_start = 10 * VAR_11;
            VAR_6->i_stop = 10 * VAR_12;

            VAR_8[ FUNC_6(VAR_8) - 1 ] = '\0';

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
    FUNC_4( VAR_3, "%s", VAR_8 );
    return VAR_2;
}
