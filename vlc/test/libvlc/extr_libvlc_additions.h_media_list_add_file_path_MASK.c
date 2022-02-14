
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int *,char const*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void* FUNC_3(libvlc_instance_t *VAR_0, libvlc_media_list_t *VAR_1, const char * VAR_2)
{
    libvlc_media_t *VAR_3 = FUNC_1 (VAR_0, VAR_2);
    FUNC_0 (VAR_1, VAR_3);
    FUNC_2 (VAR_3);
    return VAR_3;
}
