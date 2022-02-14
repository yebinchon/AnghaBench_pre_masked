
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct input_preparser_req_t {scalar_t__ cbs; } ;
struct TYPE_11__ {int worker; int deactivated; } ;
typedef TYPE_1__ input_preparser_t ;
struct TYPE_12__ {int (* on_preparse_ended ) (TYPE_3__*,int ,void*) ;} ;
typedef TYPE_2__ input_preparser_callbacks_t ;
struct TYPE_13__ {int i_type; int b_net; int b_preparse_interact; int lock; } ;
typedef TYPE_3__ input_item_t ;
typedef int input_item_meta_request_option_t ;
typedef enum input_item_type_e { ____Placeholder_input_item_type_e } input_item_type_e ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 struct input_preparser_req_t* FUNC_0 (TYPE_3__*,int,TYPE_2__ const*,void*) ;
 int FUNC_1 (struct input_preparser_req_t*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,struct input_preparser_req_t*,void*,int) ;
 int FUNC_4 (TYPE_3__*,int ,void*) ;
 int FUNC_5 (TYPE_3__*,int ,void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8( input_preparser_t *VAR_4,
    input_item_t *VAR_5, input_item_meta_request_option_t VAR_6,
    const input_preparser_callbacks_t *VAR_7, void *VAR_8,
    int VAR_9, void *VAR_10 )
{
    if( FUNC_2( &VAR_4->deactivated ) )
        return;

    FUNC_6( &VAR_5->lock );
    enum input_item_type_e VAR_11 = VAR_5->i_type;
    int VAR_12 = VAR_5->b_net;
    if( VAR_6 & VAR_2 )
        VAR_5->b_preparse_interact = 1;
    FUNC_7( &VAR_5->lock );

    switch( VAR_11 )
    {
        case 129:
        case 130:
        case 131:
        case 128:
            if( !VAR_12 || VAR_6 & VAR_3 )
                break;

        default:
            if (VAR_7 && VAR_7->on_preparse_ended)
                VAR_7->on_preparse_ended(VAR_5, VAR_1, VAR_8);
            return;
    }

    struct input_preparser_req_t *VAR_13 = FUNC_0(VAR_5, VAR_6,
                                                  VAR_7, VAR_8);

    if (FUNC_3(VAR_4->worker, VAR_13, VAR_10, VAR_9))
        if (VAR_13->cbs && VAR_7->on_preparse_ended)
            VAR_7->on_preparse_ended(VAR_5, VAR_0, VAR_8);

    FUNC_1(VAR_13);
}
