
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
 int FUNC_1 (int) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (char const*,char*,int*,...) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(vlc_object_t *VAR_3, subs_properties_t *VAR_4,
                     text_t *VAR_5, subtitle_t *VAR_6, size_t VAR_7 )
{
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    FUNC_2( VAR_7 );
    char *VAR_8;
    int VAR_9;

    for( ;; )
    {
        const char *VAR_10 = FUNC_0( VAR_5 );
        int VAR_11;
        int VAR_12;

        if( !VAR_10 )
            return VAR_0;

        VAR_8 = FUNC_4( FUNC_7(VAR_10) + 1 );
        if( !VAR_8 )
            return VAR_1;

        VAR_11 = 0;
        VAR_12 = -1;
        if( FUNC_6( VAR_10, "[%d][] %[^\r\n]", &VAR_11, VAR_8 ) == 2 ||
            FUNC_6( VAR_10, "[%d][%d] %[^\r\n]", &VAR_11, &VAR_12, VAR_8 ) == 3)
        {
            VAR_6->i_start = FUNC_1(VAR_11 * 100);
            VAR_6->i_stop = VAR_12 >= 0 ? FUNC_1(VAR_12 * 100) : -1;
            break;
        }
        FUNC_3( VAR_8 );
    }

    for( VAR_9 = 0; VAR_8[VAR_9] != '\0'; )
    {

        if( VAR_8[VAR_9] == '|' )
            VAR_8[VAR_9] = '\n';


        if( VAR_8[VAR_9] == '/' && ( VAR_9 == 0 || VAR_8[VAR_9-1] == '\n' ) )
            FUNC_5( &VAR_8[VAR_9], &VAR_8[VAR_9+1], FUNC_7(&VAR_8[VAR_9+1])+1 );
        else
            VAR_9++;
    }
    VAR_6->psz_text = VAR_8;
    return VAR_2;
}
