
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t libvlc_meta_t ;
struct TYPE_5__ {TYPE_3__* p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
struct TYPE_6__ {int * psz_name; } ;


 char* FUNC_0 (TYPE_3__*,int ) ;
 char* FUNC_1 (TYPE_3__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 char* FUNC_2 (int *) ;

char *FUNC_3( libvlc_media_t *VAR_3, libvlc_meta_t VAR_4 )
{
    char *VAR_5 = ((void*)0);

    if( VAR_4 == VAR_0 )
    {
        VAR_5 = FUNC_1( VAR_3->p_input_item );
    }
    else
    {
        VAR_5 = FUNC_0( VAR_3->p_input_item,
                                             VAR_2[VAR_4] );

        if( VAR_5 == ((void*)0) && VAR_4 == VAR_1
         && VAR_3->p_input_item->psz_name != ((void*)0) )
            VAR_5 = FUNC_2( VAR_3->p_input_item->psz_name );
    }
    return VAR_5;
}
