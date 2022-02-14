
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int VASurfaceID ;
typedef int VADisplay ;
typedef int VAContextID ;
typedef int VAConfigID ;


 int FUNC_0 (int *,int ,int ,int ,int,int,int,int *,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

VAContextID
FUNC_1(vlc_object_t *VAR_2, VADisplay VAR_3, VAConfigID VAR_4,
                        int VAR_5, int VAR_6, int VAR_7,
                        VASurfaceID *VAR_8, int VAR_9)
{
    VAContextID VAR_10;
    FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
            VAR_8, VAR_9, &VAR_10);
    return VAR_10;
error: return VAR_0;
}
