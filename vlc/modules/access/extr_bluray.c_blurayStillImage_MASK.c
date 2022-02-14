
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {scalar_t__ i_still_end_time; int bluray; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( demux_t *VAR_3, unsigned VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;


    if (VAR_5->i_still_end_time != VAR_2 &&
        VAR_5->i_still_end_time != VAR_1 &&
        VAR_5->i_still_end_time <= FUNC_7()) {
        FUNC_4(VAR_3, "Still image end");
        FUNC_1(VAR_5->bluray);

        FUNC_2(VAR_3);
        return;
    }


    if (VAR_5->i_still_end_time == VAR_2) {
        if (VAR_4) {
            FUNC_4(VAR_3, "Still image (%d seconds)", VAR_4);
            VAR_5->i_still_end_time = FUNC_7() + FUNC_6( VAR_4 );
        } else {
            FUNC_4(VAR_3, "Still image (infinite)");
            VAR_5->i_still_end_time = VAR_1;
        }


        FUNC_5(VAR_5);


        bool VAR_6;
        FUNC_3( VAR_3->out, VAR_0, &VAR_6 );
    }


    FUNC_8( FUNC_0(40) );
}
