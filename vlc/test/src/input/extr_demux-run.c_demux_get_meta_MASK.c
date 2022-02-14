
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_t ;
typedef int input_attachment_t ;
typedef int demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ***,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;

__attribute__((used)) static void FUNC_4(demux_t *VAR_2)
{
    vlc_meta_t *VAR_3 = FUNC_3();
    if (FUNC_1(VAR_3 == ((void*)0)) )
        return;

    input_attachment_t **VAR_4;
    int VAR_5;

    FUNC_0(VAR_2, VAR_1, VAR_3);
    FUNC_0(VAR_2, VAR_0, &VAR_4, &VAR_5);

    FUNC_2(VAR_3);
}
