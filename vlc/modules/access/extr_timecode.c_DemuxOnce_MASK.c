
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* vlc_tick_t ;
struct TYPE_11__ {int rem; void* quot; } ;
typedef TYPE_1__ lldiv_t ;
struct TYPE_12__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_15__ {int i_divider_num; int i_divider_den; } ;
struct TYPE_13__ {int es; TYPE_7__ date; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_14__ {int i_buffer; void* i_length; void* i_dts; void* i_pts; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char**,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (char*,int) ;
 void* FUNC_3 (TYPE_7__*) ;
 void* FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (int ,int ,TYPE_4__*) ;
 int FUNC_6 (int ,void*) ;
 TYPE_1__ FUNC_7 (void*,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9 (demux_t *VAR_2, bool VAR_3)
{
    demux_sys_t *VAR_4 = VAR_2->p_sys;
    vlc_tick_t VAR_5 = FUNC_3 (&VAR_4->date);
    lldiv_t VAR_6;
    unsigned VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_6 = FUNC_7 (VAR_5 - VAR_1, VAR_0);
    VAR_10 = VAR_6.rem * VAR_4->date.i_divider_num / VAR_4->date.i_divider_den / VAR_0;
    VAR_6 = FUNC_7 (VAR_6.quot, 60);
    VAR_9 = VAR_6.rem;
    VAR_6 = FUNC_7 (VAR_6.quot, 60);
    VAR_8 = VAR_6.rem;
    VAR_7 = VAR_6.quot;

    char *VAR_11;
    int VAR_12 = FUNC_0 (&VAR_11, "%02u:%02u:%02u:%02u", VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_12 == -1)
        return -1;

    block_t *VAR_13 = FUNC_2 (VAR_11, VAR_12 + 1);
    if (FUNC_8(VAR_13 == ((void*)0)))
        return -1;

    VAR_13->i_buffer = VAR_12;
    FUNC_1(VAR_11[VAR_12] == '\0');

    VAR_13->i_pts = VAR_13->i_dts = VAR_5;
    VAR_13->i_length = FUNC_4 (&VAR_4->date, 1) - VAR_5;
    FUNC_5 (VAR_2->out, VAR_4->es, VAR_13);
    if (VAR_3)
        FUNC_6(VAR_2->out, VAR_5);
    return 1;
}
