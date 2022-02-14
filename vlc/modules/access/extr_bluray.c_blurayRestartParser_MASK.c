
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {int p_out; scalar_t__ p_parser; int p_tf_out; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(demux_t *VAR_4, bool VAR_5, bool VAR_6)
{





    demux_sys_t *VAR_7 = VAR_4->p_sys;

    if(VAR_5)
        FUNC_1(VAR_7->p_out, VAR_0);

    if (VAR_7->p_parser)
        FUNC_3(VAR_7->p_parser);

    if(VAR_5)
        FUNC_1(VAR_7->p_tf_out, VAR_3);

    VAR_7->p_parser = FUNC_4(FUNC_0(VAR_4), "ts", VAR_7->p_out);
    if (!VAR_7->p_parser)
        FUNC_2(VAR_4, "Failed to create TS demuxer");

    FUNC_1(VAR_7->p_out, VAR_1);

    FUNC_1(VAR_7->p_out, VAR_2, VAR_6);
}
