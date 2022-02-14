
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {scalar_t__ i_codec; int i_extra; void* p_extra; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ mp4mux_trackinfo_t ;
typedef int bo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,void*) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (char*) ;

__attribute__((used)) static bo_t *FUNC_8(vlc_object_t *VAR_6, mp4mux_trackinfo_t *VAR_7, bool VAR_8)
{
    FUNC_0(VAR_6);
    if(VAR_7->fmt.i_codec == VAR_1)
    {
        bo_t *VAR_9 = FUNC_7("text");
        if(!VAR_9)
            return ((void*)0);


        for (int VAR_10 = 0; VAR_10 < 6; VAR_10++)
            FUNC_4(VAR_9, 0);
        FUNC_1(VAR_9, 1);

        if(VAR_7->fmt.i_extra >= 44)
        {

            FUNC_5(VAR_9, VAR_7->fmt.i_extra, VAR_7->fmt.p_extra);
        }
        else
        {
            for (int VAR_11 = 0; VAR_11 < 6; VAR_11++)
                FUNC_4(VAR_9, 0);
            FUNC_1(VAR_9, 1);

            FUNC_2(VAR_9, 0);
            FUNC_2(VAR_9, 0);
            for (int VAR_12 = 0; VAR_12 < 3; VAR_12++)
                FUNC_1(VAR_9, 0);

            FUNC_3(VAR_9, 0);
            FUNC_3(VAR_9, 0);

            FUNC_1(VAR_9, 0);
            FUNC_1(VAR_9, 0);
            FUNC_4(VAR_9, 0);
            FUNC_1(VAR_9, 0);

            for (int VAR_13 = 0; VAR_13 < 3; VAR_13++)
                FUNC_1(VAR_9, 0xff);

            FUNC_4(VAR_9, 5);
            FUNC_5(VAR_9, 5, (void*)"Serif");
        }
        return VAR_9;
    }
    else if(VAR_7->fmt.i_codec == VAR_2 ||
            VAR_7->fmt.i_codec == VAR_4)
    {
        bo_t *VAR_14 = FUNC_7("tx3g");
        if(!VAR_14)
            return ((void*)0);


        for (int VAR_15 = 0; VAR_15 < 6; VAR_15++)
            FUNC_4(VAR_14, 0);
        FUNC_1(VAR_14, 1);

        if(VAR_7->fmt.i_codec == VAR_4 &&
           VAR_7->fmt.i_extra >= 32)
        {

            FUNC_5(VAR_14, VAR_7->fmt.i_extra, VAR_7->fmt.p_extra);
        }
        else
        {

            FUNC_2(VAR_14, 0);
            FUNC_1(VAR_14, 0);

            FUNC_2(VAR_14, 0);


            FUNC_3(VAR_14, 0);


            FUNC_1(VAR_14, 0);
            FUNC_1(VAR_14, 0);
            FUNC_1(VAR_14, 0);
            FUNC_4(VAR_14, 0);
            FUNC_4(VAR_14, VAR_0);
            FUNC_2(VAR_14, 0xFFFFFFFFU);


            bo_t *VAR_16 = FUNC_7("ftab");
            if(VAR_16)
            {
                FUNC_1(VAR_16, VAR_8 ? 2 : 3);

                FUNC_4(VAR_16, 5);
                FUNC_5(VAR_16, 5, (void*)"Serif");
                FUNC_4(VAR_16, 10);
                FUNC_5(VAR_16, 10, (void*) (VAR_8 ? "Sans-Serif" : "Sans-serif"));
                if(!VAR_8)
                {
                    FUNC_4(VAR_16, 9);
                    FUNC_5(VAR_16, 9, (void*)"Monospace");
                }

                FUNC_6(VAR_14, VAR_16);
            }
        }

        return VAR_14;
    }
    else if(VAR_7->fmt.i_codec == VAR_5)
    {
        bo_t *VAR_17 = FUNC_7("wvtt");
        if(!VAR_17)
            return ((void*)0);


        for (int VAR_18 = 0; VAR_18 < 6; VAR_18++)
            FUNC_4(VAR_17, 0);
        FUNC_1(VAR_17, 1);

        bo_t *VAR_19 = FUNC_7("vttc");
        FUNC_6(VAR_17, VAR_19);

        return VAR_17;
    }
    else if(VAR_7->fmt.i_codec == VAR_3)
    {
        bo_t *VAR_20 = FUNC_7("stpp");
        if(!VAR_20)
            return ((void*)0);


        for (int VAR_21 = 0; VAR_21 < 6; VAR_21++)
            FUNC_4(VAR_20, 0);
        FUNC_1(VAR_20, 1);

        return VAR_20;
    }

    return ((void*)0);
}
