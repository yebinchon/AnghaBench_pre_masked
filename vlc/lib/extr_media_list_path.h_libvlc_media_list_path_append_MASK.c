
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* libvlc_media_list_path_t ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int*,int) ;

__attribute__((used)) static inline void FUNC_2( libvlc_media_list_path_t * VAR_0, int VAR_1 )
{
    int VAR_2 = FUNC_0( *VAR_0 );
    *VAR_0 = FUNC_1( *VAR_0, sizeof(int)*(VAR_2+2));
    *VAR_0[VAR_2] = VAR_1;
    *VAR_0[VAR_2+1] = -1;
}
