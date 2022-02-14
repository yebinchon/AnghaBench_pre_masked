
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_3__ {char* psz_string; } ;
typedef TYPE_1__ vlc_value_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (int *,char const*,int ,TYPE_1__,char const*) ;

__attribute__((used)) static void FUNC_3( vout_thread_t *VAR_1, const char *VAR_2,
                             char *VAR_3 )
{
    FUNC_0( VAR_3 );

    char *VAR_4 = VAR_3;
    char *VAR_5;
    while( VAR_4 && *VAR_4 )
    {
        vlc_value_t VAR_6;
        VAR_5 = FUNC_1( VAR_4, ',' );
        if( VAR_5 )
        {
            *VAR_5 = '\0';
            VAR_5++;
        }
        VAR_6.psz_string = VAR_4;
        FUNC_2( VAR_1, VAR_2, VAR_0, VAR_6,
                    (const char *)VAR_4 );
        VAR_4 = VAR_5;
    }
}
