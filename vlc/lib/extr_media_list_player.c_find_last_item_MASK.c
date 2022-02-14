
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_list_t ;
typedef int libvlc_media_list_path_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static libvlc_media_list_path_t
FUNC_5( libvlc_media_list_t * VAR_0, libvlc_media_list_path_t VAR_1 )
{
    libvlc_media_list_t * VAR_2 = FUNC_4(VAR_0, VAR_1);
    libvlc_media_list_path_t VAR_3 = VAR_1;

    if(VAR_2)
    {
        int VAR_4 = FUNC_1(VAR_2);
        if(VAR_4 > 0)
        {

            VAR_3 = FUNC_2(VAR_1, VAR_4 - 1);
            FUNC_0(VAR_1);

            VAR_3 = FUNC_5(VAR_0, VAR_3);
        }

        FUNC_3(VAR_2);
    }

    return VAR_3;
}
