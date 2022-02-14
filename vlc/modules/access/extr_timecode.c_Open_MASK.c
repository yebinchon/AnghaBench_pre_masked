
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int es_format_t ;
struct TYPE_6__ {int pf_control; int pf_demux; TYPE_2__* p_sys; int * out; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {int next_time; int date; int es; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,unsigned int,unsigned int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,unsigned int*,unsigned int*,char*) ;
 TYPE_2__* FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8 (vlc_object_t *VAR_9)
{
    demux_t *VAR_10 = (demux_t *)VAR_9;
    if (VAR_10->out == ((void*)0))
        return VAR_4;

    demux_sys_t *VAR_11 = FUNC_7(VAR_9, sizeof (*VAR_11));
    if (FUNC_5(VAR_11 == ((void*)0)))
        return VAR_5;

    es_format_t VAR_12;
    FUNC_2 (&VAR_12, VAR_2, VAR_3);
    VAR_11->es = FUNC_3 (VAR_10->out, &VAR_12);

    unsigned VAR_13, VAR_14;
    if (FUNC_6 (VAR_10, &VAR_13, &VAR_14, "timecode-fps")
     || !VAR_13 || !VAR_14)
    {
        FUNC_4 (VAR_10, "invalid frame rate");
        return VAR_4;
    }

    FUNC_0 (&VAR_11->date, VAR_13, VAR_14);
    FUNC_1 (&VAR_11->date, VAR_7);
    VAR_11->next_time = VAR_8;

    VAR_10->p_sys = VAR_11;
    VAR_10->pf_demux = VAR_1;
    VAR_10->pf_control = VAR_0;
    return VAR_6;
}
