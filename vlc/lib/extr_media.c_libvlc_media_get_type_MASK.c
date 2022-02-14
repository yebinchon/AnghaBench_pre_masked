
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int libvlc_media_type_t ;
struct TYPE_5__ {TYPE_2__* p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
struct TYPE_6__ {int i_type; int lock; } ;
typedef TYPE_2__ input_item_t ;
typedef enum input_item_type_e { ____Placeholder_input_item_type_e } input_item_type_e ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

libvlc_media_type_t FUNC_3( libvlc_media_t *VAR_6 )
{
    FUNC_0( VAR_6 );

    enum input_item_type_e VAR_7;
    input_item_t *VAR_8 = VAR_6->p_input_item;

    FUNC_1( &VAR_8->lock );
    VAR_7 = VAR_6->p_input_item->i_type;
    FUNC_2( &VAR_8->lock );

    switch( VAR_7 )
    {
    case 131:
        return VAR_2;
    case 130:
    case 133:
        return VAR_0;
    case 132:
        return VAR_1;
    case 128:
        return VAR_4;
    case 129:
        return VAR_3;
    default:
        return VAR_5;
    }
}
