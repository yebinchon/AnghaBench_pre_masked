
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef int libvlc_media_list_path_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static inline libvlc_media_list_path_t FUNC_3( libvlc_media_list_t * VAR_0, libvlc_media_t * VAR_1 )
{
    libvlc_media_list_path_t VAR_2 = FUNC_2();
    libvlc_media_list_path_t VAR_3;
    VAR_3 = FUNC_1( VAR_2, VAR_0, VAR_1 );
    FUNC_0( VAR_2 );
    return VAR_3;
}
