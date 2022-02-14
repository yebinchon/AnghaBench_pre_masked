
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int psz_description; } ;
struct TYPE_8__ {TYPE_1__ fmt; TYPE_2__* p_skel; } ;
typedef TYPE_3__ logical_stream_t ;
struct TYPE_7__ {int i_messages; char** ppsz_messages; } ;


 int FUNC_0 (TYPE_3__*,char const*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_4( logical_stream_t *VAR_0 )
{
    if ( !VAR_0->p_skel ) return;
    for ( int VAR_1=0; VAR_1< VAR_0->p_skel->i_messages; VAR_1++ )
    {
        const char *VAR_2 = VAR_0->p_skel->ppsz_messages[VAR_1];
        if ( ! FUNC_3( "Name: ", VAR_2, 6 ) )
        {
            FUNC_1( VAR_0->fmt.psz_description );
            VAR_0->fmt.psz_description = FUNC_2( VAR_2 + 6 );
        }
        else if ( ! FUNC_3("Content-Type: ", VAR_2, 14 ) )
        {
            bool VAR_3;
            FUNC_0( VAR_0, VAR_2 + 14, &VAR_3 );
        }
    }
}
