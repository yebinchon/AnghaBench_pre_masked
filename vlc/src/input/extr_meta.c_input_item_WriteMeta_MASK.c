
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int module_t ;
struct TYPE_10__ {int * psz_file; TYPE_2__* p_item; } ;
typedef TYPE_1__ meta_export_t ;
struct TYPE_11__ {int i_type; int lock; } ;
typedef TYPE_2__ input_item_t ;
typedef enum input_item_type_e { ____Placeholder_input_item_type_e } input_item_type_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_1__*,char*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 TYPE_1__* FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (char*) ;

int FUNC_10( vlc_object_t *VAR_4, input_item_t *VAR_5 )
{
    meta_export_t *VAR_6 =
        FUNC_5( VAR_4, sizeof( *VAR_6 ), "meta writer" );
    if( VAR_6 == ((void*)0) )
        return VAR_2;
    VAR_6->p_item = VAR_5;

    enum input_item_type_e VAR_7;
    FUNC_6( &VAR_5->lock );
    VAR_7 = VAR_5->i_type;
    FUNC_7( &VAR_5->lock );
    if( VAR_7 != VAR_0 )
        goto error;

    char *VAR_8 = FUNC_1( VAR_5 );
    VAR_6->psz_file = FUNC_9( VAR_8 );
    if( VAR_6->psz_file == ((void*)0) )
        FUNC_4( VAR_6, "cannot write meta to remote media %s", VAR_8 );
    FUNC_0( VAR_8 );
    if( VAR_6->psz_file == ((void*)0) )
        goto error;

    module_t *VAR_9 = FUNC_2( VAR_6, "meta writer", ((void*)0), 0 );
    if( VAR_9 )
        FUNC_3( VAR_6, VAR_9 );
    FUNC_8(VAR_6);
    return VAR_3;

error:
    FUNC_8(VAR_6);
    return VAR_1;
}
