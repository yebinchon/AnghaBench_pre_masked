
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* libvlc_media_list_path_t ;


 int* FUNC_0 (int) ;

__attribute__((used)) static inline libvlc_media_list_path_t FUNC_1( int VAR_0 )
{
    libvlc_media_list_path_t VAR_1 = FUNC_0(sizeof(int)*2);
    VAR_1[0] = VAR_0;
    VAR_1[1] = -1;
    return VAR_1;
}
