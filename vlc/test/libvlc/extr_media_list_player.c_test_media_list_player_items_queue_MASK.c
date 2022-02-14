
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct check_items_order_data {int dummy; } ;
typedef int libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef int libvlc_media_list_player_t ;
typedef int libvlc_instance_t ;
typedef int libvlc_event_manager_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct check_items_order_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,struct check_items_order_data*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,char*) ;
 int * FUNC_12 (int *,char const*) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int,char const**) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *,int *,char const*) ;
 int FUNC_17 (struct check_items_order_data*,int *) ;
 int FUNC_18 (int *) ;
 char* VAR_2 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (struct check_items_order_data*) ;

__attribute__((used)) static void FUNC_21(const char** VAR_3, int VAR_4)
{
    libvlc_instance_t *VAR_5;
    libvlc_media_t *VAR_6;
    libvlc_media_list_t *VAR_7;
    libvlc_media_list_player_t *VAR_8;

    const char * VAR_9 = VAR_2;

    FUNC_19 ("Testing media player item queue-ing\n");

    VAR_5 = FUNC_14 (VAR_4, VAR_3);
    FUNC_0 (VAR_5 != ((void*)0));

    VAR_6 = FUNC_12 (VAR_5, VAR_9);
    FUNC_0(*VAR_6);

    VAR_7 = FUNC_4 (VAR_5);
    FUNC_0 (VAR_7 != ((void*)0));

    VAR_8 = FUNC_6 (VAR_5);
    FUNC_0(*VAR_8);

    FUNC_3 (VAR_7, VAR_6);

    static struct check_items_order_data VAR_10;
    FUNC_1(&VAR_10);
    FUNC_17(&VAR_10, VAR_6);


    FUNC_17(&VAR_10, FUNC_16 (VAR_5, VAR_7, VAR_9));
    FUNC_17(&VAR_10, FUNC_16 (VAR_5, VAR_7, VAR_9));
    FUNC_17(&VAR_10, FUNC_16 (VAR_5, VAR_7, VAR_9));


    libvlc_media_t *VAR_11 = FUNC_11(VAR_5, "node");
    FUNC_0(*VAR_11);
    FUNC_3(VAR_7, VAR_11);
    FUNC_17(&VAR_10, VAR_11);


    libvlc_media_list_t *VAR_12 = FUNC_13(VAR_11);
    FUNC_17(&VAR_10, FUNC_16(VAR_5, VAR_12, VAR_9));
    FUNC_17(&VAR_10, FUNC_16(VAR_5, VAR_12, VAR_9));
    FUNC_17(&VAR_10, FUNC_16(VAR_5, VAR_12, VAR_9));
    FUNC_10(VAR_12);

    FUNC_9 (VAR_8, VAR_7);

    libvlc_event_manager_t * VAR_13 = FUNC_5(VAR_8);
    int VAR_14 = FUNC_2(VAR_13, VAR_1,
                                  VAR_0, &VAR_10);
    FUNC_0(VAR_14 == 0);

    FUNC_7(VAR_8);


    FUNC_20(&VAR_10);

    FUNC_18 (VAR_8);

    FUNC_8 (VAR_8);
    FUNC_15 (VAR_5);
}
