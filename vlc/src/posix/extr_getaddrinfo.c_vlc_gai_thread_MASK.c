
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_gai_req {int done; int result; int hints; int service; int name; int error; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1)
{
    struct vlc_gai_req *VAR_2 = VAR_1;

    VAR_2->error = VAR_0;
    VAR_2->error = FUNC_0(VAR_2->name, VAR_2->service, VAR_2->hints,
                             &VAR_2->result);
    FUNC_1(&VAR_2->done);
    return ((void*)0);
}
