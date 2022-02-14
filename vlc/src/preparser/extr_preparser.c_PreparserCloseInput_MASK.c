
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int preparse_status; TYPE_4__* req; int parser; int state; } ;
typedef TYPE_2__ input_preparser_task_t ;
struct TYPE_11__ {scalar_t__ fetcher; } ;
typedef TYPE_3__ input_preparser_t ;
struct TYPE_12__ {int options; int userdata; int * item; TYPE_1__* cbs; } ;
typedef TYPE_4__ input_preparser_req_t ;
typedef int input_item_t ;
struct TYPE_9__ {int (* on_preparse_ended ) (int *,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;


 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int *,int,int *,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int ) ;

__attribute__((used)) static void FUNC_8( void* VAR_5, void* VAR_6 )
{
    input_preparser_task_t* VAR_7 = VAR_6;
    input_preparser_req_t *VAR_8 = VAR_7->req;

    input_preparser_t* VAR_9 = VAR_5;
    input_item_t* VAR_10 = VAR_8->item;

    int VAR_11;
    switch( FUNC_2( &VAR_7->state ) )
    {
        case 128:
            VAR_11 = VAR_0;
            break;
        case 129:
            VAR_11 = VAR_2;
            break;
        default:
            VAR_11 = VAR_1;
            break;
    }

    FUNC_6( VAR_7->parser );

    if( VAR_9->fetcher && (VAR_8->options & VAR_3) )
    {
        VAR_7->preparse_status = VAR_11;
        FUNC_0(VAR_7->req);
        if (!FUNC_4(VAR_9->fetcher, VAR_10,
                                VAR_8->options & VAR_3,
                                &VAR_4, VAR_7))
        {
            return;
        }
        FUNC_1(VAR_7->req);
    }

    FUNC_3(VAR_7);

    FUNC_5( VAR_10, 1 );
    if (VAR_8->cbs && VAR_8->cbs->on_preparse_ended)
        VAR_8->cbs->on_preparse_ended(VAR_8->item, VAR_11, VAR_8->userdata);
}
