
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md5_s {int dummy; } ;
struct TYPE_2__ {char* psz_md5; scalar_t__ psz_string; } ;


 int FUNC_0 (struct md5_s*,scalar_t__,int ) ;
 int FUNC_1 (struct md5_s*) ;
 int FUNC_2 (struct md5_s*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (char*,char*,char*) ;
 char* FUNC_6 (struct md5_s*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9()
{
    for( int VAR_1 = 0; VAR_0[VAR_1].psz_string; VAR_1++ )
    {
        struct md5_s VAR_2;
        FUNC_2( &VAR_2 );
        FUNC_0( &VAR_2, VAR_0[VAR_1].psz_string, FUNC_8( VAR_0[VAR_1].psz_string ) );
        FUNC_1( &VAR_2 );
        char * VAR_3 = FUNC_6( &VAR_2 );

        if( FUNC_7( VAR_3, VAR_0[VAR_1].psz_md5 ) )
        {
            FUNC_5( "Output: %s\nExpected: %s\n", VAR_3,
                    VAR_0[VAR_1].psz_md5 );
            FUNC_3();
        }
        FUNC_4( VAR_3 );
    }
}
