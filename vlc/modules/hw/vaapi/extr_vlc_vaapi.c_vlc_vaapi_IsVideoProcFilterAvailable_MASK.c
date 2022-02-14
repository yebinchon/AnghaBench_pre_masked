
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef scalar_t__ VAProcFilterType ;
typedef int VADisplay ;
typedef int VAContextID ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,scalar_t__*,unsigned int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_1(vlc_object_t *VAR_4, VADisplay VAR_5,
                                     VAContextID VAR_6, VAProcFilterType VAR_7)
{
    VAProcFilterType VAR_8[VAR_0];
    unsigned int VAR_9 = VAR_0;

    FUNC_0(VAR_4, VAR_3, VAR_5, VAR_6, VAR_8, &VAR_9);
    for (unsigned int VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10)
        if (VAR_7 == VAR_8[VAR_10])
            return VAR_2;
    return VAR_1;
error: return VAR_1;
}
