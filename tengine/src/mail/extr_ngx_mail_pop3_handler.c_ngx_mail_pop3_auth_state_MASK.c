
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


struct TYPE_36__ {int nelts; } ;
struct TYPE_41__ {scalar_t__ len; } ;
struct TYPE_38__ {int blocked; int mail_state; int quit; TYPE_2__* buffer; int arg_start; int state; TYPE_1__ args; TYPE_6__ out; int command; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_39__ {scalar_t__ timedout; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_40__ {int timedout; int write; int log; TYPE_3__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_37__ {int start; int last; int pos; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_5__*,int) ;
 int FUNC_12 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_6__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_19(ngx_event_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_connection_t *VAR_9;
    ngx_mail_session_t *VAR_10;

    VAR_9 = VAR_7->data;
    VAR_10 = VAR_9->data;

    FUNC_0(VAR_2, VAR_9->log, 0, "pop3 auth state");

    if (VAR_7->timedout) {
        FUNC_1(VAR_3, VAR_9->log, VAR_1, "client timed out");
        VAR_9->timedout = 1;
        FUNC_8(VAR_9);
        return;
    }

    if (VAR_10->out.len) {
        FUNC_0(VAR_2, VAR_9->log, 0, "pop3 send handler busy");
        VAR_10->blocked = 1;
        return;
    }

    VAR_10->blocked = 0;

    VAR_8 = FUNC_15(VAR_10, VAR_9);

    if (VAR_8 == VAR_0 || VAR_8 == 146) {
        return;
    }

    FUNC_18(&VAR_10->out, VAR_5);

    if (VAR_8 == 144) {
        switch (VAR_10->mail_state) {

        case 129:

            switch (VAR_10->command) {

            case 136:
                VAR_8 = FUNC_14(VAR_10, VAR_9);
                break;

            case 141:
                VAR_8 = FUNC_11(VAR_10, VAR_9, 1);
                break;

            case 143:
                VAR_8 = FUNC_9(VAR_10, VAR_9);
                break;

            case 142:
                VAR_8 = FUNC_10(VAR_10, VAR_9);
                break;

            case 138:
                VAR_10->quit = 1;
                break;

            case 140:
                break;

            case 137:
                VAR_8 = FUNC_13(VAR_10, VAR_9);
                break;

            default:
                VAR_8 = 145;
                break;
            }

            break;

        case 128:

            switch (VAR_10->command) {

            case 139:
                VAR_8 = FUNC_12(VAR_10, VAR_9);
                break;

            case 141:
                VAR_8 = FUNC_11(VAR_10, VAR_9, 0);
                break;

            case 138:
                VAR_10->quit = 1;
                break;

            case 140:
                break;

            default:
                VAR_8 = 145;
                break;
            }

            break;


        case 130:
            break;

        case 132:
            VAR_8 = FUNC_6(VAR_10, VAR_9, 0);

            FUNC_18(&VAR_10->out, VAR_6);
            VAR_10->mail_state = 133;
            break;

        case 133:
            VAR_8 = FUNC_5(VAR_10, VAR_9);
            break;

        case 131:
            VAR_8 = FUNC_7(VAR_10, VAR_9, 0);
            break;

        case 135:
            VAR_8 = FUNC_3(VAR_10, VAR_9);
            break;

        case 134:
            VAR_8 = FUNC_4(VAR_10, VAR_9, 0);
            break;
        }
    }

    switch (VAR_8) {

    case 147:
        FUNC_2(VAR_10, VAR_9);
        return;

    case 146:
        FUNC_17(VAR_10);
        return;

    case 145:
        VAR_10->mail_state = 129;
        VAR_10->state = 0;

        FUNC_18(&VAR_10->out, VAR_4);



    case 144:

        VAR_10->args.nelts = 0;
        VAR_10->buffer->pos = VAR_10->buffer->start;
        VAR_10->buffer->last = VAR_10->buffer->start;

        if (VAR_10->state) {
            VAR_10->arg_start = VAR_10->buffer->start;
        }

        FUNC_16(VAR_9->write);
    }
}
