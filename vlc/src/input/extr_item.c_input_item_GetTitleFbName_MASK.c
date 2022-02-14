
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* psz_name; int lock; int p_meta; } ;
typedef TYPE_1__ input_item_t ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

char *FUNC_5( input_item_t *VAR_1 )
{
    char *VAR_2;
    FUNC_3( &VAR_1->lock );

    if( !VAR_1->p_meta )
    {
        VAR_2 = VAR_1->psz_name ? FUNC_1( VAR_1->psz_name ) : ((void*)0);
        FUNC_4( &VAR_1->lock );
        return VAR_2;
    }

    const char *VAR_3 = FUNC_2( VAR_1->p_meta, VAR_0 );
    if( !FUNC_0( VAR_3 ) )
        VAR_2 = FUNC_1( VAR_3 );
    else
        VAR_2 = VAR_1->psz_name ? FUNC_1( VAR_1->psz_name ) : ((void*)0);

    FUNC_4( &VAR_1->lock );
    return VAR_2;
}
