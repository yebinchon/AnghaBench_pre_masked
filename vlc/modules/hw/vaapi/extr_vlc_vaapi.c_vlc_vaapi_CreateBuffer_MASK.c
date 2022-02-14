
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int VADisplay ;
typedef int VAContextID ;
typedef int VABufferType ;
typedef int VABufferID ;


 int FUNC_0 (int *,int ,int ,int ,int ,unsigned int,unsigned int,void*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

VABufferID
FUNC_1(vlc_object_t *VAR_2, VADisplay VAR_3, VAContextID VAR_4,
                       VABufferType VAR_5, unsigned int VAR_6,
                       unsigned int VAR_7, void *VAR_8)
{
    VABufferID VAR_9;
    FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5,
            VAR_6, VAR_7, VAR_8, &VAR_9);
    return VAR_9;
error: return VAR_0;
}
