
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_17__ {int i_size; TYPE_5__* p_elems; } ;
struct TYPE_19__ {int b_draining; int b_menu; int b_flushed; int p_parser; scalar_t__ b_fatal_error; TYPE_1__ events_delayed; int bluray; int p_out; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_20__ {int i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_21__ {scalar_t__ event; } ;
typedef TYPE_5__ BD_EVENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_5__*) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int ,...) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (int ,TYPE_4__*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(demux_t *VAR_8)
{
    demux_sys_t *VAR_9 = VAR_8->p_sys;
    BD_EVENT VAR_10;

    if(VAR_9->b_draining)
    {
        bool VAR_11 = 0;
        if(FUNC_8(VAR_9->p_out, VAR_2, &VAR_11) != VAR_7 || VAR_11)
        {
            FUNC_8(VAR_9->p_out, VAR_3);
            VAR_9->b_draining = 0;
        }
        else
        {
            FUNC_9(VAR_8, "Draining...");
            FUNC_12(FUNC_0(40));
            return VAR_6;
        }
    }

    block_t *VAR_12 = FUNC_4(VAR_1);
    if (!VAR_12)
        return VAR_4;

    int VAR_13;

    if (VAR_9->b_menu == 0) {
        VAR_13 = FUNC_2(VAR_9->bluray, VAR_12->p_buffer, VAR_1);
        while (FUNC_1(VAR_9->bluray, &VAR_10))
            FUNC_6(VAR_8, &VAR_10, 0);
    } else {
        VAR_13 = FUNC_3(VAR_9->bluray, VAR_12->p_buffer, VAR_1, &VAR_10);
        while (VAR_10.event != VAR_0) {
            FUNC_6(VAR_8, &VAR_10, 0);
            FUNC_1(VAR_9->bluray, &VAR_10);
        }
    }


    for(int VAR_14=0; VAR_14<VAR_9->events_delayed.i_size; VAR_14++)
        FUNC_6(VAR_8, &VAR_9->events_delayed.p_elems[VAR_14], 1);
    VAR_9->events_delayed.i_size = 0;

    FUNC_7(VAR_8);

    if (VAR_13 <= 0) {
        FUNC_5(VAR_12);
        if (VAR_9->b_fatal_error || VAR_13 < 0) {
            FUNC_10(VAR_8, "bluray: stopping playback after fatal error\n");
            return VAR_4;
        }
        if (!VAR_9->b_menu) {
            return VAR_5;
        }
        return VAR_6;
    }

    VAR_12->i_buffer = VAR_13;

    FUNC_11(VAR_9->p_parser, VAR_12);

    VAR_9->b_flushed = 0;

    return VAR_6;
}
