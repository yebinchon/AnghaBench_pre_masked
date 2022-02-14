
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {char* psz_location; int * out; int pf_control; int * pf_demux; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {int ** events; int * client; int * es; int * thread; int * ready; int frame_size; int caching; int start_time; } ;
typedef TYPE_2__ demux_sys_t ;
typedef int HRESULT ;
typedef int * HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int * FUNC_3 (TYPE_1__*,int *,int,int ,int *) ;
 void* FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int * FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 uintptr_t FUNC_11 (int *,int ,int ,TYPE_1__*,int ,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,char*) ;
 TYPE_2__* FUNC_16 (int *,int) ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(vlc_object_t *VAR_8)
{
    demux_t *VAR_9 = (demux_t *)VAR_8;
    HRESULT VAR_10;

    if (VAR_9->out == ((void*)0))
        return VAR_5;

    if (VAR_9->psz_location != ((void*)0) && *VAR_9->psz_location != '\0')
        return VAR_5;

    demux_sys_t *VAR_11 = FUNC_16(VAR_8, sizeof (*VAR_11));
    if (FUNC_14(VAR_11 == ((void*)0)))
        return VAR_6;

    VAR_11->client = ((void*)0);
    VAR_11->es = ((void*)0);
    VAR_11->caching = FUNC_9( FUNC_15(VAR_8, "live-caching") );
    VAR_11->start_time = FUNC_17();
    for (unsigned VAR_12 = 0; VAR_12 < 2; VAR_12++)
        VAR_11->events[VAR_12] = ((void*)0);

    for (unsigned VAR_13 = 0; VAR_13 < 2; VAR_13++) {
        VAR_11->events[VAR_13] = FUNC_4(((void*)0), VAR_2, VAR_2, ((void*)0));
        if (VAR_11->events[VAR_13] == ((void*)0))
            goto error;
    }

    VAR_10 = FUNC_1(((void*)0), VAR_0);
    if (FUNC_14(FUNC_5(VAR_10))) {
        FUNC_13(VAR_9, "cannot initialize COM (error 0x%lX)", VAR_10);
        goto error;
    }

    bool VAR_14;
    VAR_11->client = FUNC_6(VAR_9, &VAR_14);
    if (VAR_11->client == ((void*)0)) {
        FUNC_2();
        goto error;
    }

    VAR_11->es = FUNC_3(VAR_9, VAR_11->client, VAR_14, VAR_11->caching,
                       &VAR_11->frame_size);
    if (VAR_11->es == ((void*)0))
        goto error;

    VAR_10 = FUNC_8(VAR_11->client, VAR_11->events[1]);
    if (FUNC_5(VAR_10)) {
        FUNC_13(VAR_9, "cannot set event handle (error 0x%lX)", VAR_10);
        goto error;
    }

    VAR_9->p_sys = VAR_11;

    VAR_11->ready = FUNC_4(((void*)0), VAR_2, VAR_2, ((void*)0));
    if (VAR_11->ready == ((void*)0))
        goto error;

    uintptr_t VAR_15 = FUNC_11(((void*)0), 0, VAR_4, VAR_9, 0, ((void*)0));
    if (VAR_15 != 0)
        FUNC_10(VAR_11->ready, VAR_3);
    FUNC_0(VAR_11->ready);

    VAR_11->thread = (HANDLE)VAR_15;
    if (VAR_11->thread == ((void*)0))
        goto error;
    FUNC_2();

    VAR_9->pf_demux = ((void*)0);
    VAR_9->pf_control = VAR_1;
    return VAR_7;

error:
    if (VAR_11->es != ((void*)0))
        FUNC_12(VAR_9->out, VAR_11->es);
    if (VAR_11->client != ((void*)0))
    {
        FUNC_7(VAR_11->client);
        FUNC_2();
    }
    for (unsigned VAR_16 = 0; VAR_16 < 2; VAR_16++)
        if (VAR_11->events[VAR_16] != ((void*)0))
            FUNC_0(VAR_11->events[VAR_16]);
    return VAR_6;
}
