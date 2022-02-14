
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_7__ {char* psz_value; } ;
typedef TYPE_2__ info_t ;
typedef int info_category_t ;


 int * FUNC_0 (TYPE_1__*,int *,char const*) ;
 TYPE_2__* FUNC_1 (int const*,char const*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

char *FUNC_5( input_item_t *VAR_0,
                          const char *VAR_1,
                          const char *VAR_2 )
{
    FUNC_3( &VAR_0->lock );

    const info_category_t *VAR_3 = FUNC_0( VAR_0, ((void*)0), VAR_1 );
    if( VAR_3 )
    {
        info_t *VAR_4 = FUNC_1( VAR_3, VAR_2 );
        if( VAR_4 && VAR_4->psz_value )
        {
            char *VAR_5 = FUNC_2( VAR_4->psz_value );
            FUNC_4( &VAR_0->lock );
            return VAR_5;
        }
    }
    FUNC_4( &VAR_0->lock );
    return FUNC_2( "" );
}
