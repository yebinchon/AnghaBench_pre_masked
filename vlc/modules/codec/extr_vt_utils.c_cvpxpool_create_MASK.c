
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_chroma; unsigned int i_visible_width; unsigned int i_visible_height; } ;
typedef TYPE_1__ video_format_t ;
typedef scalar_t__ CVReturn ;
typedef int * CVPixelBufferRef ;
typedef int * CVPixelBufferPoolRef ;
typedef int * CFMutableDictionaryRef ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int **) ;
 scalar_t__ FUNC_3 (int *,int *,int **) ;
 int FUNC_4 (int *) ;





 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_7 (int ) ;

CVPixelBufferPoolRef
FUNC_8(const video_format_t *VAR_12, unsigned VAR_13)
{
    int VAR_14;
    switch (VAR_12->i_chroma)
    {
        case 128:
            VAR_14 = VAR_10;
            break;
        case 130:
            VAR_14 = VAR_8;
            break;
        case 131:
            VAR_14 = VAR_9;
            break;
        case 132:
            VAR_14 = VAR_7;
            break;
        case 129:
            VAR_14 = 'x420';
            break;
        default:
            return ((void*)0);
    }


    CFMutableDictionaryRef VAR_15 = FUNC_5(5);
    if (FUNC_7(VAR_15 == ((void*)0)))
        return ((void*)0);
    CFMutableDictionaryRef VAR_16 = FUNC_5(2);
    if (FUNC_7(VAR_16 == ((void*)0)))
    {
        FUNC_1(VAR_15);
        return ((void*)0);
    }

    CFMutableDictionaryRef VAR_17 = FUNC_5(0);
    if (FUNC_7(VAR_17 == ((void*)0)))
    {
        FUNC_1(VAR_15);
        FUNC_1(VAR_16);
        return ((void*)0);
    }
    FUNC_0(VAR_15,
                         VAR_2, VAR_17);
    FUNC_1(VAR_17);

    FUNC_6(VAR_15, VAR_3,
                     VAR_14);
    FUNC_6(VAR_15, VAR_6, VAR_12->i_visible_width);
    FUNC_6(VAR_15, VAR_1, VAR_12->i_visible_height);

    FUNC_6(VAR_15, VAR_0, 16);

    FUNC_6(VAR_16, VAR_5, VAR_13);
    FUNC_6(VAR_16, VAR_4, 0);

    CVPixelBufferPoolRef VAR_18;
    CVReturn VAR_19 =
        FUNC_2(((void*)0), VAR_16, VAR_15, &VAR_18);
    FUNC_1(VAR_16);
    FUNC_1(VAR_15);
    if (VAR_19 != VAR_11)
        return ((void*)0);

    CVPixelBufferRef VAR_20[VAR_13];
    for (unsigned VAR_21 = 0; VAR_21 < VAR_13; ++VAR_21)
    {
        VAR_19 = FUNC_3(((void*)0), VAR_18, &VAR_20[VAR_21]);
        if (VAR_19 != VAR_11)
        {
            FUNC_4(VAR_18);
            VAR_18 = ((void*)0);
            VAR_13 = VAR_21;
            break;
        }
    }
    for (unsigned VAR_22 = 0; VAR_22 < VAR_13; ++VAR_22)
        FUNC_1(VAR_20[VAR_22]);

    return VAR_18;
}
