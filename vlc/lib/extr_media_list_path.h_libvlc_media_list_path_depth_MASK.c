
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* libvlc_media_list_path_t ;



__attribute__((used)) static inline int FUNC_0( const libvlc_media_list_path_t VAR_0 )
{
    int VAR_1;
    for( VAR_1 = 0; VAR_0[VAR_1] != -1; VAR_1++ );
    return VAR_1;
}
