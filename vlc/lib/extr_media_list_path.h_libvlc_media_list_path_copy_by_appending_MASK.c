
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* libvlc_media_list_path_t ;


 int FUNC_0 (int* const) ;
 int FUNC_1 (int*,int* const,int) ;
 int* FUNC_2 (int) ;

__attribute__((used)) static inline libvlc_media_list_path_t FUNC_3( const libvlc_media_list_path_t VAR_0, int VAR_1 )
{
    libvlc_media_list_path_t VAR_2;
    int VAR_3 = FUNC_0( VAR_0 );
    VAR_2 = FUNC_2( sizeof(int) * (VAR_3 + 2) );
    FUNC_1( VAR_2, VAR_0, sizeof(int) * VAR_3 );
    VAR_2[VAR_3] = VAR_1;
    VAR_2[VAR_3+1] = -1;
    return VAR_2;
}
