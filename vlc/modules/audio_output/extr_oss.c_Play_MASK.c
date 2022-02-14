
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_8__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;
struct TYPE_9__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_10__ {int fd; } ;
typedef TYPE_3__ aout_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(audio_output_t *VAR_1, block_t *VAR_2, vlc_tick_t VAR_3)
{
    aout_sys_t *VAR_4 = VAR_1->sys;
    int VAR_5 = VAR_4->fd;

    while (VAR_2->i_buffer > 0)
    {
        ssize_t VAR_6 = FUNC_3 (VAR_5, VAR_2->p_buffer, VAR_2->i_buffer);
        if (VAR_6 >= 0)
        {
            VAR_2->p_buffer += VAR_6;
            VAR_2->i_buffer -= VAR_6;
        }
        else
            FUNC_1 (VAR_1, "cannot write samples: %s", FUNC_2(VAR_0));
    }
    FUNC_0 (VAR_2);
    (void) VAR_3;
}
