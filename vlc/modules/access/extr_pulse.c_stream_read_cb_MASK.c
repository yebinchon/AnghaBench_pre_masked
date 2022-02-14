
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ pa_usec_t ;
typedef int pa_stream ;
struct TYPE_7__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {size_t framesize; int discontinuity; int * es; int context; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_9__ {unsigned int i_nb_samples; int i_flags; int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (size_t) ;
 int FUNC_1 (int ,int *,TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,void const*,size_t) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*,int*) ;
 scalar_t__ FUNC_7 (int *,void const**,size_t*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,char*,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(pa_stream *VAR_1, size_t VAR_2, void *VAR_3)
{
    demux_t *VAR_4 = VAR_3;
    demux_sys_t *VAR_5 = VAR_4->p_sys;
    const void *VAR_6;
    unsigned VAR_7 = VAR_2 / VAR_5->framesize;

    if (FUNC_7(VAR_1, &VAR_6, &VAR_2) < 0) {
        FUNC_9(VAR_4, "cannot peek stream", VAR_5->context);
        return;
    }

    vlc_tick_t VAR_8 = FUNC_10();
    pa_usec_t VAR_9;
    int VAR_10;

    if (FUNC_6(VAR_1, &VAR_9, &VAR_10) < 0) {
        FUNC_9(VAR_4, "cannot determine latency", VAR_5->context);
        return;
    }
    if (VAR_10)
        VAR_8 += VAR_9;
    else
        VAR_8 -= VAR_9;

    FUNC_2(VAR_4->out, VAR_8);
    if (FUNC_8(VAR_5->es == ((void*)0)))
        goto race;

    block_t *VAR_11 = FUNC_0(VAR_2);
    if (FUNC_3(VAR_11 != ((void*)0))) {
        FUNC_4(VAR_11->p_buffer, VAR_6, VAR_2);
        VAR_11->i_nb_samples = VAR_7;
        VAR_11->i_dts = VAR_11->i_pts = VAR_8;
        if (VAR_5->discontinuity) {
            VAR_11->i_flags |= VAR_0;
            VAR_5->discontinuity = 0;
        }

        FUNC_1(VAR_4->out, VAR_5->es, VAR_11);
    } else
        VAR_5->discontinuity = 1;
race:
    FUNC_5(VAR_1);
}
