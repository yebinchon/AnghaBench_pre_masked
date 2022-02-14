
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * result; int callable; } ;
typedef TYPE_1__ map_rtp_data ;
typedef int char_u ;
typedef int PyObject ;


 int * FUNC_0 (int ,int *,int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_3(char_u *VAR_1, void *VAR_2)
{
    void **VAR_3 = (void **) VAR_2;
    PyObject *VAR_4;
    map_rtp_data *VAR_5 = *((map_rtp_data **) VAR_3);

    if (!(VAR_4 = FUNC_1((char *)VAR_1)))
    {
 *VAR_3 = ((void*)0);
 return;
    }

    VAR_5->result = FUNC_0(VAR_5->callable,
         VAR_4, ((void*)0));

    FUNC_2(VAR_4);

    if (!VAR_5->result || VAR_5->result != VAR_0)
 *VAR_3 = ((void*)0);
    else
    {
 FUNC_2(VAR_5->result);
 VAR_5->result = ((void*)0);
    }
}
