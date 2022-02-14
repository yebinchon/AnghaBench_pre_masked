
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_6__ {int force; } ;
struct TYPE_7__ {int pf_readdir; int pf_control; int s; TYPE_1__ obj; } ;
typedef TYPE_2__ stream_t ;
typedef int input_item_t ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int const*,char,int) ;
 int FUNC_4 (char*,int const*,int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (int ,int const**,int) ;

int FUNC_8(vlc_object_t *VAR_4)
{
    stream_t *VAR_5 = (stream_t *)VAR_4;

    FUNC_0(VAR_5);
    if (!FUNC_6(VAR_5, ".conf" ) && !VAR_5->obj.force )
        return VAR_1;


    const uint8_t *VAR_6;
    int VAR_7 = FUNC_7(VAR_5->s, &VAR_6, 1023);
    if (VAR_7 <= 0)
        return VAR_1;

    const uint8_t *VAR_8 = FUNC_3(VAR_6, '\n', VAR_7);
    if (VAR_8 == ((void*)0))
        return VAR_1;
    VAR_7 = VAR_8 - VAR_6;

    char VAR_9[VAR_7 + 1];
    FUNC_4(VAR_9, VAR_6, VAR_7);
    VAR_9[VAR_7] = '\0';

    input_item_t *VAR_10 = FUNC_1(VAR_9);
    if (VAR_10 == ((void*)0))
        return VAR_1;
    FUNC_2(VAR_10);

    FUNC_5(VAR_5, "found valid channels.conf file");
    VAR_5->pf_control = VAR_3;
    VAR_5->pf_readdir = VAR_0;

    return VAR_2;
}
