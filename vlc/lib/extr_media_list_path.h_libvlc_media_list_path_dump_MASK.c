
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* libvlc_media_list_path_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline void FUNC_1( const libvlc_media_list_path_t VAR_0 )
{
    if(!VAR_0)
    {
        FUNC_0("NULL path\n");
        return;
    }

    for(int VAR_1 = 0; VAR_0[VAR_1] != -1; VAR_1++)
        FUNC_0("%s%d", VAR_1 > 0 ? "/" : "", VAR_0[VAR_1]);
    FUNC_0("\n");
}
