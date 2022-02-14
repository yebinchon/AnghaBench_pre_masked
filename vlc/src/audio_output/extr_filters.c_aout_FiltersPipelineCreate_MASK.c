
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int filter_t ;
typedef int config_chain_t ;
struct TYPE_13__ {scalar_t__ i_physical_channels; scalar_t__ i_chan_mode; scalar_t__ channel_type; scalar_t__ i_format; scalar_t__ i_rate; } ;
typedef TYPE_1__ audio_sample_format_t ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,int *,char const*,int *,TYPE_1__*,TYPE_1__*,int *,int) ;
 int * FUNC_2 (int *,TYPE_1__*,TYPE_1__*) ;
 int * FUNC_3 (int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int **,unsigned int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,char*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (int *,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_13(vlc_object_t *VAR_1, filter_t **VAR_2,
                                      unsigned *VAR_3, unsigned VAR_4,
                                 const audio_sample_format_t *restrict VAR_5,
                                 const audio_sample_format_t *restrict VAR_6,
                                 bool VAR_7)
{
    FUNC_7 (VAR_1, "conversion:", VAR_5, VAR_6);
    VAR_4 -= *VAR_3;
    VAR_2 += *VAR_3;




    audio_sample_format_t VAR_8 = *VAR_5;
    unsigned VAR_9 = 0;

    if (!FUNC_0(&VAR_8))
    {
        FUNC_11(VAR_1, "Can't convert non linear input");
        return -1;
    }


    if (VAR_5->i_physical_channels != VAR_6->i_physical_channels
     || VAR_5->i_chan_mode != VAR_6->i_chan_mode
     || VAR_5->channel_type != VAR_6->channel_type)
    {
        if (VAR_8.i_format != VAR_0)
        {
            if (VAR_9 == VAR_4)
                goto overflow;

            filter_t *VAR_10 = FUNC_3 (VAR_1, VAR_0, &VAR_8);
            if (VAR_10 == ((void*)0))
            {
                FUNC_11 (VAR_1, "cannot find %s for conversion pipeline",
                         "pre-mix converter");
                goto error;
            }

            VAR_2[VAR_9++] = VAR_10;
        }

        if (VAR_9 == VAR_4)
            goto overflow;

        audio_sample_format_t VAR_11;
        VAR_11.i_format = VAR_8.i_format;
        VAR_11.i_rate = VAR_8.i_rate;
        VAR_11.i_physical_channels = VAR_6->i_physical_channels;
        VAR_11.channel_type = VAR_6->channel_type;
        VAR_11.i_chan_mode = VAR_6->i_chan_mode;
        FUNC_6 (&VAR_11);

        const char *VAR_12 =
            VAR_5->channel_type != VAR_6->channel_type ?
            "audio renderer" : "audio converter";

        config_chain_t *VAR_13 = ((void*)0);
        if (VAR_7)
            FUNC_9(&VAR_13, "{headphones=true}");
        filter_t *VAR_14 = FUNC_1(VAR_1, ((void*)0), VAR_12, ((void*)0),
                                   &VAR_8, &VAR_11, VAR_13, 1);
        if (VAR_13)
            FUNC_8(VAR_13);

        if (VAR_14 == ((void*)0))
        {
            FUNC_11 (VAR_1, "cannot find %s for conversion pipeline",
                     "remixer");
            goto error;
        }

        VAR_8 = VAR_11;
        VAR_2[VAR_9++] = VAR_14;
    }


    if (VAR_8.i_rate != VAR_6->i_rate)
    {
        if (VAR_9 == VAR_4)
            goto overflow;

        audio_sample_format_t VAR_15 = VAR_8;
        VAR_15.i_rate = VAR_6->i_rate;

        filter_t *VAR_16 = FUNC_2 (VAR_1, &VAR_8, &VAR_15);
        if (VAR_16 == ((void*)0))
        {
            FUNC_11 (VAR_1, "cannot find %s for conversion pipeline",
                     "resampler");
            goto error;
        }

        VAR_8 = VAR_15;
        VAR_2[VAR_9++] = VAR_16;
    }


    if (VAR_8.i_format != VAR_6->i_format)
    {
        if (VAR_4 == 0)
            goto overflow;

        filter_t *VAR_17 = FUNC_3 (VAR_1, VAR_6->i_format, &VAR_8);
        if (VAR_17 == ((void*)0))
        {
            FUNC_11 (VAR_1, "cannot find %s for conversion pipeline",
                     "post-mix converter");
            goto error;
        }
        VAR_2[VAR_9++] = VAR_17;
    }

    FUNC_10 (VAR_1, "conversion pipeline complete");
    *VAR_3 += VAR_9;
    return 0;

overflow:
    FUNC_11 (VAR_1, "maximum of %u conversion filters reached", VAR_4);
    FUNC_12 (VAR_1, FUNC_4("Audio filtering failed"),
        FUNC_4("The maximum number of filters (%u) was reached."), VAR_4);
error:
    FUNC_5 (VAR_2, VAR_9);
    return -1;
}
