
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_dictionary_t ;
struct TYPE_5__ {scalar_t__ p_rootnode; } ;
typedef TYPE_1__ ttml_context_t ;
struct TYPE_6__ {int attr_dict; } ;
typedef TYPE_2__ tt_node_t ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_2__* FUNC_1 (scalar_t__,char*,int,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char*,char**) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9( ttml_context_t *VAR_0, const char *VAR_1,
                                  vlc_dictionary_t *VAR_2 )
{
    FUNC_2(VAR_0->p_rootnode);
    char *VAR_3;
    if( VAR_1 && VAR_0->p_rootnode && (VAR_3 = FUNC_4( VAR_1 )) )
    {


        vlc_dictionary_t VAR_4;
        FUNC_7( &VAR_4, 0 );

        char *VAR_5;
        char *VAR_6 = FUNC_5( VAR_3, " ", &VAR_5 );
        while( VAR_6 )
        {

            const tt_node_t *VAR_7 = FUNC_1( VAR_0->p_rootnode,
                                                "style", -1, VAR_6 );
            if( VAR_7 )
                FUNC_0( &VAR_7->attr_dict, &VAR_4, 1 );

            VAR_6 = FUNC_5( ((void*)0), " ", &VAR_5 );
        }

        if( !FUNC_8( &VAR_4 ) )
            FUNC_0( &VAR_4, VAR_2, 0 );

        FUNC_6( &VAR_4, ((void*)0), ((void*)0) );
        FUNC_3( VAR_3 );
    }
}
