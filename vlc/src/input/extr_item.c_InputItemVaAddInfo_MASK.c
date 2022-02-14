
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_6__ {int pp_categories; int i_categories; int lock; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_7__ {int psz_value; } ;
typedef TYPE_2__ info_t ;
typedef int info_category_t ;


 int * FUNC_0 (TYPE_1__*,int *,char const*) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (char const*) ;
 TYPE_2__* FUNC_3 (int *,char const*,char const*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( input_item_t *VAR_3,
                               const char *VAR_4,
                               const char *VAR_5,
                               const char *VAR_6, va_list VAR_7 )
{
    FUNC_4( &VAR_3->lock );

    info_category_t *VAR_8 = FUNC_0( VAR_3, ((void*)0), VAR_4 );
    if( !VAR_8 )
    {
        VAR_8 = FUNC_2( VAR_4 );
        if( !VAR_8 )
            return VAR_1;
        FUNC_1(VAR_3->i_categories, VAR_3->pp_categories, VAR_8);
    }
    info_t *VAR_9 = FUNC_3( VAR_8, VAR_5, VAR_6, VAR_7 );
    if( !VAR_9 || !VAR_9->psz_value )
        return VAR_0;
    return VAR_2;
}
