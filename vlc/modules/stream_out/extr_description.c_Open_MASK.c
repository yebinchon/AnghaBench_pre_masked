
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {TYPE_2__* p_sys; int pf_send; int pf_del; int pf_add; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_8__ {int i_stream_start; int * data; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_7 )
{
    sout_stream_t *VAR_8 = (sout_stream_t*)VAR_7;
    sout_stream_sys_t *VAR_9 = FUNC_1(sizeof(sout_stream_sys_t));
    if( FUNC_3(VAR_9 == ((void*)0)) )
        return VAR_4;

    VAR_8->pf_add = VAR_0;
    VAR_8->pf_del = VAR_1;
    VAR_8->pf_send = VAR_2;
    VAR_8->p_sys = VAR_9;

    VAR_9->data = FUNC_4(VAR_8, "sout-description-data");
    if (VAR_9->data == ((void*)0))
    {
        FUNC_2(VAR_8, "Missing data: the description stream output is "
                "not meant to be used without special setup from the core");
        FUNC_0(VAR_9);
        return VAR_3;
    }
    VAR_9->i_stream_start = VAR_6;

    return VAR_5;
}
