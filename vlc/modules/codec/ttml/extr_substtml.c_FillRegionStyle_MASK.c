
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inner_align; } ;
struct TYPE_4__ {TYPE_2__ updt; } ;
typedef TYPE_1__ ttml_region_t ;
typedef int ttml_length_t ;
typedef int ttml_context_t ;


 int FUNC_0 (int *,int ,int ,int,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int *,int *) ;

__attribute__((used)) static void FUNC_3( ttml_context_t *VAR_2,
                             const char *VAR_3, const char *VAR_4,
                             ttml_region_t *VAR_5 )
{
    if( !FUNC_1( "tts:displayAlign", VAR_3 ) )
    {
        VAR_5->updt.inner_align &= ~(VAR_1|VAR_0);
        if( !FUNC_1( "after", VAR_4 ) )
            VAR_5->updt.inner_align |= VAR_0;
        else if( FUNC_1( "center", VAR_4 ) )

            VAR_5->updt.inner_align |= VAR_1;
    }
    else if( !FUNC_1 ( "tts:origin", VAR_3 ) ||
             !FUNC_1 ( "tts:extent", VAR_3 ) )
    {
        ttml_length_t VAR_6, VAR_7;
        if( FUNC_2( VAR_4, &VAR_6, &VAR_7 ) )
            FUNC_0( VAR_2, VAR_6, VAR_7, (VAR_3[4] == 'o'), &VAR_5->updt );
    }
}
