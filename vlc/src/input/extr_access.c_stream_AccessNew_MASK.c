
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct vlc_access_stream_private {int * input; } ;
struct TYPE_11__ {struct TYPE_11__* p_sys; int pf_control; int pf_seek; int * pf_read; int * pf_block; int * psz_url; int * p_input_item; } ;
typedef TYPE_1__ stream_t ;
typedef int input_thread_t ;
typedef int es_out_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int *,int *,int,char const*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ,int ,int,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 struct vlc_access_stream_private* FUNC_9 (TYPE_1__*) ;

stream_t *FUNC_10(vlc_object_t *VAR_5, input_thread_t *VAR_6,
                           es_out_t *VAR_7, bool VAR_8, const char *VAR_9)
{
    stream_t *VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    if (VAR_10 == ((void*)0))
        return ((void*)0);

    stream_t *VAR_11;

    if (VAR_10->pf_block != ((void*)0) || VAR_10->pf_read != ((void*)0))
    {
        struct vlc_access_stream_private *VAR_12;
        VAR_11 = FUNC_7(FUNC_0(VAR_10), VAR_1,
                                 sizeof(*VAR_12), "stream");

        if (FUNC_5(VAR_11 == ((void*)0)))
        {
            FUNC_8(VAR_10);
            return ((void*)0);
        }
        VAR_12 = FUNC_9(VAR_11);
        VAR_12->input = VAR_6;

        VAR_11->p_input_item = VAR_6 ? FUNC_2(VAR_6) : ((void*)0);
        VAR_11->psz_url = FUNC_3(VAR_10->psz_url);
        if (FUNC_5(VAR_11->psz_url == ((void*)0)))
        {
            FUNC_6(VAR_11);
            FUNC_8(VAR_10);
            return ((void*)0);
        }

        if (VAR_10->pf_block != ((void*)0))
            VAR_11->pf_block = VAR_2;
        if (VAR_10->pf_read != ((void*)0))
            VAR_11->pf_read = VAR_3;

        VAR_11->pf_seek = VAR_4;
        VAR_11->pf_control = VAR_0;
        VAR_11->p_sys = VAR_10;

        VAR_11 = FUNC_4(VAR_11, "prefetch,cache");
    }
    else
        VAR_11 = VAR_10;

    return VAR_11;
}
