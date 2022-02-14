
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_dictionary_t ;
typedef int ttml_style_t ;
typedef int ttml_context_t ;
struct TYPE_4__ {int attr_dict; struct TYPE_4__* p_parent; } ;
typedef TYPE_1__ tt_node_t ;


 int FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int *,char const*,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*) ;

__attribute__((used)) static ttml_style_t * FUNC_10( ttml_context_t *VAR_0, tt_node_t *VAR_1 )
{
    FUNC_4( VAR_1 );
    ttml_style_t *VAR_2 = ((void*)0);
    vlc_dictionary_t VAR_3;
    FUNC_7( &VAR_3, 0 );


    for( ; VAR_1; VAR_1 = VAR_1->p_parent )
    {
        FUNC_3( &VAR_1->attr_dict, &VAR_3, 0 );

        const char *VAR_4 = (const char *)
                FUNC_9( &VAR_1->attr_dict, "style" );
        if( VAR_4 )
            FUNC_1( VAR_0, VAR_4, &VAR_3 );

        const char *VAR_5 = (const char *)
                FUNC_9( &VAR_1->attr_dict, "region" );
        if( VAR_5 )
            FUNC_0( VAR_0, VAR_5, &VAR_3 );
    }

    if( !FUNC_8( &VAR_3 ) && (VAR_2 = FUNC_5()) )
    {
        FUNC_2( VAR_0, &VAR_3, VAR_2 );
    }

    FUNC_6( &VAR_3, ((void*)0), ((void*)0) );

    return VAR_2;
}
