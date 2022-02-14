
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
typedef int libvlc_media_slave_type_t ;
typedef int input_item_t ;
typedef int input_item_slave_t ;
typedef enum slave_type { ____Placeholder_slave_type } slave_type ;
typedef enum slave_priority { ____Placeholder_slave_priority } slave_priority ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * FUNC_2 (char const*,int,int) ;


 int FUNC_3 () ;

int FUNC_4( libvlc_media_t *VAR_8,
                             libvlc_media_slave_type_t VAR_9,
                             unsigned int VAR_10,
                             const char *VAR_11 )
{
    FUNC_0( VAR_8 && VAR_11 );
    input_item_t *VAR_12 = VAR_8->p_input_item;

    enum slave_type VAR_13;
    switch( VAR_9 )
    {
    case 128:
        VAR_13 = VAR_6;
        break;
    case 129:
        VAR_13 = VAR_5;
        break;
    default:
        FUNC_3();
        return -1;
    }

    enum slave_priority VAR_14;
    switch( VAR_10 )
    {
    case 0:
        VAR_14 = VAR_2;
        break;
    case 1:
        VAR_14 = VAR_3;
        break;
    case 2:
        VAR_14 = VAR_1;
        break;
    case 3:
        VAR_14 = VAR_0;
        break;
    default:
    case 4:
        VAR_14 = VAR_4;
        break;
    }

    input_item_slave_t *VAR_15 = FUNC_2( VAR_11,
                                                      VAR_13,
                                                      VAR_14 );
    if( VAR_15 == ((void*)0) )
        return -1;
    return FUNC_1( VAR_12, VAR_15 ) == VAR_7 ? 0 : -1;
}
