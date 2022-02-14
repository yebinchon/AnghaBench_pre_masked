
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * data; } ;
struct TYPE_8__ {TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int ssize_t ;
typedef int input_item_t ;
typedef enum input_item_preparse_status { ____Placeholder_input_item_preparse_status } input_item_preparse_status ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int,int *,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(input_item_t *VAR_2,
                  enum input_item_preparse_status VAR_3, void *VAR_4)
{
    FUNC_0(VAR_2);
    vlc_playlist_t *VAR_5 = VAR_4;

    if (VAR_3 != VAR_0)
        return;

    FUNC_2(VAR_5);
    ssize_t VAR_6 = FUNC_1(VAR_5, VAR_2);
    if (VAR_6 != -1)
        FUNC_3(VAR_5, VAR_1, VAR_6,
                            &VAR_5->items.data[VAR_6], 1);
    FUNC_4(VAR_5);
}
