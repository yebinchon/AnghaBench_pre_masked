
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int config_chain_t ;
typedef int audio_sample_format_t ;
typedef int aout_filters_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int *,int *,int const*,int *) ;
 int FUNC_1 (char**,char*,int,int,int,int,int,int,int,int,int) ;
 char* FUNC_2 (char**,int **,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(vlc_object_t *VAR_1, aout_filters_t *restrict VAR_2,
                             audio_sample_format_t *restrict VAR_3,
                             const audio_sample_format_t *restrict VAR_4,
                             const int *VAR_5)
{
    char *VAR_6;
    config_chain_t *VAR_7;


    static const uint8_t VAR_8[] = { 0, 2, 6, 7, 3, 5, 4, 1, 8 };
    int VAR_9[VAR_0];
    bool VAR_10 = 0;
    for (int VAR_11 = 0; VAR_11 < VAR_0; ++VAR_11)
    {
        if (VAR_5[VAR_11] != VAR_11)
            VAR_10 = 1;
        VAR_9[VAR_11] = VAR_5[VAR_11] >= 0 ? VAR_8[VAR_5[VAR_11]] : -1;
    }
    if (!VAR_10)
        return 0;

    char *VAR_12;
    int VAR_13 = FUNC_1(&VAR_12, "remap{channel-left=%d,channel-right=%d,"
                       "channel-middleleft=%d,channel-middleright=%d,"
                       "channel-rearleft=%d,channel-rearright=%d,"
                       "channel-rearcenter=%d,channel-center=%d,"
                       "channel-lfe=%d,normalize=false}",
                       VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3], VAR_9[4],
                       VAR_9[5], VAR_9[6], VAR_9[7], VAR_9[8]);
    if (VAR_13 == -1)
        return -1;

    FUNC_4(FUNC_2(&VAR_6, &VAR_7, VAR_12));
    if (VAR_6 != ((void*)0) && VAR_7 != ((void*)0))
        VAR_13 = FUNC_0(VAR_1, "audio filter", VAR_6, VAR_2,
                           VAR_3, VAR_4, VAR_7);
    else
        VAR_13 = -1;

    FUNC_4(VAR_12);
    FUNC_4(VAR_6);
    if (VAR_7)
        FUNC_3(VAR_7);
    return VAR_13;
}
