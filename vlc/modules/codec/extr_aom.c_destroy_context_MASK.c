
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int aom_codec_ctx_t ;


 int FUNC_0 (int *,int *,char*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(vlc_object_t *VAR_0, aom_codec_ctx_t *VAR_1)
{
    if (FUNC_1(VAR_1))
        FUNC_0(VAR_0, VAR_1, "Failed to destroy codec context");
}
