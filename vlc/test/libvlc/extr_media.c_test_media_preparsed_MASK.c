
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_sem_t ;
typedef int libvlc_media_t ;
typedef scalar_t__ libvlc_media_parsed_status_t ;
typedef int libvlc_media_parse_flag_t ;
typedef int libvlc_instance_t ;
typedef int libvlc_event_manager_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,char const*) ;
 int * FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char const*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(libvlc_instance_t *VAR_3, const char *VAR_4,
                                 const char *VAR_5,
                                 libvlc_media_parse_flag_t VAR_6,
                                 libvlc_media_parsed_status_t VAR_7)
{
    FUNC_9 ("test_media_preparsed: %s, expected: %d\n", VAR_4 ? VAR_4 : VAR_5,
              VAR_7);

    libvlc_media_t *VAR_8;
    if (VAR_4 != ((void*)0))
        VAR_8 = FUNC_5 (VAR_3, VAR_4);
    else
        VAR_8 = FUNC_4 (VAR_3, VAR_5);
    FUNC_0 (VAR_8 != ((void*)0));

    vlc_sem_t VAR_9;
    FUNC_11 (&VAR_9, 0);


    libvlc_event_manager_t *VAR_10 = FUNC_2 (VAR_8);
    FUNC_1 (VAR_10, VAR_0, VAR_2, &VAR_9);


    int VAR_11 = FUNC_6(VAR_8, VAR_6, -1);
    FUNC_0(VAR_11 == 0);


    FUNC_12 (&VAR_9);
    FUNC_10 (&VAR_9);


    FUNC_0 (FUNC_3(VAR_8) == VAR_7);
    if (VAR_7 == VAR_1)
        FUNC_8(VAR_8);

    FUNC_7 (VAR_8);
}
